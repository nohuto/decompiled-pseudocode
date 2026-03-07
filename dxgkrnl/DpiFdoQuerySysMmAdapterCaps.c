__int64 __fastcall DpiFdoQuerySysMmAdapterCaps(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, __int128 *); // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v10)(__int64, __int128 *); // rax
  int v11; // eax
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  __int64 *v15; // [rsp+38h] [rbp-18h]
  __int128 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  Feature_DmaRemapping__private_ReportDeviceUsage();
  v18 = 0LL;
  v17 = 0;
  v14 = 0LL;
  v15 = &v18;
  v6 = *(__int64 (__fastcall **)(__int64, __int128 *))(a1 + 272);
  v13 = 0LL;
  LODWORD(v13) = 34;
  v16 = 0LL;
  LODWORD(v16) = 8;
  v7 = v6(a2, &v13);
  v8 = v7;
  if ( v7 < 0
    || (LODWORD(v13) = 35,
        v15 = (__int64 *)&v17,
        v10 = *(__int64 (__fastcall **)(__int64, __int128 *))(a1 + 272),
        LODWORD(v16) = 4,
        v11 = v10(a2, &v13),
        v8 = v11,
        v11 < 0) )
  {
    WdLogSingleEntry1(2LL, v8);
    return (unsigned int)v8;
  }
  else
  {
    *(_QWORD *)a3 = v18;
    *(_DWORD *)(a3 + 16) ^= (*(_DWORD *)(a3 + 16) ^ v17) & 7;
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    {
      v12 = *(_DWORD *)(a3 + 16) ^ (*(_DWORD *)(a3 + 16) ^ v17) & 8;
      *(_DWORD *)(a3 + 16) = v12;
      if ( (v12 & 8) != 0 )
        *(_DWORD *)(a3 + 16) = v12 | 5;
    }
    return 0LL;
  }
}
