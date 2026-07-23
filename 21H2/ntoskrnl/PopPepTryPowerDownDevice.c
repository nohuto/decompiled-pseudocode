/*
 * XREFs of PopPepTryPowerDownDevice @ 0x1402828E0
 * Callers:
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x140282EF8 (PopPepStartActivity.c)
 *     PopPepReleaseActivityLink @ 0x1402830F8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14028316C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1402832F8 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x1402836C8 (PopPepTriggerActivity.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall PopPepTryPowerDownDevice(__int64 a1, __int64 a2)
{
  char started; // di
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  KIRQL v9; // r15
  unsigned int v10; // r14d

  started = 0;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v8 = (*(_BYTE *)(a1 + 24) & 1) == 0;
  v9 = v5;
  *(_BYTE *)(a1 + 125) = 1;
  if ( v8 && !*(_DWORD *)(a1 + 140) && *(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 104) && !**(_DWORD **)(a1 + 112) )
  {
    v10 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 4LL, 0LL);
    PopPepPromoteActivities(a1, 0LL, 1LL);
    if ( a2 && **(_DWORD **)(a1 + 104) == 2 )
      started = PopPepStartActivity(a1, 0, (int)a1 + 72, 4, a1 + 120, a2);
    else
      PopPepRequestWork(v10, *(unsigned int *)(a1 + 120));
  }
  LOBYTE(v7) = v9;
  LOBYTE(v6) = 1;
  PopPepReleaseActivityLink(a1, 0LL, v6, v7);
  return started;
}
