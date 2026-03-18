/*
 * XREFs of PopPepComponentSetWakeHint @ 0x1405D4E64
 * Callers:
 *     PoFxSetComponentWake @ 0x1405CAD20 (PoFxSetComponentWake.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x140354B48 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x1403565AC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1403565F8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1403567F8 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x140356948 (PopPepLockActivityLink.c)
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
  v4 = (__int64)&a1[52 * a2 + 48];
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
    PopPepUpdateIdleState((__int64)a1, (unsigned int *)v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork(ready, v10);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v12);
}
