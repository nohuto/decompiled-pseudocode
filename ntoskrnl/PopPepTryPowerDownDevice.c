/*
 * XREFs of PopPepTryPowerDownDevice @ 0x1403050D0
 * Callers:
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x1403072CC (PopPepStartActivity.c)
 *     PopPepRequestWork @ 0x1403075C4 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140307608 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x14030768C (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140307780 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x140307C1C (PopPepTriggerActivity.c)
 */

char __fastcall PopPepTryPowerDownDevice(__int64 a1, __int64 a2)
{
  char started; // di
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // r15
  unsigned int v8; // ebp
  char v10; // [rsp+50h] [rbp+8h] BYREF

  started = 0;
  v10 = 0;
  v7 = PopPepLockActivityLink(a1, 0LL, 6LL, 4LL, &v10);
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0
    && !*(_DWORD *)(a1 + 140)
    && *(_BYTE *)(a1 + 136)
    && !**(_DWORD **)(a1 + 104)
    && !**(_DWORD **)(a1 + 112) )
  {
    v8 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 4LL, 0LL);
    PopPepPromoteActivities(a1, 0LL, 1LL);
    if ( a2 && **(_DWORD **)(a1 + 104) == 2 )
      started = PopPepStartActivity(a1, 0, (int)a1 + 72, 4, a1 + 120, a2);
    else
      PopPepRequestWork(a1, v8, *(unsigned int *)(a1 + 120));
  }
  LOBYTE(v6) = v10;
  LOBYTE(v5) = v7;
  PopPepReleaseActivityLink(a1, 0LL, v5, v6);
  return started;
}
