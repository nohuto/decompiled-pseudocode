void __fastcall CCD_SET_STRING_ID::_Cleanup(CCD_SET_STRING_ID *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *((_WORD *)this + 16) = 0;
  operator delete(*((void **)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v2 = (void *)*((_QWORD *)this + 6);
  *((_DWORD *)this + 10) = 0;
  operator delete(v2);
  *((_QWORD *)this + 6) = 0LL;
  v3 = (void *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 2) = 0;
  operator delete(v3);
  *((_QWORD *)this + 2) = 0LL;
}
