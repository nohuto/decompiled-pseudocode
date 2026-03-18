/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C009FA90
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0043F38 (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C01980A0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0070630 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00706F0 (DrvQueryDisplayConfig.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // rax
  PVOID v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 Pool2; // rbx
  __int64 v7; // rax
  char v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE QueryTable[160]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+100h] [rbp+0h]
  const wchar_t *v19; // [rsp+108h] [rbp+8h]
  char *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  __int64 v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  __int128 v26; // [rsp+140h] [rbp+40h]
  __int128 v27; // [rsp+150h] [rbp+50h]
  __int64 v28; // [rsp+160h] [rbp+60h]

  *(_OWORD *)a1 = 0LL;
  v1 = a1;
  if ( gProtocolType || (int)DrvGetDisplayConfigBufferSizes(0x12u, (__int64)a1) < 0 )
    goto LABEL_3;
  v3 = *v1;
  if ( !(_DWORD)v3 )
    return v1;
  v4 = gpLeakTrackingAllocator;
  v5 = 216 * v3;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D707352) == 0x6D707352 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1836086098 )
      {
        if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_7;
      }
      v8 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v8 = 1;
        v5 += 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v5);
      if ( Pool2 )
      {
        memset(QueryTable, 0, sizeof(QueryTable));
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)QueryTable, 0LL);
        if ( v8 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  QueryTable) )
          {
            Pool2 += 16LL;
            goto LABEL_8;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     QueryTable) )
        {
          goto LABEL_8;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
      goto LABEL_8;
    }
  }
LABEL_7:
  Pool2 = ExAllocatePool2(260LL, v5);
LABEL_8:
  *((_QWORD *)v1 + 1) = Pool2;
  if ( !Pool2 || (int)DrvQueryDisplayConfig(0x80000012, v1, Pool2, 0LL) < 0 )
  {
LABEL_3:
    RIMFreeQDCActivePathsData(v1);
    return 0LL;
  }
  if ( *v1 )
  {
    v13 = 0;
    *(_DWORD *)&QueryTable[48] = 4;
    *(_DWORD *)&QueryTable[8] = 288;
    *(_DWORD *)&QueryTable[32] = 67108868;
    *(_DWORD *)&QueryTable[64] = 288;
    *(_QWORD *)&QueryTable[16] = L"ScreenPosition.Left";
    *(_DWORD *)&QueryTable[88] = 67108868;
    *(_QWORD *)&QueryTable[24] = &v14;
    *(_QWORD *)&QueryTable[40] = &v13;
    *(_QWORD *)&QueryTable[72] = L"ScreenPosition.Top";
    *(_QWORD *)&QueryTable[80] = (char *)&v14 + 4;
    *(_QWORD *)&QueryTable[96] = &v13;
    *(_QWORD *)&QueryTable[128] = L"ScreenPosition.Right";
    *(_QWORD *)&QueryTable[136] = (char *)&v14 + 8;
    *(_QWORD *)&QueryTable[152] = &v13;
    v19 = L"ScreenPosition.Bottom";
    v20 = (char *)&v14 + 12;
    v22 = &v13;
    *(_DWORD *)&QueryTable[104] = 4;
    *(_DWORD *)&QueryTable[120] = 288;
    *(_DWORD *)&QueryTable[144] = 67108868;
    v16 = 4;
    v18 = 288;
    v21 = 67108868;
    v23 = 4;
    v14 = 0LL;
    *(_QWORD *)QueryTable = 0LL;
    *(_QWORD *)&QueryTable[56] = 0LL;
    *(_QWORD *)&QueryTable[112] = 0LL;
    v17 = 0LL;
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( RtlQueryRegistryValues(
           3u,
           L"GRE_Initialize\\OverrideScreenLayout",
           (PRTL_QUERY_REGISTRY_TABLE)QueryTable,
           0LL,
           0LL) >= 0
      && (int)v14 < SDWORD2(v14)
      && SDWORD1(v14) < SHIDWORD(v14) )
    {
      v9 = 0;
      if ( *v1 )
      {
        v10 = *((_QWORD *)v1 + 1) + 140LL;
        do
        {
          if ( *(_DWORD *)(v10 - 60) == 0x80000000 && *(_DWORD *)(v10 - 84) && *(_DWORD *)(v10 - 80) )
          {
            *(_QWORD *)v10 = 0LL;
            v11 = DWORD2(v14) - v14;
            *(_DWORD *)(v10 - 52) = DWORD2(v14) - v14;
            *(_DWORD *)(v10 - 84) = v11;
            *(_DWORD *)(v10 + 8) = v11;
            v12 = HIDWORD(v14) - DWORD1(v14);
            *(_DWORD *)(v10 - 48) = HIDWORD(v14) - DWORD1(v14);
            *(_DWORD *)(v10 - 80) = v12;
            *(_DWORD *)(v10 + 12) = v12;
          }
          ++v9;
          v10 += 216LL;
        }
        while ( v9 < *v1 );
      }
    }
  }
  return v1;
}
