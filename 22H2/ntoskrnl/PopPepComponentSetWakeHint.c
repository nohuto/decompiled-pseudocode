/*
 * XREFs of PopPepComponentSetWakeHint @ 0x1405743C0
 * Callers:
 *     PoFxSetComponentWake @ 0x1405691E0 (PoFxSetComponentWake.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x14026143C (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x140261488 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1402614FC (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140261688 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x140261D98 (PopPepUpdateIdleState.c)
 */

__int64 __fastcall PopPepComponentSetWakeHint(unsigned int *a1, int a2, char a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  char v7; // al
  char v8; // r14
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v4 = (__int64)&a1[50 * a2 + 46];
  if ( a3 )
    v6 = *(_DWORD *)(v4 + 148);
  else
    v6 = *(_DWORD *)(v4 + 188) - 1;
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v12);
  *(_BYTE *)(v4 + 144) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 164) != v6 )
  {
    *(_DWORD *)(v4 + 164) = v6;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v12);
}
