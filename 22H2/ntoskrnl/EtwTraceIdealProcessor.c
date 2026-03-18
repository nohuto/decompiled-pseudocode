/*
 * XREFs of EtwTraceIdealProcessor @ 0x1405FCE20
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039E750 (KiUpdateThreadCpuSets.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403CE7F8 (KeSetIdealProcessorThreadEx.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x1405768AC (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceIdealProcessor(__int64 a1, __int16 a2, int a3, int a4)
{
  __int64 result; // rax
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v5[0] = *(_DWORD *)(a1 + 1232);
    v6 = v5;
    v8 = 0;
    v5[2] = a4;
    v5[1] = a3;
    v7 = 12;
    return EtwTraceKernelEvent((int)&v6, 1, 0x88000000, a2, 22026499);
  }
  return result;
}
