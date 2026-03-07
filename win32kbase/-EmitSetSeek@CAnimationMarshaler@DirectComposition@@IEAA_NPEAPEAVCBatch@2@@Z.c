char __fastcall DirectComposition::CAnimationMarshaler::EmitSetSeek(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 8) & 0x8000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 10;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 12);
    *(_QWORD *)(v3 + 12) = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    *(_QWORD *)(v3 + 20) = *(_QWORD *)(*((_QWORD *)this + 10) + 40LL);
    *((_DWORD *)this + 8) &= ~0x8000u;
    return 1;
  }
  return 0;
}
