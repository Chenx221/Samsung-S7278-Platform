const char *mke2fs_default_profile = 
  "[defaults]\n"
  "	base_features = sparse_super,filetype,resize_inode,dir_index,ext_attr\n"
  "	blocksize = 4096\n"
  "	inode_size = 256\n"
  "	inode_ratio = 16384\n"
  "\n"
  "[fs_types]\n"
  "	ext3 = {\n"
  "		features = has_journal\n"
  "	}\n"
  "	ext4 = {\n"
  "		features = has_journal,extent,huge_file,flex_bg,uninit_bg,dir_nlink,extra_isize\n"
  "		inode_size = 256\n"
  "	}\n"
  "	ext4dev = {\n"
  "		features = has_journal,extent,huge_file,flex_bg,uninit_bg,dir_nlink,extra_isize\n"
  "		inode_size = 256\n"
  "		options = test_fs=1\n"
  "	}\n"
  "	small = {\n"
  "		blocksize = 1024\n"
  "		inode_size = 128\n"
  "		inode_ratio = 4096\n"
  "	}\n"
  "	floppy = {\n"
  "		blocksize = 1024\n"
  "		inode_size = 128\n"
  "		inode_ratio = 8192\n"
  "	}\n"
  "	news = {\n"
  "		inode_ratio = 4096\n"
  "	}\n"
  "	largefile = {\n"
  "		inode_ratio = 1048576\n"
  "		blocksize = -1\n"
  "	}\n"
  "	largefile4 = {\n"
  "		inode_ratio = 4194304\n"
  "		blocksize = -1\n"
  "	}\n"
  "	hurd = {\n"
  "	     blocksize = 4096\n"
  "	     inode_size = 128\n"
  "	}\n"
;
