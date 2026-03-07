char __fastcall DirectComposition::CVisualTargetMarshaler::EmitRoot(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  char *v5; // rcx
  char *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
    {
      v5 = (char *)v8;
      *(_DWORD *)v8 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 392;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      if ( !*((_QWORD *)this + 8) )
      {
LABEL_6:
        *((_DWORD *)this + 4) &= ~0x20u;
        return v4;
      }
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
      {
        v6 = (char *)v8;
        *(_DWORD *)v8 = 24;
        *(_OWORD *)(v6 + 4) = 0LL;
        *((_DWORD *)v6 + 5) = 0;
        *((_DWORD *)v6 + 1) = 390;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
        *(_QWORD *)(v6 + 12) = *(unsigned int *)(*((_QWORD *)this + 8) + 32LL);
        v6[20] = 1;
        *(_DWORD *)(*((_QWORD *)this + 8) + 16LL) |= 0x10u;
        goto LABEL_6;
      }
    }
    return 0;
  }
  return v4;
}
