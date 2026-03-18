/*
 * XREFs of ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C00C2F2C
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0005674 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0019280 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  unsigned int v2; // edi
  PVOID *i; // rbx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  ExAcquirePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
  {
    v5 = VIDMM_PARTITION::EnsureAdapter(this, (struct VIDMM_GLOBAL *)(i - 5596));
    v2 = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry3(1LL, i - 5596, this, v5);
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      break;
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  return v2;
}
