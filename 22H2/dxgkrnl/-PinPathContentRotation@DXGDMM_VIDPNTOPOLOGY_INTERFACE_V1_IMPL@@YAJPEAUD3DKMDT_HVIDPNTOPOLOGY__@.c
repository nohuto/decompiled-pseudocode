/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01E2D50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C001591C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001593C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0023660 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // r13
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNPRESENTPATH *v11; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r14d
  int v13; // eax
  __int64 v14; // r15
  __int64 Container; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGK_ENUM_PIVOT v23; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+58h] [rbp-18h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+68h] [rbp-8h]

  v24 = -1;
  v25 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
      LODWORD(v14) = -1071774907;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v11 = Path;
      if ( Path )
      {
        v12 = *((_DWORD *)Path + 29);
        v13 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
        v14 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry4(2LL, v6, v8, v7, v13);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to pin rotation transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v6,
            v8,
            v7,
            v14,
            0LL);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v9 + 160);
          v23.VidPnSourceId = v8;
          v23.VidPnTargetId = v7;
          v16 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
                  9LL,
                  a5,
                  &v23);
          LODWORD(v14) = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1071774970 )
              WdLogSingleEntry3(3LL, v8, v7, v6);
            else
              WdLogSingleEntry4(2LL, v6, v8, v7, v16);
            if ( v12 == D3DKMDT_VPPR_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(v11, v20, v21, v22) >= 0 )
                goto LABEL_9;
            }
            else if ( (int)DMMVIDPNPRESENTPATH::PinContentRotation(v11, v12) >= 0 )
            {
              goto LABEL_9;
            }
            WdLogSingleEntry0(1LL);
            goto LABEL_9;
          }
          LODWORD(v14) = 0;
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v8, v7, this);
        LODWORD(v14) = -1071774937;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v14) = -1071774976;
  }
LABEL_9:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v24);
  }
  return (unsigned int)v14;
}
