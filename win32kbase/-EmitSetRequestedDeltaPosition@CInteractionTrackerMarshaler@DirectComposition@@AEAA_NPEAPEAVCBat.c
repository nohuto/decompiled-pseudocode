char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedDeltaPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 32;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 1) = 214;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 33);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 34);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 52);
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 35);
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 33) = 0;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 52) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
