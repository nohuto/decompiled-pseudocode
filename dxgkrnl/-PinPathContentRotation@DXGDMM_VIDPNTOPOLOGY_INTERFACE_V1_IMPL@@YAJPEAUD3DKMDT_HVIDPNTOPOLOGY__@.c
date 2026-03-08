/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C016BB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00023C4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C00023E4 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0023B50 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD v24[2]; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  char v27; // [rsp+68h] [rbp-8h]

  v25 = -1;
  v26 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6028);
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
          LOBYTE(v16) = a5;
          v24[0] = v8;
          v24[1] = v7;
          v17 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  Container & -(__int64)(Container != -88),
                  9LL,
                  v16,
                  v24);
          LODWORD(v14) = v17;
          if ( v17 < 0 )
          {
            if ( v17 == -1071774970 )
              WdLogSingleEntry3(3LL, v8, v7, v6);
            else
              WdLogSingleEntry4(2LL, v6, v8, v7, v17);
            if ( v12 == D3DKMDT_VPPR_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(v11, v21, v22, v23) >= 0 )
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v25);
  }
  return (unsigned int)v14;
}
