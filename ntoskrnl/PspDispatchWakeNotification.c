/*
 * XREFs of PspDispatchWakeNotification @ 0x1407519CC
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140751738 (PspFreezeJobTree.c)
 * Callees:
 *     PspSendWakeNotification @ 0x140751A40 (PspSendWakeNotification.c)
 */

__int64 __fastcall PspDispatchWakeNotification(PVOID Object, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

  result = (unsigned int)(*a2 | a2[1]);
  if ( *(_QWORD *)a2 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a3 + 8);
    do
    {
      result = PspSendWakeNotification(Object, *v6 != 0LL ? 3 : 0);
      if ( (_BYTE)result )
        break;
      ++v5;
      ++v6;
    }
    while ( v5 < 7 );
  }
  return result;
}
