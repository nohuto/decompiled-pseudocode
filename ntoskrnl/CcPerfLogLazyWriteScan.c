void __fastcall CcPerfLogLazyWriteScan(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+48h] [rbp-51h]
  int v17; // [rsp+4Ch] [rbp-4Dh]
  __int64 v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  __int64 v26; // [rsp+90h] [rbp-9h]

  v14 = 0;
  v19 = a5;
  v20 = a6;
  v21 = a7;
  v22 = a8;
  v23 = a9;
  v24 = a10;
  v25 = a11;
  v26 = a12;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v12 = &v15;
  v13 = 88;
  EtwTraceKernelEvent((__int64)&v12, 1u, 0x80020000, 0x1605u, 0x400102u);
}
