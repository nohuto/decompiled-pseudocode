/*
 * XREFs of PopPepNotifyIdleState @ 0x1403A49E0
 * Callers:
 *     PopPluginComponentIdleState @ 0x1403A4984 (PopPluginComponentIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140261A84 (PopPepProcessEvent.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4A78 (PopPlNotifyDeviceFState.c)
 *     PopPluginNotifyIdleState @ 0x14056D9D0 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // r14
  unsigned int *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a4;
  v8 = (unsigned int *)(a1 + 200LL * a2);
  if ( !*(_BYTE *)(a1 + 124)
    || (LOBYTE(a4) = 1, (unsigned __int8)PopPluginNotifyIdleState(*(_QWORD *)(a1 + 32), v8[48], v8[90], a4)) )
  {
    v5 = PopPepProcessEvent(a1, (__int64)(v8 + 46), 1u, 6u, v10, v6);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, v8[91], v8[90], 1);
  }
  return v5;
}
