/*
 * XREFs of DxgkGetPathsModality @ 0x1C01BE290
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01A5F60 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BAC54 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01C0F20 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0002B10 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01BAFA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01BD5E8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01DBB90 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03B6CD4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rsi
  int Active; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int AllPaths; // eax
  int v12; // eax
  unsigned int j; // r8d
  __int64 v14; // rcx
  const wchar_t *v15; // r9
  unsigned int i; // edi
  __int64 v17; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v18; // r15
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int16 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  _DWORD *v25; // [rsp+90h] [rbp-70h]
  bool v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int v28; // [rsp+A0h] [rbp-60h]
  _BOOL8 v29; // [rsp+A4h] [rbp-5Ch]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char v33; // [rsp+D0h] [rbp-30h]
  _BYTE v34[160]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+188h] [rbp+88h]
  unsigned int v36; // [rsp+190h] [rbp+90h] BYREF
  __int64 v37; // [rsp+198h] [rbp+98h] BYREF

  v31 = -1;
  v4 = (unsigned int)a1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2081);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2081);
  v37 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v37, 9);
  v6 = &unk_1C013BEE0;
  if ( a2 )
    v6 = a2;
  if ( (v4 & 0x800000) != 0 )
    v6[6] |= 2u;
  if ( (v4 & 0x14000) == 0 )
  {
    if ( (v4 & 0x100) == 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        v19 = 0;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0;
        v23 = 0LL;
        v24 = 0LL;
        v26 = v6 == 0LL;
        v25 = v6;
        v27 = 0;
        v28 = 1;
        v29 = 0LL;
        v30 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v19, a3);
        goto LABEL_18;
      }
      if ( (v4 & 0x2000040) != 0 )
      {
        v19 = 0;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0;
        v23 = 0LL;
        v24 = 0LL;
        v26 = v6 == 0LL;
        v25 = v6;
        v27 = 0;
        v28 = 1;
        v30 = 0LL;
        v29 = (v4 & 0x1000000) != 0;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v19, (v4 & 0x80000) != 0, 0, (v4 & 0x100000) != 0, a3);
        if ( Active >= 0 && (v4 & 0x2000000) != 0 )
        {
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v34, 0, 0);
          if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v34, 0x8Fu, 0LL) < 0 )
            CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)v34);
          for ( i = 0; i < *((unsigned __int16 *)v6 + 10); ++i )
          {
            v17 = 74LL * i;
            v36 = 0;
            v18 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v6[v17];
            if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                        (CCD_TOPOLOGY *)v34,
                        (const struct _LUID *)&v6[v17 + 18],
                        v6[v17 + 21],
                        &v36) < 0 )
              DxgkGetAdapterDefaultScaling((struct _LUID *)&v6[v17 + 18], v18 + 49);
            else
              v18[49] = *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)CCD_TOPOLOGY::GetPathDescriptor(
                                                                        (CCD_TOPOLOGY *)v34,
                                                                        v36)
                        + 35);
            *(_QWORD *)&v6[v17 + 14] |= 0x10000uLL;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v34);
        }
        goto LABEL_13;
      }
      if ( (v4 & 0xF) != 0 )
      {
        v19 = 0;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0;
        v23 = 0LL;
        v24 = 0LL;
        v26 = v6 == 0LL;
        v25 = v6;
        v27 = 0;
        v28 = 1;
        v29 = 0LL;
        v30 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v19, v4 & 0x40030AF, a3);
LABEL_18:
        Active = AllPaths;
LABEL_13:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v19);
        goto LABEL_14;
      }
LABEL_36:
      Active = -1073741811;
      goto LABEL_14;
    }
    if ( (v4 & 0xFFFFFEFF) == 0 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v26 = v6 == 0LL;
      v25 = v6;
      v27 = 0;
      v28 = 1;
      v29 = 0LL;
      v30 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v19);
      goto LABEL_18;
    }
    WdLogSingleEntry1(1LL, v4);
    v15 = L"D3DKMT_GETPATHSMODALITY_FILL_TARGET_INFO_ONLY is not valid with any other flags. (Flags = 0x%I64x)";
LABEL_35:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v15, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_36;
  }
  if ( (v4 & 0xFFFEBFFF) != 0 )
  {
    WdLogSingleEntry1(1LL, v4);
    v15 = L"D3DKMT_GETPATHSMODALITY_FORCE_FULL_MODE_CHANGE and D3DKMT_GETPATHSMODALITY_FORCE_UNCONDITIONAL_MODE_CACHE_INVA"
           "LIDATE are not valid with any other flags. (Flags = 0x%I64x)";
    goto LABEL_35;
  }
  v12 = 0;
  if ( (v4 & 0x4000) != 0 )
    v12 = 2;
  if ( (v4 & 0x10000) != 0 )
    v12 |= 4u;
  for ( j = 0; j < *((unsigned __int16 *)v6 + 10); ++j )
  {
    v14 = *(_QWORD *)&v6[74 * j + 76];
    if ( v14 )
      *(_DWORD *)(v14 + 240) |= v12;
  }
  Active = 0;
LABEL_14:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v37, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v31);
  }
  return (unsigned int)Active;
}
