char __fastcall DirectComposition::CInkMarshaler::EmitBasicStateUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 56;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_OWORD *)(v3 + 20) = 0LL;
    *(_OWORD *)(v3 + 36) = 0LL;
    *((_DWORD *)v3 + 13) = 0;
    *((_DWORD *)v3 + 1) = 184;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 56);
    *((_DWORD *)v3 + 7) = *((_DWORD *)this + 18);
    *((_OWORD *)v3 + 2) = *(_OWORD *)((char *)this + 76);
    *((_QWORD *)v3 + 6) = *(_QWORD *)((char *)this + 92);
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
