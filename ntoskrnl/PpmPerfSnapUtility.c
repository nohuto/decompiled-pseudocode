/*
 * XREFs of PpmPerfSnapUtility @ 0x140235210
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140233FD0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

_UNKNOWN **__fastcall PpmPerfSnapUtility(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  __int64 v6; // r12
  _QWORD *v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  char v17; // cl
  unsigned __int64 v18; // rcx
  char v19; // cl
  unsigned __int64 v20; // rcx
  char v21; // cl
  unsigned __int64 v22; // rcx
  char v23; // cl
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned int i; // r12d
  signed int v27; // r15d
  __int64 v28; // r13
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  unsigned int v31; // r9d
  unsigned int k; // r8d
  __int64 v33; // rax
  unsigned int v34; // r9d
  unsigned int j; // r8d
  __int64 v36; // rax
  unsigned int v37; // r9d
  unsigned int m; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  char v43; // cl
  unsigned __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // [rsp+20h] [rbp-78h]
  __int64 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+30h] [rbp-68h]
  unsigned __int64 v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int16 v55; // [rsp+A8h] [rbp+10h]
  int v56; // [rsp+B0h] [rbp+18h]
  __int64 v57; // [rsp+B8h] [rbp+20h]

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  v49 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD **)(v2 + 152);
    v6 = *(_QWORD *)(v2 + 96) - *(_QWORD *)(v2 + 32);
    v7 = *(_QWORD **)(v2 + 88);
    v8 = *(_QWORD *)(v2 + 104) - *(_QWORD *)(v2 + 40);
    v9 = *(_QWORD *)v5 - *v7;
    v10 = v8;
    v11 = *((_QWORD *)v5 + 1) - v7[1];
    v52 = v6;
    v51 = v8;
    if ( !v8 )
      v10 = 1LL;
    v48 = *(_QWORD *)v5 - *v7;
    v50 = v4;
    v12 = (*(_QWORD *)(v2 + 128) - *(_QWORD *)(v2 + 64)) / v10;
    v13 = v48;
    v14 = v12;
    v56 = v12;
    if ( !v9 )
      v13 = 1LL;
    v15 = (unsigned __int8)(100 * v11 / v13);
    if ( v15 > 0x64 )
      LOWORD(v15) = 100;
    v55 = v15;
    if ( !v14 )
    {
      if ( v4 )
        v56 = *(_DWORD *)(v4 + 120);
      else
        v56 = 100;
    }
    if ( *(_BYTE *)(v3 + 68) )
    {
      v16 = *(_QWORD *)v5 - *v7;
      if ( !v9 )
        v16 = 1LL;
      v17 = 100LL * (*((_QWORD *)v5 + 2) - v7[2]) / v16;
      if ( (unsigned __int8)v17 > 0x64u )
        v17 = 100;
      *(_BYTE *)(v2 + 232) = v17;
      v18 = v9;
      if ( !v9 )
        v18 = 1LL;
      v19 = 100LL * (*((_QWORD *)v5 + 3) - v7[3]) / v18;
      if ( (unsigned __int8)v19 > 0x64u )
        v19 = 100;
      *(_BYTE *)(v2 + 233) = v19;
      v20 = v9;
      if ( !v9 )
        v20 = 1LL;
      v21 = 100LL * (*((_QWORD *)v5 + 4) - v7[4]) / v20;
      if ( (unsigned __int8)v21 > 0x64u )
        v21 = 100;
      *(_BYTE *)(v2 + 234) = v21;
      v22 = v9;
      if ( !v9 )
        v22 = 1LL;
      v23 = 100LL * (*((_QWORD *)v5 + 5) - v7[5]) / v22;
      if ( (unsigned __int8)v23 > 0x64u )
        v23 = 100;
      v24 = 0LL;
      *(_BYTE *)(v2 + 235) = v23;
      v25 = 0LL;
      for ( i = 0; i < 7; ++i )
      {
        v27 = 0;
        v28 = 2LL * (int)i;
        do
        {
          v57 = (unsigned int)Feature_MultiCoreClasses__private_featureState;
          if ( (Feature_MultiCoreClasses__private_featureState & 0x10) == 0 )
          {
            LODWORD(v57) = Feature_MultiCoreClasses__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              &Feature_MultiCoreClasses__private_descriptor,
              v57,
              3LL,
              1LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v57,
              3LL,
              &Feature_MultiCoreClasses__private_descriptor);
            v3 = a1;
          }
          if ( PpmHeteroMultiClassParkingEnabled )
          {
            v29 = v28 + v27;
            if ( KiDynamicHeteroCpuPolicy[v29] == 1 || KiDynamicHeteroCpuPolicy[v29] == 2 )
            {
              v30 = KiMultiCoreHeteroUpperArchThreshold[v29];
            }
            else if ( (unsigned int)(KiDynamicHeteroCpuPolicy[v29] - 3) < 2 )
            {
              v30 = KiMultiCoreHeteroLowerArchThreshold[v29];
            }
            else
            {
              v30 = -1;
            }
            if ( v30 <= *(_BYTE *)(v3 + 88) )
            {
              if ( v30 == *(_BYTE *)(v3 + 88) )
              {
                v34 = v5[12];
                for ( j = 0; j < v34; v24 += *(_QWORD *)&v5[2 * v36 + 14] - v7[v36 + 7] )
                  v36 = v34 * (v27 + 2 * i) + j++;
              }
            }
            else
            {
              v31 = v5[12];
              for ( k = 0; k < v31; v25 += *(_QWORD *)&v5[2 * v33 + 14] - v7[v33 + 7] )
                v33 = v31 * (v27 + 2 * i) + k++;
            }
          }
          else if ( KiDynamicHeteroCpuPolicy[v28 + v27] != 3 )
          {
            v37 = v5[12];
            for ( m = 0; m < v37; v25 += *(_QWORD *)&v5[2 * v39 + 14] - v7[v39 + 7] )
              v39 = v37 * (v27 + 2 * i) + m++;
          }
          ++v27;
        }
        while ( (unsigned int)v27 < 2 );
      }
      v40 = v48;
      v8 = v51;
      v6 = v52;
      v41 = v48;
      if ( !v48 )
        v41 = 1LL;
      v42 = 100 * v25;
      v2 = v49;
      v43 = v42 / v41;
      if ( (unsigned __int8)v43 > 0x64u )
        v43 = 100;
      *(_BYTE *)(v49 + 236) = v43;
      if ( !v48 )
        v40 = 1LL;
      v44 = 100 * v24;
      v4 = v50;
      v45 = v44 / v40;
      if ( (unsigned __int8)v45 > 0x64u )
        v45 = 100;
      *(_BYTE *)(v49 + 237) = v45;
    }
    else
    {
      Feature_MultiCoreClasses__private_ReportDeviceUsage(v13, 100 * v11 % v13);
      if ( PpmHeteroMultiClassParkingEnabled )
        *(_BYTE *)(v2 + 237) = 100;
    }
    *(_WORD *)(v3 + 60) = v55;
    if ( v4 )
    {
      v46 = v8;
      if ( !v8 )
        v46 = 1LL;
      v47 = (*(_QWORD *)(v2 + 120) - *(_QWORD *)(v2 + 56)) / v46;
      if ( !(_DWORD)v47 )
        LODWORD(v47) = *(_DWORD *)(v4 + 116);
      *(_DWORD *)(v4 + 116) = v47;
      *(_DWORD *)(v4 + 120) = v56;
    }
    *(_OWORD *)(v2 + 32) = *(_OWORD *)(v2 + 96);
    *(_OWORD *)(v2 + 48) = *(_OWORD *)(v2 + 112);
    *(_OWORD *)(v2 + 64) = *(_OWORD *)(v2 + 128);
    *(_QWORD *)(v2 + 80) = *(_QWORD *)(v2 + 144);
    result = (_UNKNOWN **)memmove(v7, v5, 112 * v5[12] + 56);
    if ( *(_BYTE *)(v3 + 68) )
    {
      *(_QWORD *)(v3 + 104) += v8;
      *(_QWORD *)(v3 + 112) += v6;
    }
  }
  return result;
}
