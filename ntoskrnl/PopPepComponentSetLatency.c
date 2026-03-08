/*
 * XREFs of PopPepComponentSetLatency @ 0x1402EE890
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402EE7E0 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepComponentGetLatencyIdleState @ 0x1402EE980 (PopPepComponentGetLatencyIdleState.c)
 *     PopPepUpdateIdleState @ 0x140304DB8 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x140307578 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1403075C4 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140307608 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x14030768C (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140307780 (PopPepPromoteActivities.c)
 */

__int64 __fastcall PopPepComponentSetLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bp
  unsigned int ready; // eax
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // eax
  char v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  v4 = 208LL * a2 + a1 + 192;
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v4, a3);
  v7 = PopPepLockActivityLink(a1, v4, 6LL, 1LL, &v16);
  *(_QWORD *)(v4 + 112) = a3;
  v10 = v7;
  if ( *(_DWORD *)(v4 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v4 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v4, 2LL);
    LOBYTE(v12) = 1;
    v13 = ready;
    PopPepUpdateIdleState(a1, v4, v12);
    PopPepPromoteActivities(a1, v4, 2LL);
    v14 = PopPepCountReadyActivities(a1, v4, 2LL);
    PopPepRequestWork(a1, v13, v14);
  }
  LOBYTE(v9) = v16;
  LOBYTE(v8) = v10;
  return PopPepReleaseActivityLink(a1, v4, v8, v9);
}
