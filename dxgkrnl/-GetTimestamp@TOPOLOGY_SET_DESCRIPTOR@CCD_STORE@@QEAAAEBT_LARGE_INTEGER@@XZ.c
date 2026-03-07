const union _LARGE_INTEGER *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  const WCHAR *v7; // [rsp+40h] [rbp-9h]
  __int64 *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]
  __int128 v12; // [rsp+68h] [rbp+1Fh]
  __int128 v13; // [rsp+78h] [rbp+2Fh]
  __int128 v14; // [rsp+88h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+4Fh]
  __int64 v16; // [rsp+B0h] [rbp+67h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v2 = *((_QWORD *)this + 8);
    v5 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v7 = L"Timestamp";
    v8 = &v16;
    v15 = 0LL;
    v16 = 4294967288LL;
    v6 = 292;
    v9 = 184549376;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v3 = RtlQueryRegistryValuesEx(0x40000000LL, v2, &v5, 0LL, 0LL);
    if ( v3 < 0 )
      WdLogSingleEntry1(2LL, v3);
    else
      *v1 = v16;
  }
  return (const union _LARGE_INTEGER *)v1;
}
