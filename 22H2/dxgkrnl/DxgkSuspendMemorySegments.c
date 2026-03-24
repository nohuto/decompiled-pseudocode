/*
 * XREFs of DxgkSuspendMemorySegments @ 0x1C021833C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C019C8E0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0217AE8 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkSuspendMemorySegments(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ADAPTER_RENDER *v6; // rcx

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2);
    v4 = -1073741811;
    *(_QWORD *)(v3 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v3);
    return v4;
  }
  v6 = *(ADAPTER_RENDER **)(a1 + 2704);
  if ( !v6 )
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v3 + 24) = a1;
    v4 = -1073741637;
    *(_QWORD *)(v3 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  return ADAPTER_RENDER::SuspendMemorySegments(v6);
}
