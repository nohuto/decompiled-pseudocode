char __fastcall DirectComposition::CManipulationTransformMarshaler::EmitSetComponents(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 60;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_OWORD *)(v4 + 20) = 0LL;
      *(_OWORD *)(v4 + 36) = 0LL;
      *(_QWORD *)(v4 + 52) = 0LL;
      *((_DWORD *)v4 + 1) = 253;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 19);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 20);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 21);
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 22);
      *((_DWORD *)v4 + 8) = *((_DWORD *)this + 23);
      *((_DWORD *)v4 + 9) = *((_DWORD *)this + 24);
      *((_DWORD *)v4 + 10) = *((_DWORD *)this + 25);
      *((_DWORD *)v4 + 11) = *((_DWORD *)this + 26);
      *((_DWORD *)v4 + 12) = *((_DWORD *)this + 27);
      *((_DWORD *)v4 + 13) = *((_DWORD *)this + 28);
      *((_DWORD *)v4 + 14) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 4) |= 0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
