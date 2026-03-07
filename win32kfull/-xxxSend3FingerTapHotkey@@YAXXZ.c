void xxxSend3FingerTapHotkey(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentKbdTables; // rax
  __int64 v3; // rbx
  int v4; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v5; // [rsp+28h] [rbp-D8h]
  __int16 v6; // [rsp+2Ah] [rbp-D6h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int16 v8; // [rsp+50h] [rbp-B0h]
  __int16 v9; // [rsp+52h] [rbp-AEh]
  int v10; // [rsp+70h] [rbp-90h]
  __int16 v11; // [rsp+78h] [rbp-88h]
  __int16 v12; // [rsp+7Ah] [rbp-86h]
  int v13; // [rsp+98h] [rbp-68h]
  __int16 v14; // [rsp+A0h] [rbp-60h]
  __int16 v15; // [rsp+A2h] [rbp-5Eh]
  int v16; // [rsp+C0h] [rbp-40h]
  __int16 v17; // [rsp+C8h] [rbp-38h]
  __int16 v18; // [rsp+CAh] [rbp-36h]
  int v19; // [rsp+CCh] [rbp-34h]
  int v20; // [rsp+E8h] [rbp-18h]
  __int16 v21; // [rsp+F0h] [rbp-10h]
  __int16 v22; // [rsp+F2h] [rbp-Eh]
  int v23; // [rsp+F4h] [rbp-Ch]
  int v24; // [rsp+110h] [rbp+10h]
  __int16 v25; // [rsp+118h] [rbp+18h]
  __int16 v26; // [rsp+11Ah] [rbp+1Ah]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  int v28; // [rsp+138h] [rbp+38h]
  __int16 v29; // [rsp+140h] [rbp+40h]
  __int16 v30; // [rsp+142h] [rbp+42h]
  int v31; // [rsp+144h] [rbp+44h]

  memset_0(&v4, 0, 0x140uLL);
  v28 = 1;
  v24 = 1;
  v20 = 1;
  v16 = 1;
  v13 = 1;
  v10 = 1;
  v7 = 1;
  v17 = 133;
  v14 = 133;
  v4 = 1;
  v29 = 91;
  v5 = 91;
  v25 = 17;
  v8 = 17;
  v21 = 16;
  v11 = 16;
  CurrentKbdTables = GetCurrentKbdTables(v1, v0);
  v3 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    v30 = InternalMapVirtualKeyEx(91LL, 0LL, CurrentKbdTables);
    v6 = v30;
    v26 = InternalMapVirtualKeyEx(17LL, 0LL, v3);
    v9 = v26;
    v22 = InternalMapVirtualKeyEx(16LL, 0LL, v3);
    v12 = v22;
    v18 = InternalMapVirtualKeyEx(133LL, 0LL, v3);
    v15 = v18;
  }
  v31 = 2;
  v27 = 2;
  v23 = 2;
  v19 = 2;
  xxxSendInput(8LL, (__int64)&v4);
}
