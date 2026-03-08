/*
 * XREFs of VidSchiWaitForCompletePreemption @ 0x1C01072AC
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014360 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompletePreemption @ 0x1C003A5D8 (VidSchiCompletePreemption.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForCompletePreemption(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // eax
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  memset(v5, 0, 0xA0uLL);
  v3 = *(unsigned __int16 *)(v2 + 4);
  v5[8] |= 0x41u;
  v5[4] = 2;
  v5[5] = 1;
  v5[12] = v3;
  VidSchiProfilePerformanceTick(18LL, v1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v2) = VidSchWaitForCompletionEvent(v1, (__int64)v5, 0xFFFFFFFFLL);
  VidSchiProfilePerformanceTick(19LL, v1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v2;
}
