/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C006E0F0
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0055ECC (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006DA90 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155860 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C01645D0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167958 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001EF30 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C001F020 (DrvQueryDisplayConfig.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1)
{
  __int64 v1; // rbx
  int DisplayConfigBufferSizes; // esi
  __int64 v4; // rax
  void *v5; // rax
  bool v6; // sf
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  const wchar_t *v17; // [rsp+98h] [rbp-68h]
  char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  const wchar_t *v24; // [rsp+D0h] [rbp-30h]
  char *v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+E0h] [rbp-20h]
  int *v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+100h] [rbp+0h]
  const wchar_t *v31; // [rsp+108h] [rbp+8h]
  char *v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  __int128 v38; // [rsp+140h] [rbp+40h]
  __int128 v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+160h] [rbp+60h]

  v1 = 0LL;
  *(_OWORD *)a1 = 0LL;
  if ( gProtocolType )
    DisplayConfigBufferSizes = -1073741823;
  else
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(0x12u, (__int64)a1);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v4 = *a1;
    if ( !(_DWORD)v4 )
      goto LABEL_9;
    v5 = Win32AllocPoolZInit(200 * v4, 1836086098LL);
    *((_QWORD *)a1 + 1) = v5;
    if ( !v5 )
    {
      DisplayConfigBufferSizes = -1073741801;
      goto LABEL_9;
    }
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(0x80000012, a1, (__int64)v5, 0LL);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      if ( *a1 )
      {
        v12 = 0;
        QueryTable.DefaultLength = 4;
        QueryTable.Flags = 288;
        QueryTable.DefaultType = 67108868;
        v16 = 288;
        QueryTable.Name = L"ScreenPosition.Left";
        v19 = 67108868;
        QueryTable.EntryContext = &v13;
        QueryTable.DefaultData = &v12;
        v17 = L"ScreenPosition.Top";
        v18 = (char *)&v13 + 4;
        v20 = &v12;
        v24 = L"ScreenPosition.Right";
        v25 = (char *)&v13 + 8;
        v27 = &v12;
        v31 = L"ScreenPosition.Bottom";
        v32 = (char *)&v13 + 12;
        v34 = &v12;
        v21 = 4;
        v23 = 288;
        v26 = 67108868;
        v28 = 4;
        v30 = 288;
        v33 = 67108868;
        v35 = 4;
        v13 = 0LL;
        QueryTable.QueryRoutine = 0LL;
        v15 = 0LL;
        v22 = 0LL;
        v29 = 0LL;
        v36 = 0LL;
        v37 = 0;
        v38 = 0LL;
        v39 = 0LL;
        v40 = 0LL;
        if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
          && (int)v13 < SDWORD2(v13)
          && SDWORD1(v13) < SHIDWORD(v13) )
        {
          v8 = 0;
          if ( *a1 )
          {
            v9 = *((_QWORD *)a1 + 1) + 140LL;
            do
            {
              if ( *(_DWORD *)(v9 - 60) == 0x80000000 && *(_DWORD *)(v9 - 84) && *(_DWORD *)(v9 - 80) )
              {
                *(_QWORD *)v9 = 0LL;
                v10 = DWORD2(v13) - v13;
                *(_DWORD *)(v9 - 52) = DWORD2(v13) - v13;
                *(_DWORD *)(v9 - 84) = v10;
                *(_DWORD *)(v9 + 8) = v10;
                v11 = HIDWORD(v13) - DWORD1(v13);
                *(_DWORD *)(v9 - 48) = HIDWORD(v13) - DWORD1(v13);
                *(_DWORD *)(v9 - 80) = v11;
                *(_DWORD *)(v9 + 12) = v11;
              }
              ++v8;
              v9 += 200LL;
            }
            while ( v8 < *a1 );
          }
        }
      }
LABEL_9:
      v6 = DisplayConfigBufferSizes < 0;
      if ( DisplayConfigBufferSizes >= 0 )
        goto LABEL_10;
    }
  }
  RIMFreeQDCActivePathsData((__int64)a1);
  v6 = DisplayConfigBufferSizes < 0;
LABEL_10:
  if ( !v6 )
    return a1;
  return (unsigned int *)v1;
}
