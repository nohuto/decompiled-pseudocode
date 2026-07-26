/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0145E64
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0145F24 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0040B00 (memset.c)
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x1C0109578 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C012572C (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x1C0125B6C (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x1C014455C (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  PVOID PoolWithTag; // rax
  void *v1; // rcx
  __int64 v2; // rbx
  unsigned int Settings; // ebx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x68uLL);
    Rtl::KHashTableBase<1>::KHashTableBase<1>(v2);
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_WORD *)(v2 + 96) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  qword_1C00E55C8 = (PVOID)v2;
  if ( !v2 )
    return 3221225626LL;
  Settings = ndisBindBuilderLoadSettings(v1);
  if ( !Settings )
  {
    if ( !*((_BYTE *)qword_1C00E55C8 + 97) )
      return 0LL;
    Settings = ndisEnsureBindingInfoLoaded();
    if ( !Settings )
      return 0LL;
  }
  ndisBindBuilderCleanup();
  return Settings;
}
