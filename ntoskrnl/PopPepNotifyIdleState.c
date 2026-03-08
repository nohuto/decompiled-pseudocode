/*
 * XREFs of PopPepNotifyIdleState @ 0x1402EFAF0
 * Callers:
 *     PopPluginComponentIdleState @ 0x1402EFA90 (PopPluginComponentIdleState.c)
 * Callees:
 *     PopPlNotifyDeviceFState @ 0x1402EFC60 (PopPlNotifyDeviceFState.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPluginNotifyIdleState @ 0x14045A7CE (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  unsigned int *v7; // rsi

  v5 = 0;
  v7 = (unsigned int *)(a1 + 208LL * a2);
  if ( !*(_BYTE *)(a1 + 124)
    || (LOBYTE(a4) = 1, (unsigned __int8)PopPluginNotifyIdleState(*(_QWORD *)(a1 + 32), v7[50], v7[92], a4)) )
  {
    v5 = PopPepProcessEvent(a1, (int)v7 + 192, 1, 6);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, v7[93], v7[92], 1);
  }
  return v5;
}
