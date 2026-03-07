__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3,
        unsigned __int8 *const a4)
{
  __int64 v5; // rsi
  _BYTE *v6; // r12
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **v7; // rbx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v8; // rdi
  char *v9; // rdi
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v10; // rcx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rbx
  unsigned __int8 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rbx
  unsigned __int8 v26; // bl
  char v27; // r15
  bool v28; // zf
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // r8
  int IsModeInPixelRateRange; // eax
  int IsModeSupportedByMonitorMode; // eax
  int IsModeInActiveSizeRange; // eax
  char v36; // si
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int IsSupportedModeInternal; // eax
  _BYTE v41[4]; // [rsp+30h] [rbp-40h] BYREF
  int v42; // [rsp+34h] [rbp-3Ch] BYREF
  char v43; // [rsp+38h] [rbp-38h]
  int v44; // [rsp+3Ch] [rbp-34h]
  int v45; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h]
  char v47; // [rsp+50h] [rbp-20h]
  PERESOURCE Resource; // [rsp+58h] [rbp-18h]
  __int64 v49; // [rsp+60h] [rbp-10h]

  v45 = -1;
  v5 = (unsigned int)a2;
  v6 = (_BYTE *)a3;
  v46 = 0LL;
  v7 = this;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6017);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 6017);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_75:
    LODWORD(v7) = -1073741811;
    goto LABEL_68;
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_75;
  }
  *v6 = 0;
  *(_DWORD *)a4 = 0;
  if ( !v7 || *((_DWORD *)v7 + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, v7);
    LODWORD(v7) = -1071774967;
    goto LABEL_68;
  }
  v8 = v7[6];
  if ( v8 != (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(v7 + 6) )
  {
    v9 = (char *)v8 - 8;
    if ( v9 )
    {
      while ( *((_DWORD *)v9 + 6) != (_DWORD)v5 )
      {
        v10 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v9 + 1);
        v9 = (char *)v10 - 8;
        if ( v10 == (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(v7 + 6) )
          v9 = 0LL;
        if ( !v9 )
          goto LABEL_13;
      }
      if ( *(_DWORD *)(*((_QWORD *)v7[14] + 12) + 84LL) == 15
        || *(_DWORD *)(*((_QWORD *)v7[14] + 12) + 84LL) == 16
        || (v11 = 0, *(_DWORD *)(*((_QWORD *)v7[14] + 12) + 84LL) == 17) )
      {
        v11 = 1;
      }
      v43 = v11;
      if ( !*((_QWORD *)v9 + 5) )
        WdLogSingleEntry0(1LL);
      v12 = *((_QWORD *)v9 + 5);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 112);
        if ( v13 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 112LL);
          v49 = v14;
          if ( v14 )
          {
            if ( v9 == (char *)-72LL )
            {
              LODWORD(v7) = -1073741811;
LABEL_134:
              WdLogSingleEntry3(2LL, v9, v49, (int)v7);
              goto LABEL_135;
            }
            Resource = (PERESOURCE)(v14 + 24);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v14 + 24), 1u);
            v15 = *(_QWORD *)(v14 + 232);
            v44 = 0;
            v42 = 0;
            v41[0] = 0;
            if ( ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 232) + 40LL))(*(_QWORD *)(v15 + 232)) == 1
               || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 232) + 40LL))(*(_QWORD *)(v15 + 232)) == 2
               || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 232) + 40LL))(*(_QWORD *)(v15 + 232)) == 3
               || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 232) + 40LL))(*(_QWORD *)(v15 + 232)) == 14)
              && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 232) + 104LL))(*(_QWORD *)(v15 + 232)) )
            {
              WdLogSingleEntry1(7LL, v15);
              v29 = 1;
              LODWORD(v7) = 0;
              v27 = 1;
              goto LABEL_66;
            }
            v17 = *(unsigned int *)(v15 + 112);
            if ( (unsigned int)(v17 - 1) <= 1 )
            {
              LOBYTE(v16) = v11;
              IsSupportedModeInternal = DxgMonitor::MonitorModes::_IsSupportedModeInternal(
                                          v15,
                                          v9 + 72,
                                          v17,
                                          v16,
                                          v41,
                                          &v42);
              v27 = v41[0];
              LODWORD(v7) = IsSupportedModeInternal;
              v29 = v42;
              goto LABEL_66;
            }
            if ( (_DWORD)v17 != 3 )
              WdLogSingleEntry0(1LL);
            v18 = *(_QWORD *)(v15 + 128);
            v19 = 0;
            v42 = 0;
            while ( v18 != v15 + 128 )
            {
              v20 = v18 - 96;
              if ( !v18 )
                v20 = 0LL;
              if ( !v20 )
                break;
              if ( *(_DWORD *)(v20 + 84) == 5
                && *((_DWORD *)v9 + 21) == *(_DWORD *)(v20 + 20)
                && *((_DWORD *)v9 + 22) == *(_DWORD *)(v20 + 24)
                && (((unsigned __int8)v9[120] ^ *(_BYTE *)(v20 + 56)) & 7) == 0
                && (v11
                 || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                      (const struct _D3DDDI_RATIONAL *)(v9 + 92),
                      (const struct _D3DDDI_RATIONAL *)(v20 + 28),
                      300)) )
              {
                v19 = 7;
                v21 = 1;
                v42 = 7;
                goto LABEL_44;
              }
              v18 = *(_QWORD *)(v20 + 96);
            }
            v21 = 0;
