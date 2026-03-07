void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v8; // r8
  struct IMonitorTarget *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // r14
  double v18; // xmm6_8
  __int64 v19; // rax
  __int64 v20; // rcx
  double v21; // xmm0_8
  int v22; // r15d
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // r12
  __int64 v26; // rdx
  struct CFrameInfo *v27; // rdx
  unsigned __int64 v28; // rax
  double v29; // xmm0_8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rax
  double v32; // xmm0_8
  char v33; // r8
  int v34; // r9d
  int v35; // r10d
  double v36; // xmm0_8
  double v37; // xmm4_8
  int v38; // eax
  double v39; // xmm5_8
  double v40; // xmm0_8
  int v41; // ecx
  __int128 v42; // [rsp+40h] [rbp-78h] BYREF
  __int128 v43; // [rsp+50h] [rbp-68h]
  __int128 v44; // [rsp+60h] [rbp-58h]
  _BYTE v45[16]; // [rsp+70h] [rbp-48h] BYREF

  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start,
      a3,
      1LL,
      v45);
  v4 = (_OWORD *)*((_QWORD *)this + 527);
  v5 = *((_QWORD *)this + 526);
  *(_OWORD *)(v5 + 112) = v4[7];
  *(_OWORD *)(v5 + 128) = v4[8];
  v6 = v4[9];
  *(_BYTE *)(v5 + 172) = 0;
  *(_OWORD *)(v5 + 144) = v6;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v9 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v10 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, __int128 *))(*(_QWORD *)PrimaryMonitorTarget + 136LL))(
            PrimaryMonitorTarget,
            &v42);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180353950, 3u, v10, 0x303u, 0LL);
    }
    else if ( v10 != 142213121 )
    {
      v12 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v9 + 88LL))(v9);
      v13 = *((_QWORD *)this + 526);
      v14 = v12;
      *(_OWORD *)(v13 + 112) = v42;
      *(_OWORD *)(v13 + 128) = v43;
      v15 = v44;
      *(_BYTE *)(v13 + 172) = 1;
      *(_OWORD *)(v13 + 144) = v15;
      LOBYTE(v16) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
        v16);
      v17 = *((_QWORD *)&v43 + 1);
      if ( *((_BYTE *)this + 4552) && v14 )
      {
        if ( (v14 & 0x8000000000000000uLL) != 0LL )
          v18 = (double)(int)(v14 & 1 | (v14 >> 1)) + (double)(int)(v14 & 1 | (v14 >> 1));
        else
          v18 = (double)(int)v14;
        v19 = *((_QWORD *)this + 1170);
        if ( *(double *)(v19 + 32) != v18 )
        {
          *(double *)(v19 + 32) = v18;
          LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
          v17 = *((_QWORD *)&v43 + 1);
        }
        v20 = *((_QWORD *)this + 527);
        if ( *(_BYTE *)(v20 + 172)
          && (unsigned int)(int)((double)((int)v17 - *(_DWORD *)(v20 + 136)) / v18 + 0.5) >= 5uLL )
        {
          LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
          v17 = *((_QWORD *)&v43 + 1);
        }
        v21 = (double)(int)v17 / v18 + 0.5;
        v22 = (int)v21;
        LinearFitT<256>::Update(*((_QWORD *)this + 1170), (unsigned int)(int)v21, v17);
        v24 = Microsoft_Windows_Dwm_CoreEnableBits;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
        {
          McTemplateU0xx_EventWriteTransfer(
            v23,
            &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_UPDATE,
            (unsigned int)(int)v21,
            *((_QWORD *)&v43 + 1));
          v24 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
        v25 = *((_QWORD *)this + 1170);
        v17 = (unsigned int)(int)floor_0(
                                   (double)(v22 - *(_DWORD *)(v25 + 40)) * *(double *)(v25 + 24)
                                 + (double)(int)*(_QWORD *)(v25 + 48)
                                 + *(double *)(v25 + 16)
                                 + 0.5);
        if ( (v24 & 1) != 0 )
        {
          v28 = 0LL;
          v29 = (double)SDWORD2(v43) / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
          if ( v29 >= 9.223372036854776e18 )
          {
            v29 = v29 - 9.223372036854776e18;
            if ( v29 < 9.223372036854776e18 )
              v28 = 0x8000000000000000uLL;
          }
          v30 = v28 + (unsigned int)(int)v29;
          v31 = 0LL;
          v32 = (double)(int)v17 / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
          if ( v32 >= 9.223372036854776e18 )
          {
            v32 = v32 - 9.223372036854776e18;
            if ( v32 < 9.223372036854776e18 )
              v31 = 0x8000000000000000uLL;
          }
          v36 = LinearFitT<256>::ComputeAverage(v25, v26, v31 + (unsigned int)(int)v32, v30);
          v38 = 0;
          v40 = v36 / v37 * v39;
          if ( v40 >= 9.223372036854776e18 )
          {
            v40 = v40 - 9.223372036854776e18;
            if ( v40 < 9.223372036854776e18 )
              v38 = v35;
          }
          v41 = 256;
          if ( *(_DWORD *)(v25 + 8) < 0x100u )
            v41 = *(_DWORD *)(v25 + 8);
          McTemplateU0xxxiid_EventWriteTransfer(v41, v38 + (int)v40, v22, v34, v33, v33 - v34, v38 + (int)v40, v41);
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 526) + 160LL) = v17;
      CRateInfo::SetNominalRefreshPeriod((CRateInfo *)(*((_QWORD *)this + 526) + 232LL), v14);
      CScheduleFrameInfoVolatileData::TracePresentStats(*((CScheduleFrameInfoVolatileData **)this + 526));
      v27 = (struct CFrameInfo *)*((_QWORD *)this + 527);
      if ( *((_BYTE *)v27 + 172) && !*((_BYTE *)this + 4548) )
        CRateInfo::CalculateEffectiveRefreshRate(
          (CRateInfo *)(*((_QWORD *)this + 526) + 232LL),
          v27,
          *((struct CFrameInfo **)this + 526));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop,
      v8,
      1LL,
      v45);
}
