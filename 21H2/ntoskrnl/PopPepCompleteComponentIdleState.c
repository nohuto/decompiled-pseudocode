/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x1405D4C64
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     PopPepCountReadyActivities @ 0x1403565AC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1403565F8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 *     PopPepLockActivityLink @ 0x140356948 (PopPepLockActivityLink.c)
 *     PopPlNotifyDeviceFState @ 0x14045EA32 (PopPlNotifyDeviceFState.c)
 */

__int64 __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // rcx
  char v7; // bp
  int v8; // r8d
  unsigned int ready; // eax
  unsigned int v10; // r9d
  __int64 v12; // [rsp+20h] [rbp-18h]
  KIRQL v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  v3 = 208LL * a2 + a1 + 192;
  v5 = PopPepLockActivityLink(a1, (volatile LONG *)v3, 6u, 1u, &v13);
  v6 = *(_QWORD *)(v3 + 64);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 12) == 1 )
  {
    *(_DWORD *)(v6 + 12) = 2;
    PopPepCountReadyActivities((unsigned int *)a1, v3, 2);
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    ready = PopPepCountReadyActivities((unsigned int *)a1, v3, v8);
    PopPepRequestWork(v10, ready);
    return PopPepReleaseActivityLink(a1, (volatile LONG *)v3, v7, v13);
  }
  else
  {
    PopPepReleaseActivityLink(a1, (volatile LONG *)v3, v5, v13);
    PopPepProcessEvent(a1, v3, 1u, 6u, v12, 0LL);
    return PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