LABEL_44:
            v41[0] = v21;
            if ( v21 )
              goto LABEL_45;
            if ( v19 )
              WdLogSingleEntry0(1LL);
            if ( !v11 )
            {
              IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(v15, v9 + 72, 2LL, v41, &v42);
              v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)IsModeInPixelRateRange;
              if ( IsModeInPixelRateRange < 0 )
                goto LABEL_103;
              v21 = v41[0];
              if ( !v41[0] )
              {
                v19 = v42;
                if ( v42 )
                  goto LABEL_45;
                goto LABEL_102;
              }
              if ( v42 )
                WdLogSingleEntry0(1LL);
            }
            LOBYTE(v16) = v11;
            IsModeSupportedByMonitorMode = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
                                             v15,
                                             v9 + 72,
                                             2LL,
                                             v16,
                                             v41,
                                             &v42);
            v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)IsModeSupportedByMonitorMode;
            if ( IsModeSupportedByMonitorMode < 0 )
              goto LABEL_103;
            v21 = v41[0];
            if ( v41[0] )
            {
              v19 = v42;
              if ( v42 )
                goto LABEL_45;
            }
            else
            {
              if ( v42 )
                WdLogSingleEntry0(1LL);
              IsModeInActiveSizeRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(v15, v9 + 72, 2LL, v41, &v42);
              v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)IsModeInActiveSizeRange;
              if ( IsModeInActiveSizeRange < 0 )
                goto LABEL_103;
              v21 = v41[0];
              if ( !v41[0] )
              {
                if ( v42 )
                  WdLogSingleEntry0(1LL);
                v21 = 0;
                v19 = 1;
LABEL_45:
                v22 = v15 + 128;
                v42 = 0;
                v23 = *(_QWORD *)(v15 + 128);
                v24 = 0;
                while ( v23 != v22 )
                {
                  v25 = v23 - 96;
                  if ( !v23 )
                    v25 = 0LL;
                  if ( !v25 )
                    break;
                  if ( *(_DWORD *)(v25 + 84) == 5
                    && *((_DWORD *)v9 + 21) == *(_DWORD *)(v25 + 20)
                    && *((_DWORD *)v9 + 22) == *(_DWORD *)(v25 + 24)
                    && (((unsigned __int8)v9[120] ^ *(_BYTE *)(v25 + 56)) & 7) == 0 )
                  {
                    if ( v43
                      || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                           (const struct _D3DDDI_RATIONAL *)(v9 + 92),
                           (const struct _D3DDDI_RATIONAL *)(v25 + 28),
                           300) )
                    {
                      v24 = 7;
                      v26 = 1;
                      v42 = 7;
                      goto LABEL_59;
                    }
                    v22 = v15 + 128;
                  }
                  v23 = *(_QWORD *)(v25 + 96);
                }
                v26 = 0;
