void __fastcall PerfInfoLogIpiSend(__int64 a1, int a2, __int64 a3, int a4, unsigned __int16 *a5)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v12; // ecx
  __int64 v13; // [rsp+38h] [rbp-9h] BYREF
  int v14; // [rsp+40h] [rbp-1h]
  int v15; // [rsp+44h] [rbp+3h]
  int v16; // [rsp+48h] [rbp+7h]
  __int64 v17; // [rsp+50h] [rbp+Fh] BYREF
  int v18; // [rsp+58h] [rbp+17h]
  int v19; // [rsp+5Ch] [rbp+1Bh]
  __int64 *v20; // [rsp+60h] [rbp+1Fh]
  int v21; // [rsp+68h] [rbp+27h]
  int v22; // [rsp+6Ch] [rbp+2Bh]
  unsigned __int16 *v23; // [rsp+70h] [rbp+2Fh]
  int v24; // [rsp+78h] [rbp+37h]
  int v25; // [rsp+7Ch] [rbp+3Bh]

  v22 = 0;
  v14 = a2;
  v13 = a3;
  v6 = *a5;
  v25 = 0;
  v23 = a5 + 4;
  v15 = a4;
  v16 = v6;
  v24 = 8 * v6;
  v20 = &v13;
  v21 = 20;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward(&v12, v7) )
  {
    v7 &= v7 - 1;
    v8 = v12;
    v9 = 32LL * v12 + EtwpHostSiloState + 4284;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 8) & 0x400000) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4233);
        v19 = 0;
        v18 = 8;
        v17 = a1 + 8 * (v10 - 1);
        EtwpLogKernelEvent(
          (__int64)&v17,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4232),
          3u,
          0xF70u,
          0x401A02u);
      }
    }
  }
}
