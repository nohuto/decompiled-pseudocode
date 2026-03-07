char __fastcall DirectComposition::CLegacyAnimationTriggerMarshaler::EmitUpdateCommands(
        LARGE_INTEGER *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_OWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 1) = 232;
  *((_DWORD *)v3 + 2) = this[4].LowPart;
  *(LARGE_INTEGER *)(v3 + 12) = this[7];
  if ( !this[7].QuadPart )
    this[7] = KeQueryPerformanceCounter(0LL);
  return 1;
}
