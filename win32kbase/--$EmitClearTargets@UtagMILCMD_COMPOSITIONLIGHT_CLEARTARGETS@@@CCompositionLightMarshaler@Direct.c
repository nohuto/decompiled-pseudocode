char __fastcall DirectComposition::CCompositionLightMarshaler::EmitClearTargets<tagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x20) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 86;
      *((_DWORD *)v4 + 2) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 16) &= ~0x20u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
