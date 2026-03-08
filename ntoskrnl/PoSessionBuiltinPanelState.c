/*
 * XREFs of PoSessionBuiltinPanelState @ 0x14059BAF0
 * Callers:
 *     TtmpCallSetBuiltinPanelState @ 0x1409A0098 (TtmpCallSetBuiltinPanelState.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x140994CF0 (PopBlockSessionSwitch.c)
 */

__int64 __fastcall PoSessionBuiltinPanelState(__int64 a1, int a2)
{
  int v2; // ebx
  int v4; // [rsp+20h] [rbp-30h] BYREF
  char v5; // [rsp+24h] [rbp-2Ch]
  __int16 v6; // [rsp+25h] [rbp-2Bh]
  char v7; // [rsp+27h] [rbp-29h]
  __int64 v8; // [rsp+28h] [rbp-28h]
  int *v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF

  v13 = a2;
  v2 = a1;
  v12 = 0;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v12);
  v14 = v2;
  v9 = &v14;
  v6 = 0;
  v7 = 0;
  v8 = 4LL;
  v10 = 0LL;
  v4 = 7;
  v5 = 0;
  v11 = 0LL;
  ((void (__fastcall *)(__int64, int *, __int64, int *))PopInvokeWin32Callout)(5LL, &v4, 1LL, &v13);
  return PopBlockSessionSwitch(0LL, &v12);
}
