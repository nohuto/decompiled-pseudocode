/*
 * XREFs of PopPepComponentSetLatency @ 0x14045E4C2
 * Callers:
 *     PoFxSetComponentLatency @ 0x14045DDB0 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x140354B48 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x1403565AC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1403565F8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1403567F8 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x140356948 (PopPepLockActivityLink.c)
 *     PopPepComponentGetLatencyIdleState @ 0x1403BA314 (PopPepComponentGetLatencyIdleState.c)
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
  v4 = (__int64)&a1[52 * a2 + 48];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v4, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v12);
  *(_QWORD *)(v4 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v4 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, (unsigned int *)v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v12);
}
