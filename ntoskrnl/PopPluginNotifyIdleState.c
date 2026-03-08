/*
 * XREFs of PopPluginNotifyIdleState @ 0x14045A7CE
 * Callers:
 *     PopPepNotifyIdleState @ 0x1402EFAF0 (PopPepNotifyIdleState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1402EFB90 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall PopPluginNotifyIdleState(__int64 *a1, int a2, int a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  char v6; // di
  char v8; // al
  char v9; // cl
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  char v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+31h] [rbp-17h]
  int v16; // [rsp+32h] [rbp-16h]
  __int16 v17; // [rsp+36h] [rbp-12h]

  v4 = a1[9];
  v5 = a1[8];
  v6 = a2;
  v16 = 0;
  v17 = 0;
  v11 = v4;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v5 + 96))(19LL, &v11);
  v9 = v15;
  if ( !v8 )
    v9 = 1;
  v15 = v9;
  if ( !v9 )
  {
    PopFxAddLogEntry(a1[6], v6, 18, 0LL);
    return v15;
  }
  return v9;
}
