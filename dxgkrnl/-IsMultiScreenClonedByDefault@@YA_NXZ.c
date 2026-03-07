char IsMultiScreenClonedByDefault(void)
{
  __int128 v0; // xmm1
  char v1; // bl
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // eax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h]
  const wchar_t *v12; // [rsp+50h] [rbp-B0h]
  int *v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+88h] [rbp-78h]
  __int128 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  _OWORD v22[9]; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+140h] [rbp+40h]
  wchar_t v24; // [rsp+144h] [rbp+44h]

  v11 = 292;
  v0 = *(_OWORD *)L"y\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MultiScreen";
  v14 = 0x4000000;
  v19 = 0LL;
  v1 = 0;
  v12 = L"ClonedByDefault";
  v20 = 0LL;
  v13 = &v9;
  v9 = 0;
  v22[0] = *(_OWORD *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MultiScreen";
  v21 = 0LL;
  v2 = *(_OWORD *)L"e\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MultiScreen";
  v10 = 0LL;
  v22[1] = v0;
  v15 = 0LL;
  v3 = *(_OWORD *)L"re\\Microsoft\\Windows NT\\CurrentVersion\\MultiScreen";
  v16 = 0;
  v22[2] = v2;
  v17 = 0LL;
  v4 = *(_OWORD *)L"soft\\Windows NT\\CurrentVersion\\MultiScreen";
  v18 = 0;
  v22[3] = v3;
  v5 = *(_OWORD *)L"dows NT\\CurrentVersion\\MultiScreen";
  v22[4] = v4;
  v6 = *(_OWORD *)L"CurrentVersion\\MultiScreen";
  v22[5] = v5;
  v22[6] = v6;
  v22[7] = *(_OWORD *)L"ersion\\MultiScreen";
  v7 = *(_DWORD *)L"en";
  v22[8] = *(_OWORD *)L"ultiScreen";
  v23 = v7;
  v24 = aRegistryMachin_4[74];
  if ( (int)RtlQueryRegistryValuesEx(0LL, v22, &v10, 0LL, 0LL) >= 0 )
    return v9 != 0;
  return v1;
}
