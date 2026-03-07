void __fastcall CCD_TOPOLOGY::~CCD_TOPOLOGY(CCD_TOPOLOGY *this)
{
  void *v2; // rcx

  if ( *((_BYTE *)this + 72) )
  {
    BmlFreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
    operator delete(*((void **)this + 8));
  }
  operator delete(*((void **)this + 7));
  v2 = (void *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v2 )
    operator delete(v2);
  CCD_SET_STRING_ID::_Cleanup(this);
}
