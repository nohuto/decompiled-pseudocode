/*
 * XREFs of SmGlobalsStart @ 0x140B428A8
 * Callers:
 *     SmInitSystem @ 0x140B427B4 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x14069DF10 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmGlobalsStart(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rdx
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  const wchar_t *v6; // [rsp+40h] [rbp-9h]
  __int64 v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+90h] [rbp+47h]
  int v17; // [rsp+98h] [rbp+4Fh]

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)(*((_QWORD *)PspSystemPartition + 3) + 1960LL);
  if ( *v1 != a1 + 8 )
    __fastfail(3u);
  *v2 = a1 + 8;
  v2[1] = v1;
  *v1 = v2;
  *(_QWORD *)(a1 + 16) = v2;
  v4 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v7 = a1;
  v5 = 288;
  v6 = L"EnableDirtyStores";
  v8 = 0x4000000;
  RtlQueryRegistryValuesEx(
    0LL,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    &v4,
    0LL);
  return 0LL;
}
