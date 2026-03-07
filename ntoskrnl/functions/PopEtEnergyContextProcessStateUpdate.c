__int64 __fastcall PopEtEnergyContextProcessStateUpdate(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-1E8h] BYREF
  int v6; // [rsp+24h] [rbp-1E4h]
  _QWORD *v7; // [rsp+28h] [rbp-1E0h]
  __int64 v8; // [rsp+30h] [rbp-1D8h]
  _OWORD *v9; // [rsp+38h] [rbp-1D0h]
  _OWORD v10[27]; // [rsp+40h] [rbp-1C8h] BYREF

  v1 = a1[285];
  v6 = 0;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  ++*(_DWORD *)(v1 + 468);
  PsQueryProcessEnergyValues(a1, v10);
  v6 = 0;
  v8 = 0LL;
  v9 = v10;
  v5 = 3;
  v7 = a1;
  return PopEtEnumEnergyTrackers(v3, &v5);
}
