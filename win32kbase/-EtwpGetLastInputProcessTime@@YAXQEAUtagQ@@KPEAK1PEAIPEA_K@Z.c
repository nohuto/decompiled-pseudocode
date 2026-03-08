/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C0161690
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0092210 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpGetLastInputProcessTime(
        struct tagQ *const a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  if ( !a1 )
  {
    *a3 = 0;
LABEL_3:
    *a4 = 0;
    return;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  *a3 = a2 - *((_DWORD *)a1 + 104);
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_3;
  *a4 = a2 - *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL);
  if ( a5 )
    *a5 = *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL);
  if ( a6 )
    *a6 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL);
}
