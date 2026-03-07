void __fastcall ClipPlaneIterator::ResetToStart(ClipPlaneIterator *this)
{
  char *v2; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 1) = 0;
  *(_BYTE *)this = 0;
  v2 = (char *)this + 56;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v2, 4u);
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 0x10u);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 4u);
  *((_QWORD *)this + 15) = 0LL;
}
