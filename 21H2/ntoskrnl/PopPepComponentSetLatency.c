/*
 * XREFs of PopPepComponentSetLatency @ 0x14057429C
 * Callers:
 *     PoFxSetComponentLatency @ 0x140569200 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x140261BDC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x140261C28 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x140261C9C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140261E28 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x140261F78 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140262538 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x1403CAEFC (PopPepComponentGetLatencyIdleState.c)
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
