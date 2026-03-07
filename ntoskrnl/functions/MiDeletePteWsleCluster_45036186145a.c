__int64 __fastcall MiDeletePteWsleCluster(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v11; // [rsp+34h] [rbp-F4h]
  __int16 v12; // [rsp+36h] [rbp-F2h]
  __int64 v13; // [rsp+38h] [rbp-F0h]
  __int64 v14; // [rsp+40h] [rbp-E8h]
  __int64 v15; // [rsp+48h] [rbp-E0h]
  _BYTE v16[152]; // [rsp+50h] [rbp-D8h] BYREF

  v12 = 0;
  memset(v16, 0, sizeof(v16));
  v8 = a1[1];
  if ( !v8 )
    return 0LL;
  v11 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v13 = 20LL;
  v10 = 1;
  MiInsertTbFlushEntry((__int64)&v10, v8 << 25 >> 16, a1[2], 0);
  MiTerminateWsleCluster(a1);
  return MiDeletePteList((__int64)&v10, a2, a3, a4, 0);
}
