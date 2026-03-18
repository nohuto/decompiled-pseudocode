/*
 * XREFs of ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C0207988
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B9D4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage @ 0x1C002730C (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0027360 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01DD4A4 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01DDA04 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020787C (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C02078E0 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0207930 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0208290 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209428 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  __int128 *v4; // rsi
  _QWORD *v5; // r15
  char v6; // r13
  char v7; // bl
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // eax
  int *v11; // r12
  int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // bl
  __m128i v23; // xmm11
  __m128i v24; // xmm6
  __m128i v25; // xmm10
  __int128 v26; // xmm13
  bool v27; // zf
  int v28; // r14d
  double v29; // xmm0_8
  double v30; // xmm1_8
  int v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm0_8
  int v35; // eax
  double v36; // xmm1_8
  int v37; // eax
  double v38; // xmm0_8
  int v39; // eax
  double v40; // xmm0_8
  int v41; // ecx
  double v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  double v45; // xmm0_8
  double v46; // xmm1_8
  int v47; // eax
  double v48; // xmm0_8
  int v49; // eax
  double v50; // xmm0_8
  int v51; // eax
  double v52; // xmm1_8
  int v53; // eax
  double v54; // xmm0_8
  int v55; // eax
  double v56; // xmm1_8
  int v57; // eax
  double v58; // xmm0_8
  unsigned int v59; // eax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  unsigned int v64; // eax
  int v65; // eax
  DxgMonitor::MonitorColorState *v66; // rcx
  __int64 v67; // [rsp+30h] [rbp-D0h]
  double v68[10]; // [rsp+40h] [rbp-C0h] BYREF
  double v69[4]; // [rsp+90h] [rbp-70h]
  __m128i v70; // [rsp+B0h] [rbp-50h]
  __m128i v71; // [rsp+C0h] [rbp-40h]
  __m128i v72; // [rsp+D0h] [rbp-30h]
  char v73; // [rsp+1A0h] [rbp+A0h]
  int v74; // [rsp+1A8h] [rbp+A8h]

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  v4 = (__int128 *)((char *)this + 16);
  v72.m128i_i64[0] = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v72.m128i_i32[2] = 0;
  v5 = (_QWORD *)((char *)this + 288);
  *((_OWORD *)this + 2) = 0LL;
  v72.m128i_i8[12] = 0;
  v6 = 0;
  *((_OWORD *)this + 3) = 0LL;
  *(__int16 *)((char *)&v72.m128i_i16[6] + 1) = 0;
  v7 = 0;
  v72.m128i_i8[15] = 0;
  *((__m128i *)this + 4) = v72;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  if ( a2 )
  {
    v6 = 1;
    v73 = 1;
    v8 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *))(*(_QWORD *)a2 + 128LL))(
           a2,
           (char *)this + 36,
           (char *)this + 16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v9, v10);
      v6 = 0;
    }
    v11 = (int *)((char *)this + 44);
    v12 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
            a2,
            (char *)this + 44);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *v11 <<= 10;
      *((_DWORD *)this + 12) <<= 10;
      *((_DWORD *)this + 13) <<= 10;
      *((_DWORD *)this + 14) <<= 10;
      *((_DWORD *)this + 15) <<= 10;
      *((_DWORD *)this + 16) <<= 10;
      *((_DWORD *)this + 17) <<= 10;
      *((_DWORD *)this + 18) <<= 10;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v13, v14);
      v6 = 0;
    }
    *((_BYTE *)this + 76) = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)a2 + 176LL))(a2);
    v74 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
            a2,
            (char *)this + 288,
            (char *)this + 292,
            (char *)this + 296);
    if ( v74 >= 0 )
    {
      v7 = 1;
    }
    else
    {
      v19 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      *(_QWORD *)(v19 + 24) = v74;
      *(_QWORD *)(v19 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      v7 = 0;
      v73 = 0;
    }
    memset(v68, 0, sizeof(v68));
    v20 = *(_QWORD *)a2;
    *(_OWORD *)v69 = 0LL;
    if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, double *))(v20 + 168))(a2, v68) >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21) || !LOBYTE(v68[9]) )
      {
        v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v43 + 64LL))(v43)
          || (v44 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
              (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v44 + 72LL))(v44)) )
        {
          v45 = v68[1] * 10000.0;
          v46 = v68[3] * 1048576.0;
          *((_BYTE *)this + 340) = LOBYTE(v68[0]) != 0;
          v47 = (int)v45;
          *((_DWORD *)this + 92) = 327680;
          *((_DWORD *)this + 93) = 345088;
          v48 = v68[2] * 10000.0;
          *((_DWORD *)this + 94) = v47;
          v49 = (int)v48;
          v50 = v68[4] * 1048576.0;
          *((_DWORD *)this + 95) = v49;
          v51 = (int)(v46 + 0.5);
          v52 = v68[5];
          *((_DWORD *)this + 86) = v51;
          v53 = (int)(v50 + 0.5);
          v54 = v68[6] * 1048576.0;
          *((_DWORD *)this + 87) = v53;
          v55 = (int)(v52 * 1048576.0 + 0.5);
          v56 = v68[7];
          *((_DWORD *)this + 88) = v55;
          v57 = (int)(v54 + 0.5);
          v58 = v68[8];
          *((_DWORD *)this + 89) = v57;
          *((_DWORD *)this + 90) = (int)(v56 * 1048576.0 + 0.5);
          *((_DWORD *)this + 91) = (int)(v58 * 1048576.0 + 0.5);
        }
      }
      else
      {
        Feature_DolbyVision_Default_On__private_ReportDeviceUsage();
        v22 = 1;
        v23 = *((__m128i *)this + 2);
        v24 = *((__m128i *)this + 3);
        v25 = *((__m128i *)this + 4);
        v26 = *v4;
        v70 = v23;
        v71 = v24;
        v72 = v25;
        if ( (unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsage() )
        {
          if ( v68[3] == 0.0 || v68[4] == 0.0 || v68[5] == 0.0 || v68[6] == 0.0 || v68[7] == 0.0 || v68[8] == 0.0 )
          {
            if ( !v6
              || !_mm_cvtsi128_si32(_mm_srli_si128(v23, 12))
              || !_mm_cvtsi128_si32(v24)
              || !_mm_cvtsi128_si32(_mm_srli_si128(v24, 4))
              || !_mm_cvtsi128_si32(_mm_srli_si128(v24, 8))
              || !_mm_cvtsi128_si32(_mm_srli_si128(v24, 12))
              || !_mm_cvtsi128_si32(v25) )
            {
              v22 = 0;
            }
          }
          else
          {
            v70.m128i_i32[3] = (int)(v68[3] * 1048576.0 + 0.5);
            v23 = v70;
            v71.m128i_i32[0] = (int)(v68[4] * 1048576.0 + 0.5);
            v71.m128i_i32[1] = (int)(v68[5] * 1048576.0 + 0.5);
            v71.m128i_i32[2] = (int)(v68[6] * 1048576.0 + 0.5);
            v71.m128i_i32[3] = (int)(v68[7] * 1048576.0 + 0.5);
            v24 = v71;
            v72.m128i_i32[0] = (int)(v68[8] * 1048576.0 + 0.5);
            v25 = v72;
          }
          if ( v69[0] != 0.0 && v69[1] != 0.0 )
          {
            v72.m128i_i32[1] = (int)(v69[0] * 1048576.0 + 0.5);
            v72.m128i_i32[2] = (int)(v69[1] * 1048576.0 + 0.5);
            v25 = v72;
          }
          if ( v68[2] == 0.0 )
          {
            v7 = v73;
          }
          else
          {
            v27 = v22 == 0;
            v7 = v73;
            v28 = (int)(v68[2] * 10000.0);
            if ( !v27 )
            {
              LODWORD(v67) = (int)(v68[1] * 10000.0);
              HIDWORD(v67) = (int)(v68[2] * 10000.0);
              *((_DWORD *)this + 105) = 0;
              *((_DWORD *)this + 100) = 964069926;
              *((_DWORD *)this + 101) = -1686232824;
              *((_DWORD *)this + 102) = 138811898;
              *((_DWORD *)this + 103) = 1076903406;
              *v4 = v26;
              *((_BYTE *)this + 341) = 1;
              *((__m128i *)this + 2) = v23;
              *((_BYTE *)this + 428) = 1;
              *((__m128i *)this + 3) = v24;
              *((_DWORD *)this + 104) = 1000;
              *v5 = v67;
              *((__m128i *)this + 4) = v25;
              *((_DWORD *)this + 106) = 61473790;
              *((_DWORD *)this + 74) = v28;
            }
          }
        }
        else
        {
          v29 = v68[3];
          v30 = v68[5];
          *((_DWORD *)this + 105) = 0;
          *((_BYTE *)this + 341) = 1;
          *((_BYTE *)this + 428) = 1;
          v7 = v73;
          *((_DWORD *)this + 100) = 964069926;
          *((_DWORD *)this + 101) = -1686232824;
          *((_DWORD *)this + 102) = 138811898;
          *((_DWORD *)this + 103) = 1076903406;
          *((_DWORD *)this + 104) = 1000;
          v31 = (int)(v29 * 1048576.0 + 0.5);
          *((_DWORD *)this + 106) = 61473790;
          v32 = v68[4] * 1048576.0;
          *v11 = v31;
          v33 = (int)(v32 + 0.5);
          v34 = v68[6] * 1048576.0;
          *((_DWORD *)this + 12) = v33;
          v35 = (int)(v30 * 1048576.0 + 0.5);
          v36 = v68[7];
          *((_DWORD *)this + 13) = v35;
          v37 = (int)(v34 + 0.5);
          v38 = v68[8] * 1048576.0;
          *((_DWORD *)this + 14) = v37;
          *((_DWORD *)this + 15) = (int)(v36 * 1048576.0 + 0.5);
          v39 = (int)(v38 + 0.5);
          v40 = v68[2] * 10000.0;
          *((_DWORD *)this + 16) = v39;
          v41 = (int)v40;
          v42 = v68[1] * 10000.0;
          *((_DWORD *)this + 73) = v41;
          *((_DWORD *)this + 74) = v41;
          *(_DWORD *)v5 = (int)v42;
        }
      }
    }
  }
  if ( v6 )
  {
    if ( *((_DWORD *)this + 68) <= 3u )
    {
      v60 = *v4;
      *((_DWORD *)this + 68) = 3;
      v61 = *((_OWORD *)this + 2);
      *((_OWORD *)this + 13) = v60;
      v62 = *((_OWORD *)this + 3);
      *((_OWORD *)this + 14) = v61;
      v63 = *((_OWORD *)this + 4);
      *((_OWORD *)this + 15) = v62;
      *((_OWORD *)this + 16) = v63;
    }
  }
  else
  {
    v59 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v59);
    if ( !*((_DWORD *)this + 68) )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
  }
  if ( v7 )
  {
    if ( *((_DWORD *)this + 84) <= 4u )
    {
      v65 = *((_DWORD *)this + 74);
      *((_QWORD *)this + 39) = *v5;
      *((_DWORD *)this + 80) = v65;
      *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
      *((_DWORD *)this + 83) = v65;
      *((_DWORD *)this + 84) = 4;
      DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
    }
  }
  else
  {
    v64 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v64);
    if ( !*((_DWORD *)this + 84) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
  DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 0, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v66);
}
