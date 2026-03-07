void __fastcall DDAMetaData::~DDAMetaData(DDAMetaData *this)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  AUTOEXPANDALLOCATION *v3; // rcx

  v2 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 4);
  if ( v2 )
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v2);
  v3 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 6);
  if ( v3 )
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v3);
}
