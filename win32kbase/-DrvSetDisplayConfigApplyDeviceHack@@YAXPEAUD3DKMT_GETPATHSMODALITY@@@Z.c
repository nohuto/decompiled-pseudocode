/*
 * XREFs of ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D027C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall DrvSetDisplayConfigApplyDeviceHack(struct D3DKMT_GETPATHSMODALITY *a1)
{
  int v2; // r11d
  int v3; // r9d
  int v4; // r8d
  int v5; // r10d
  unsigned int v6; // edx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+90h] [rbp-70h]
  const wchar_t *v14; // [rsp+98h] [rbp-68h]
  char *v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  int v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  const wchar_t *v21; // [rsp+D0h] [rbp-30h]
  char *v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+E0h] [rbp-20h]
  int *v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  int v27; // [rsp+100h] [rbp+0h]
  const wchar_t *v28; // [rsp+108h] [rbp+8h]
  char *v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  __int64 v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  __int128 v35; // [rsp+140h] [rbp+40h]
  __int128 v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+60h]

  QueryTable.Name = L"ScreenPosition.Left";
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  v13 = 288;
  v16 = 67108868;
  QueryTable.DefaultLength = 4;
  QueryTable.EntryContext = &v10;
  v18 = 4;
  QueryTable.DefaultData = &v9;
  v14 = L"ScreenPosition.Top";
  v15 = (char *)&v10 + 4;
  v17 = &v9;
  v21 = L"ScreenPosition.Right";
  v22 = (char *)&v10 + 8;
  v24 = &v9;
  v28 = L"ScreenPosition.Bottom";
  v29 = (char *)&v10 + 12;
  v31 = &v9;
  v20 = 288;
  v23 = 67108868;
  v25 = 4;
  v27 = 288;
  v30 = 67108868;
  v32 = 4;
  v37 = 0LL;
  v9 = 0;
  v10 = 0LL;
  QueryTable.QueryRoutine = 0LL;
  v12 = 0LL;
  v19 = 0LL;
  v26 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0 )
  {
    v2 = v10;
    v3 = DWORD2(v10);
    v4 = HIDWORD(v10);
    v5 = DWORD1(v10);
    if ( (int)v10 >= SDWORD2(v10) || SDWORD1(v10) >= SHIDWORD(v10) )
    {
      WdLogSingleEntry4(2LL, (int)v10, SDWORD1(v10), SDWORD2(v10));
    }
    else
    {
      v6 = 0;
      if ( *((_WORD *)a1 + 10) )
      {
        v7 = v10;
        do
        {
          v8 = 296LL * v6;
          if ( *(_DWORD *)((char *)a1 + v8 + 144) == 0x80000000 && *(_DWORD *)((char *)a1 + v8 + 208) )
          {
            if ( *(_DWORD *)((char *)a1 + v8 + 212) )
            {
              *(_DWORD *)((char *)a1 + v8 + 208) = v3 - v2;
              *(_DWORD *)((char *)a1 + v8 + 212) = v4 - v5;
              *(_OWORD *)((char *)a1 + v8 + 224) = v7;
            }
          }
          ++v6;
        }
        while ( v6 < *((unsigned __int16 *)a1 + 10) );
      }
    }
  }
}
