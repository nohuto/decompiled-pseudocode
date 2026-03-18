/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x1407E3510
 * Callers:
 *     WbHeapExecuteCall @ 0x1407E3070 (WbHeapExecuteCall.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // r14d
  _KPROCESS *Process; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rcx
  unsigned int v10; // r10d
  int v11; // r8d
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // edx
  unsigned int v16; // eax
  int v17; // r11d
  __int16 v19; // ax
  _KPROCESS *v20; // rdx
  _OWORD *v21; // rax
  _OWORD *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v19 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v19 == 332 || v19 == 452 )
    {
      v20 = KeGetCurrentThread()->ApcState.Process;
      if ( v20[1].Affinity.StaticBitmap[30] )
      {
        if ( WORD2(v20[2].Affinity.StaticBitmap[20]) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v8 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)(v8 + 15) > 0x7FFFFFFF0000LL || v8 + 15 < v8 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_OWORD **)(a1 + 8);
  }
  *((_OWORD *)a3 + 1) = *v8;
  *((_OWORD *)a3 + 2) = v8[1];
  *((_OWORD *)a3 + 3) = v8[2];
  *((_OWORD *)a3 + 4) = v8[3];
  *((_OWORD *)a3 + 5) = v8[4];
  *((_OWORD *)a3 + 6) = v8[5];
  *((_OWORD *)a3 + 7) = v8[6];
  *((_OWORD *)a3 + 8) = v8[7];
  v9 = v8 + 8;
  *((_OWORD *)a3 + 9) = *v9;
  *((_OWORD *)a3 + 10) = v9[1];
  *((_OWORD *)a3 + 11) = v9[2];
  *((_OWORD *)a3 + 12) = v9[3];
  *((_OWORD *)a3 + 13) = v9[4];
  *((_OWORD *)a3 + 14) = v9[5];
  *((_OWORD *)a3 + 15) = v9[6];
  *((_QWORD *)a3 + 41) = *(_QWORD *)(a1 + 8);
  LODWORD(v9) = a3[13];
  a3[2] = (unsigned __int8)v9 & 0xF;
  a3[3] = (unsigned __int8)v9 >> 4;
  if ( ((unsigned __int8)v9 & 0xF) != 1 )
  {
    v25 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         &stru_140CE21C8,
                         0xE67B5Au,
                         0,
                         0,
                         wil_details_ServiceReportingKind_PotentialDeviceUsage)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        &Feature_PdttSupport_logged_traits,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v25,
        0LL,
        0,
        1uLL);
    }
    v10 = a3[2];
    if ( !v10 )
    {
      v11 = a3[18] & 0xFFFFFFF;
      if ( v11 )
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v21 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v21 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v21 + 248) < v21 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v21 = *(_OWORD **)(a1 + 8);
  }
  *((_OWORD *)a3 + 1) = *v21;
  *((_OWORD *)a3 + 2) = v21[1];
  *((_OWORD *)a3 + 3) = v21[2];
  *((_OWORD *)a3 + 4) = v21[3];
  *((_OWORD *)a3 + 5) = v21[4];
  *((_OWORD *)a3 + 6) = v21[5];
  *((_OWORD *)a3 + 7) = v21[6];
  *((_OWORD *)a3 + 8) = v21[7];
  v22 = v21 + 8;
  *((_OWORD *)a3 + 9) = *v22;
  *((_OWORD *)a3 + 10) = v22[1];
  *((_OWORD *)a3 + 11) = v22[2];
  *((_OWORD *)a3 + 12) = v22[3];
  *((_OWORD *)a3 + 13) = v22[4];
  *((_OWORD *)a3 + 14) = v22[5];
  *((_OWORD *)a3 + 15) = v22[6];
  *((_QWORD *)a3 + 32) = *((_QWORD *)v22 + 14);
  v11 = a3[18] & 0xFFFFFFF;
  if ( !v11 )
    return (unsigned int)-1073741811;
  v10 = a3[2];
LABEL_11:
  v12 = *((_QWORD *)a3 + 41) - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *(_QWORD *)a3 = v12;
  v13 = a3[15];
  if ( v13 <= 0x1000 )
    v13 = 4096;
  a3[81] = v13;
  v14 = a3[19];
  v15 = v14 & 0xFFFFFFF;
  if ( (v14 & 0xFFFFFFF) != 0 )
  {
    v17 = a3[20] & 0xFFFFFFF;
    a3[78] = v17 + 16;
    a3[77] = v11;
    v23 = a3[17];
    a3[76] = v23 & 0xFFFFFFF;
    *((_QWORD *)a3 + 37) = v12 + (v23 & 0xFFFFFFF);
    v16 = v14;
  }
  else
  {
    v16 = a3[17];
    v15 = v16 & 0xFFFFFFF;
    v17 = v11;
  }
  a3[72] = 16;
  a3[71] = v17;
  a3[70] = v15;
  *((_QWORD *)a3 + 34) = v12 + (v16 & 0xFFFFFFF);
  if ( v10 == 1 )
  {
    v24 = a3[64];
    if ( (v14 & 0xFFFFFFF) != 0 )
    {
      a3[73] = a3[65];
      a3[79] = v24;
    }
    else
    {
      a3[73] = v24;
    }
  }
  a3[80] = v17 + a3[77] + 16;
  return v6;
}
