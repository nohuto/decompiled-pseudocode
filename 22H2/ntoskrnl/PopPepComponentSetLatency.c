/*
 * XREFs of PopPepComponentSetLatency @ 0x1405741DC
 * Callers:
 *     PoFxSetComponentLatency @ 0x140569140 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x14026143C (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x140261488 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1402614FC (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140261688 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140261D98 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x1403BE474 (PopPepComponentGetLatencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v4 = (__int64)&a1[50 * a2 + 46];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v4, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v12);
  *(_QWORD *)(v4 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v4 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v12);
}
