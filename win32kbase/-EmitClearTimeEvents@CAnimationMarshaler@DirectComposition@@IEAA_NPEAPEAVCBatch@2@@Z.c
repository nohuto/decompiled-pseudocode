char __fastcall DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 8) & 0x10000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 12;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 3;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 12);
    *((_DWORD *)this + 8) &= ~0x10000u;
    return 1;
  }
  return 0;
}
