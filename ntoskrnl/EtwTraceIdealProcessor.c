/*
 * XREFs of EtwTraceIdealProcessor @ 0x1405FA980
 * Callers:
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140399EB4 (KiUpdateThreadCpuSets.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403C9248 (KeSetIdealProcessorThreadEx.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140574290 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwTraceIdealProcessor(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v4[0] = *(_DWORD *)(a1 + 1232);
    v5 = v4;
    v7 = 0;
    v4[2] = a4;
    v4[1] = a3;
    v6 = 12;
    EtwTraceKernelEvent((__int64)&v5, 1u, 0x88000000, a2, 0x1501903u);
  }
}
