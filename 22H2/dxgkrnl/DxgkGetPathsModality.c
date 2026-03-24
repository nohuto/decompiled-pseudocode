/*
 * XREFs of DxgkGetPathsModality @ 0x1C013E680
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0145AC0 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01460CC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001EA8 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C013AC90 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C014EAF0 (DxgkGetAdapterDefaultScaling.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C016BF30 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02EB2D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rsi
  int AllPaths; // ebx
  CCD_TOPOLOGY *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  unsigned int j; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int i; // edi
  __int64 v20; // r14
  char *v21; // r15
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  char v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int16 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  _DWORD *v31; // [rsp+90h] [rbp-70h]
  bool v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  int v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A4h] [rbp-5Ch]
  int v36; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int16 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  _DWORD *v42; // [rsp+F0h] [rbp-10h]
  bool v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  int v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+104h] [rbp+4h]
  int v47; // [rsp+110h] [rbp+10h] BYREF
  __int128 v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int16 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+138h] [rbp+38h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  _DWORD *v53; // [rsp+150h] [rbp+50h]
  bool v54; // [rsp+158h] [rbp+58h]
  int v55; // [rsp+15Ch] [rbp+5Ch]
  int v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+164h] [rbp+64h]
  int v58; // [rsp+170h] [rbp+70h] BYREF
  __int128 v59; // [rsp+178h] [rbp+78h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  __int16 v61; // [rsp+190h] [rbp+90h]
  __int128 v62; // [rsp+198h] [rbp+98h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v64; // [rsp+1B0h] [rbp+B0h]
  bool v65; // [rsp+1B8h] [rbp+B8h]
  int v66; // [rsp+1BCh] [rbp+BCh]
  int v67; // [rsp+1C0h] [rbp+C0h]
  BOOL v68; // [rsp+1C4h] [rbp+C4h]
  int v69; // [rsp+1C8h] [rbp+C8h]
  _BYTE v70[144]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 retaddr; // [rsp+268h] [rbp+168h]
  unsigned int v72; // [rsp+270h] [rbp+170h] BYREF
  __int64 v73; // [rsp+278h] [rbp+178h] BYREF

  v22 = -1;
  v4 = (unsigned int)a1;
  v23 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2081);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2081LL);
  v73 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v73, 9);
  v8 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v8 = a2;
  if ( (v4 & 0x800000) != 0 )
    v8[6] |= 2u;
  if ( (v4 & 0x14000) == 0 )
  {
    if ( (v4 & 0x100) == 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        v36 = 0;
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0;
        v40 = 0LL;
        v41 = 0LL;
        v43 = v8 == 0LL;
        v42 = v8;
        v44 = 0;
        v45 = 1;
        v46 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v36, a3);
        v10 = (CCD_TOPOLOGY *)&v36;
        goto LABEL_16;
      }
      if ( (v4 & 0x2000040) != 0 )
      {
        v58 = 0;
        v59 = 0LL;
        v60 = 0LL;
        v61 = 0;
        v62 = 0LL;
        v63 = 0LL;
        v65 = v8 == 0LL;
        v64 = v8;
        v66 = 0;
        v67 = 1;
        v69 = 0;
        v68 = (v4 & 0x1000000) != 0;
        AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v58, (v4 & 0x80000) != 0, 0, (v4 & 0x100000) != 0, a3);
        if ( AllPaths >= 0 && (v4 & 0x2000000) != 0 )
        {
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v70, 0, 0);
          if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v70, 0x8Fu, 0LL) < 0 )
            CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)v70);
          for ( i = 0; i < *((unsigned __int16 *)v8 + 10); ++i )
          {
            v20 = 68LL * i;
            v72 = 0;
            v21 = (char *)&v8[v20];
            if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                        (CCD_TOPOLOGY *)v70,
                        (const struct _LUID *)&v8[v20 + 16],
                        v8[v20 + 19],
                        &v72) < 0 )
              DxgkGetAdapterDefaultScaling(&v8[v20 + 16], v21 + 188);
            else
              *((_DWORD *)v21 + 47) = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v70, v72) + 35);
            *(_QWORD *)&v8[v20 + 12] |= 0x10000uLL;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v70);
        }
        v10 = (CCD_TOPOLOGY *)&v58;
        goto LABEL_16;
      }
      if ( (v4 & 0xF) != 0 )
      {
        v47 = 0;
        v48 = 0LL;
        v49 = 0LL;
        v50 = 0;
        v51 = 0LL;
        v52 = 0LL;
        v54 = v8 == 0LL;
        v53 = v8;
        v55 = 0;
        v56 = 1;
        v57 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v47, v4 & 0x40030AF, a3);
        v10 = (CCD_TOPOLOGY *)&v47;
LABEL_16:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v10);
        goto LABEL_17;
      }
LABEL_35:
      AllPaths = -1073741811;
      goto LABEL_17;
    }
    if ( (v4 & 0xFFFFFEFF) == 0 )
    {
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v32 = v8 == 0LL;
      v31 = v8;
      v33 = 0;
      v34 = 1;
      v35 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v25, v6);
      v10 = (CCD_TOPOLOGY *)&v25;
      goto LABEL_16;
    }
LABEL_34:
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = v4;
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_35;
  }
  if ( (v4 & 0xFFFEBFFF) != 0 )
    goto LABEL_34;
  v15 = 0;
  if ( (v4 & 0x4000) != 0 )
    v15 = 2;
  if ( (v4 & 0x10000) != 0 )
    v15 |= 4u;
  for ( j = 0; j < *((unsigned __int16 *)v8 + 10); ++j )
  {
    v17 = *(_QWORD *)&v8[68 * j + 68];
    if ( v17 )
      *(_DWORD *)(v17 + 240) |= v15;
  }
  AllPaths = 0;
LABEL_17:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v73, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v11);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v22);
  return (unsigned int)AllPaths;
}
