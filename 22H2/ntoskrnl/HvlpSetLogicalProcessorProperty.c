/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1404F3B98
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 *     HvlConfigurePcc @ 0x1404F7754 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x1404F77D0 (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1404F7830 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1404F7890 (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, const void *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 3264LL);
  *v6 = a1;
  v6[1] = a2;
  memmove(v6 + 2, a3, 0xCB8uLL);
  v8 = (unsigned __int16)HvcallInitiateHypercall(121, *((__int64 *)&v11 + 1), 0LL, v7) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v10);
  return v8;
}