LABEL_59:
                v41[0] = v26;
                if ( v26 )
                  goto LABEL_60;
                if ( v24 )
                  WdLogSingleEntry0(1LL);
                v36 = v43;
                if ( !v43 )
                {
                  v37 = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(v15, v9 + 72, 1LL, v41, &v42);
                  v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)v37;
                  if ( v37 < 0 )
                    goto LABEL_103;
                  v26 = v41[0];
                  if ( !v41[0] )
                  {
                    v24 = v42;
                    if ( !v42 )
LABEL_126:
                      WdLogSingleEntry0(1LL);
LABEL_60:
                    if ( v21 != v26 )
                    {
                      WdLogSingleEntry5(7LL, v15, v21, v19, v26, v24);
                      WdLogSingleEntry5(
                        7LL,
                        *((unsigned int *)v9 + 21),
                        *((unsigned int *)v9 + 22),
                        *((unsigned int *)v9 + 23),
                        *((unsigned int *)v9 + 24),
                        (int)(*((_DWORD *)v9 + 30) << 29) >> 29);
                      WdLogSingleEntry3(
                        7LL,
                        *((unsigned int *)v9 + 25),
                        *((unsigned int *)v9 + 26),
                        *((_QWORD *)v9 + 14));
                    }
                    if ( v26 || (v27 = 0, v21) )
                      v27 = 1;
                    v28 = v26 == 0;
                    v29 = v19;
                    v6 = (_BYTE *)a3;
                    LODWORD(v7) = 0;
                    if ( !v28 )
                      v29 = v24;
LABEL_66:
                    ExReleaseResourceLite(Resource);
                    KeLeaveCriticalRegion();
                    if ( (int)v7 >= 0 )
                    {
                      LODWORD(v7) = 0;
                      *v6 = v27;
                      *(_DWORD *)a4 = v29;
                      goto LABEL_68;
                    }
                    goto LABEL_134;
                  }
                  if ( v42 )
                    WdLogSingleEntry0(1LL);
                }
                LOBYTE(v16) = v36;
                v24 = 1;
                v38 = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(v15, v9 + 72, 1LL, v16, v41, &v42);
                v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)v38;
                if ( v38 >= 0 )
                {
                  v26 = v41[0];
                  if ( v41[0] )
                  {
                    v24 = v42;
                    if ( !v42 )
                      goto LABEL_126;
                    goto LABEL_60;
                  }
                  if ( v42 )
                    WdLogSingleEntry0(1LL);
                  v39 = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(v15, v9 + 72, 1LL, v41, &v42);
                  v7 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)v39;
                  if ( v39 >= 0 )
                  {
                    v26 = v41[0];
                    if ( !v41[0] )
                    {
                      if ( v42 )
                        WdLogSingleEntry0(1LL);
                      v26 = 0;
                      goto LABEL_60;
                    }
                    v24 = v42;
                    if ( !v42 )
                      goto LABEL_126;
                    goto LABEL_60;
                  }
                }
LABEL_103:
                WdLogSingleEntry1(2LL, v7);
                v29 = v44;
                v27 = v44;
                v6 = (_BYTE *)a3;
                goto LABEL_66;
              }
              v19 = v42;
              if ( v42 )
                goto LABEL_45;
            }
LABEL_102:
            WdLogSingleEntry0(1LL);
            goto LABEL_45;
          }
          WdLogSingleEntry2(3LL, *(unsigned int *)(v13 + 24), v9);
          LODWORD(v7) = -1071774920;
LABEL_135:
          WdLogSingleEntry2(7LL, v9, (int)v7);
          goto LABEL_68;
        }
        WdLogSingleEntry1(2LL, v12);
      }
      else
      {
        WdLogSingleEntry1(2LL, v9);
      }
      LODWORD(v7) = -1071774959;
      goto LABEL_135;
    }
  }
LABEL_13:
  WdLogSingleEntry2(2LL, v5, v7);
  LODWORD(v7) = -1071774959;
LABEL_68:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 )
  {
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v45);
  }
  return (unsigned int)v7;
}
