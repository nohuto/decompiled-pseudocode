void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  _DWORD *v4; // r15
  char v5; // r12
  char v6; // bl
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  int *v10; // r13
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  double v20; // xmm0_8
  double v21; // xmm1_8
  int v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm1_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  double v31; // xmm0_8
  int v32; // ecx
  double v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  int v38; // eax
  double v39; // xmm0_8
  int v40; // eax
  double v41; // xmm0_8
  int v42; // eax
  double v43; // xmm1_8
  int v44; // eax
  double v45; // xmm0_8
  int v46; // eax
  double v47; // xmm1_8
  int v48; // eax
  double v49; // xmm0_8
  unsigned int v50; // eax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  unsigned int v55; // eax
  int v56; // eax
  DxgMonitor::MonitorColorState *v57; // rcx
  int v58; // [rsp+34h] [rbp-45h]
  _OWORD v59[5]; // [rsp+40h] [rbp-39h] BYREF

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  *(_QWORD *)&v59[3] = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  DWORD2(v59[3]) = 0;
  v4 = (_DWORD *)((char *)this + 288);
  *((_OWORD *)this + 2) = 0LL;
  BYTE12(v59[3]) = 0;
  v5 = 0;
  *((_OWORD *)this + 3) = 0LL;
  *(_WORD *)((char *)&v59[3] + 13) = 0;
  v6 = 0;
  HIBYTE(v59[3]) = 0;
  *((_OWORD *)this + 4) = v59[3];
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  if ( a2 )
  {
    v5 = 1;
    v7 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *))(*(_QWORD *)a2 + 128LL))(
           a2,
           (char *)this + 36,
           (char *)this + 16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v8, v9);
      v5 = 0;
    }
    v10 = (int *)((char *)this + 44);
    v11 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
            a2,
            (char *)this + 44);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *v10 <<= 10;
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
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v12, v13);
      v5 = 0;
    }
    *((_BYTE *)this + 76) = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)a2 + 176LL))(a2);
    v58 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
            a2,
            (char *)this + 288,
            (char *)this + 292,
            (char *)this + 296);
    if ( v58 >= 0 )
    {
      v6 = 1;
    }
    else
    {
      v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      *(_QWORD *)(v18 + 24) = v58;
      *(_QWORD *)(v18 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      v6 = 0;
    }
    memset(v59, 0, sizeof(v59));
    if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, _OWORD *))(*(_QWORD *)a2 + 168LL))(
           a2,
           v59) >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 64LL))(v19) || !BYTE8(v59[4]) )
      {
        v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 64LL))(v34)
          || (v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
              (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 72LL))(v35)) )
        {
          v36 = *((double *)v59 + 1) * 10000.0;
          v37 = *((double *)&v59[1] + 1) * 1048576.0;
          *((_BYTE *)this + 340) = LOBYTE(v59[0]) != 0;
          v38 = (int)v36;
          *((_DWORD *)this + 92) = 327680;
          *((_DWORD *)this + 93) = 345088;
          v39 = *(double *)&v59[1] * 10000.0;
          *((_DWORD *)this + 94) = v38;
          v40 = (int)v39;
          v41 = *(double *)&v59[2] * 1048576.0;
          *((_DWORD *)this + 95) = v40;
          v42 = (int)(v37 + 0.5);
          v43 = *((double *)&v59[2] + 1);
          *((_DWORD *)this + 86) = v42;
          v44 = (int)(v41 + 0.5);
          v45 = *(double *)&v59[3] * 1048576.0;
          *((_DWORD *)this + 87) = v44;
          v46 = (int)(v43 * 1048576.0 + 0.5);
          v47 = *((double *)&v59[3] + 1);
          *((_DWORD *)this + 88) = v46;
          v48 = (int)(v45 + 0.5);
          v49 = *(double *)&v59[4];
          *((_DWORD *)this + 89) = v48;
          *((_DWORD *)this + 90) = (int)(v47 * 1048576.0 + 0.5);
          *((_DWORD *)this + 91) = (int)(v49 * 1048576.0 + 0.5);
        }
      }
      else
      {
        Feature_DolbyVision_Default_On__private_ReportDeviceUsage();
        v20 = *((double *)&v59[1] + 1);
        v21 = *((double *)&v59[2] + 1);
        *((_DWORD *)this + 105) = 0;
        *((_BYTE *)this + 341) = 1;
        *((_BYTE *)this + 428) = 1;
        *((_DWORD *)this + 100) = 964069926;
        *((_DWORD *)this + 101) = -1686232824;
        *((_DWORD *)this + 102) = 138811898;
        *((_DWORD *)this + 103) = 1076903406;
        *((_DWORD *)this + 104) = 1000;
        *((_DWORD *)this + 106) = 61473790;
        v22 = (int)(v20 * 1048576.0 + 0.5);
        v23 = *(double *)&v59[2] * 1048576.0;
        *v10 = v22;
        v24 = (int)(v23 + 0.5);
        v25 = *(double *)&v59[3] * 1048576.0;
        *((_DWORD *)this + 12) = v24;
        v26 = (int)(v21 * 1048576.0 + 0.5);
        v27 = *((double *)&v59[3] + 1);
        *((_DWORD *)this + 13) = v26;
        v28 = (int)(v25 + 0.5);
        v29 = *(double *)&v59[4] * 1048576.0;
        *((_DWORD *)this + 14) = v28;
        *((_DWORD *)this + 15) = (int)(v27 * 1048576.0 + 0.5);
        v30 = (int)(v29 + 0.5);
        v31 = *(double *)&v59[1] * 10000.0;
        *((_DWORD *)this + 16) = v30;
        v32 = (int)v31;
        v33 = *((double *)v59 + 1) * 10000.0;
        *((_DWORD *)this + 73) = v32;
        *((_DWORD *)this + 74) = v32;
        *v4 = (int)v33;
      }
    }
  }
  if ( v5 )
  {
    if ( *((_DWORD *)this + 68) <= 3u )
    {
      v51 = *((_OWORD *)this + 1);
      *((_DWORD *)this + 68) = 3;
      v52 = *((_OWORD *)this + 2);
      *((_OWORD *)this + 13) = v51;
      v53 = *((_OWORD *)this + 3);
      *((_OWORD *)this + 14) = v52;
      v54 = *((_OWORD *)this + 4);
      *((_OWORD *)this + 15) = v53;
      *((_OWORD *)this + 16) = v54;
    }
  }
  else
  {
    v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v50);
    if ( !*((_DWORD *)this + 68) )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
  }
  if ( v6 )
  {
    if ( *((_DWORD *)this + 84) <= 4u )
    {
      v56 = *((_DWORD *)this + 74);
      *((_QWORD *)this + 39) = *(_QWORD *)v4;
      *((_DWORD *)this + 80) = v56;
      *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
      *((_DWORD *)this + 83) = v56;
      *((_DWORD *)this + 84) = 4;
      DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
    }
  }
  else
  {
    v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v55);
    if ( !*((_DWORD *)this + 84) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
  DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 0, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v57);
}
