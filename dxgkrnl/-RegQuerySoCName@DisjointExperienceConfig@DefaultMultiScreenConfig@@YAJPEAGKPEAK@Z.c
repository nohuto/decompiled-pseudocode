int __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  int result; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // [rsp+28h] [rbp-D8h]
  unsigned int v9; // [rsp+30h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v11; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const wchar_t *v15; // [rsp+70h] [rbp-90h]
  __int64 *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+A8h] [rbp-58h]
  __int128 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  _OWORD v25[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+130h] [rbp+30h]
  int v27; // [rsp+138h] [rbp+38h]
  char v28; // [rsp+140h] [rbp+40h] BYREF

  v10 = 34078720LL;
  *(_WORD *)this = 0;
  *a3 = 0;
  v25[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo";
  v27 = *(_DWORD *)L"o";
  v25[2] = *(_OWORD *)L"e\\System\\Platform\\DeviceTargetingInfo";
  v11 = (unsigned __int16 *)&v28;
  v25[4] = *(_OWORD *)L"m\\DeviceTargetingInfo";
  v25[1] = *(_OWORD *)L"y\\Machine\\System\\Platform\\DeviceTargetingInfo";
  v15 = L"PhoneSOCVersion";
  v26 = *(_QWORD *)L"gInfo";
  v25[3] = *(_OWORD *)L"\\Platform\\DeviceTargetingInfo";
  v16 = &v10;
  v22 = 0LL;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 292;
  v25[5] = *(_OWORD *)L"TargetingInfo";
  v17 = 0x1000000;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v24 = 0LL;
  result = RtlQueryRegistryValuesEx(0LL, v25, &v13, 0LL, 0LL);
  if ( result < 0 )
  {
    if ( result == -1073741772 )
      return 0;
  }
  else
  {
    v12 = 0LL;
    result = RtlStringCchCopyNExW(
               (unsigned __int16 *)this,
               v7,
               v11,
               (unsigned __int64)(unsigned __int16)v10 >> 1,
               &v12,
               v8,
               v9);
    if ( result >= 0 )
      *a3 = ((char *)v12 - (char *)this) >> 1;
  }
  return result;
}
