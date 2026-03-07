void __fastcall CBrushDrawListGenerator::Reset(CBrushDrawListGenerator *this)
{
  __int64 v1; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *((_DWORD *)this + 4) = 0;
  v1 = 0LL;
  for ( *(_OWORD *)((char *)this + 20) = _xmm; (unsigned int)v1 < *((_DWORD *)this + 18); v1 = (unsigned int)(v1 + 1) )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v1 + 5);
    *((_QWORD *)this + v1 + 5) = 0LL;
    if ( v3 )
      (**v3)(v3, 1LL);
  }
  *((_DWORD *)this + 18) = 0;
}
