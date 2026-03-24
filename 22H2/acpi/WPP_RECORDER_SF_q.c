/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000F770
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0002990 (ACPIMapNamedTable.c)
 *     ACPIReleaseGlobalLock @ 0x1C000F4A4 (ACPIReleaseGlobalLock.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C000F580 (ACPIAsyncAcquireGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0059380 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C280 (LinkNodepRunSrsWorker.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C00917A4 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0093FBC (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B730C (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00BC294 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE744 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00BEB28 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00BEC08 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char *v12; // rcx
  int v13; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v12 = (char *)WPP_GLOBAL_Control + 80 * v7;
    if ( (unsigned __int8)v12[41] >= a2 )
      pfnWppTraceMessage(*((_QWORD *)v12 + 3), 43LL, a5, a4, va, 8LL, 0LL);
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, va, 8LL, 0LL);
}
