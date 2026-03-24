/*
 * XREFs of PspDispatchWakeNotification @ 0x14065D294
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x14065D058 (PspFreezeJobTree.c)
 * Callees:
 *     PspSendWakeNotification @ 0x1406165F8 (PspSendWakeNotification.c)
 */

char __fastcall PspDispatchWakeNotification(PVOID Object, _DWORD *a2, __int64 a3)
{
  int v4; // eax
  unsigned int v6; // ebx
  unsigned __int64 *v7; // rdi

  v4 = *a2 | a2[1];
  if ( *(_QWORD *)a2 )
  {
    v6 = 0;
    v7 = (unsigned __int64 *)(a3 + 8);
    do
    {
      LOBYTE(v4) = PspSendWakeNotification(Object, v6, a2, *v7, *v7 != 0 ? 3 : 0);
      if ( (_BYTE)v4 )
        break;
      ++v6;
      ++v7;
    }
    while ( v6 < 7 );
  }
  return v4;
}
