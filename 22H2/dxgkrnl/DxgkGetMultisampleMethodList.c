/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C025F120
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DD648 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *Current; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _D3DDDI_MULTISAMPLINGMETHOD *v17; // r15
  ULONG64 v18; // rax
  __int64 v19; // r14
  SIZE_T v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER *v28; // r14
  int PairingAdapters; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGADAPTER *v33; // r14
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rcx
  unsigned int v58; // r11d
  __int64 v59; // rcx
  __int64 v60; // r8
  int v62; // [rsp+40h] [rbp-148h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v63; // [rsp+48h] [rbp-140h]
  unsigned __int64 v64; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v65[4]; // [rsp+58h] [rbp-130h]
  _D3DDDIFORMAT v66[4]; // [rsp+68h] [rbp-120h]
  unsigned __int64 v67; // [rsp+78h] [rbp-110h]
  int v68; // [rsp+80h] [rbp-108h]
  int v69; // [rsp+88h] [rbp-100h] BYREF
  __int64 v70; // [rsp+90h] [rbp-F8h]
  char v71; // [rsp+98h] [rbp-F0h]
  struct DXGADAPTER *v72; // [rsp+A0h] [rbp-E8h] BYREF
  struct DXGADAPTER *v73[2]; // [rsp+A8h] [rbp-E0h] BYREF
  unsigned __int64 v74; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v75; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v76[144]; // [rsp+D0h] [rbp-B8h] BYREF

  v64 = a1;
  v69 = -1;
  v70 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2019LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v73[1] = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v14, v13, v15, v16);
    WdLogEvent5_WdError(v11);
    goto LABEL_45;
  }
  *(_OWORD *)v65 = 0LL;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  LODWORD(v12) = 0;
  v17 = 0LL;
  v63 = 0LL;
  v18 = a1;
  if ( a1 >= MmUserProbeAddress )
    v18 = MmUserProbeAddress;
  *(_OWORD *)v65 = *(_OWORD *)v18;
  *(_OWORD *)v66 = *(_OWORD *)(v18 + 16);
  v67 = *(_QWORD *)(v18 + 32);
  if ( _mm_srli_si128(*(__m128i *)v66, 8).m128i_u64[0] && (_DWORD)v67 )
  {
    v19 = (unsigned int)v67;
    v20 = 8LL * (unsigned int)v67;
    if ( !is_mul_ok((unsigned int)v67, 8uLL) )
      v20 = -1LL;
    v17 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v20, 0x4B677844u, PagedPool);
    v63 = v17;
    if ( !v17 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21, v8, v22, v23);
      LODWORD(v12) = -1073741801;
      v24[3] = -1073741801LL;
      v24[4] = v65[0];
      v24[5] = v65[1];
      v24[6] = v19;
      WdLogEvent5_WdLowResource(v24);
    }
  }
  if ( (int)v12 >= 0 )
  {
    v72 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v75, v65[0], (struct _KTHREAD **)Current, &v72, 1);
    v64 = 0LL;
    v28 = v72;
    if ( v72 )
    {
      v73[0] = 0LL;
      v74 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v72, v65[1], 0LL, 0LL, v73, &v74, 0);
      v12 = PairingAdapters;
      v62 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v33 = v73[0];
        if ( !v73[0] )
        {
          v34 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v34 + 24) = 5910LL;
          WdLogEvent5_WdAssertion(v34);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, v33, 0LL);
        DXGADAPTER::ReleaseReference(v33);
        v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
        v12 = v35;
        v62 = v35;
        if ( v35 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37);
          v53[3] = v12;
          v53[4] = Current;
          v53[5] = v65[0];
          v53[6] = v33;
          WdLogEvent5_WdDmmEvent(v53);
        }
        else
        {
          v39 = v65[1];
          if ( *(_DWORD *)(*((_QWORD *)v33 + 337) + 80LL) > v65[1] )
          {
            if ( *((_QWORD *)v33 + 338) )
            {
              v43 = (unsigned int)v67;
              v44 = v65[1];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v33,
                                                              v65[1],
                                                              v65[2],
                                                              v65[3],
                                                              v66[0],
                                                              (unsigned int)v67,
                                                              v17,
                                                              &v64);
              v12 = MultisamplingMethodSetFromClientVidPnSource;
              v62 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v41, v47);
                v48[3] = v43;
                v48[4] = v44;
                v48[5] = v33;
                v48[6] = v12;
                WdLogEvent5_WdWarning(v48);
                v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
                v52[3] = v44;
                v52[4] = v33;
                v52[5] = v65[2];
                v52[6] = v65[3];
                v52[7] = v66[0];
                WdLogEvent5_WdWarning(v52);
              }
              goto LABEL_29;
            }
            v42 = WdLogNewEntry5_WdDmmEvent(v37);
            *(_QWORD *)(v42 + 24) = v33;
            LODWORD(v12) = -1073741637;
            *(_QWORD *)(v42 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v42);
          }
          else
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
            LODWORD(v12) = -1073741811;
            v40[3] = -1073741811LL;
            v40[4] = v33;
            v40[5] = v39;
            WdLogEvent5_WdWarning(v40);
          }
          v62 = v12;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76, v41);
        goto LABEL_32;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      v54[3] = v28;
      v54[4] = v65[1];
      v54[5] = v12;
      WdLogEvent5_WdWarning(v54);
    }
    else
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      LODWORD(v12) = -1073741811;
      v55[3] = -1073741811LL;
      v55[4] = Current;
      v55[5] = v65[0];
      WdLogEvent5_WdWarning(v55);
      v62 = -1073741811;
    }
LABEL_32:
    if ( (int)v12 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v64 >> 3;
      if ( v17 )
      {
        v56 = *(_QWORD *)(a1 + 24);
        v57 = 0LL;
        v58 = v67;
        v17 = v63;
        while ( 1 )
        {
          v68 = v57;
          if ( (unsigned int)v57 >= v58 )
            break;
          v8 = (_QWORD *)(v56 + 12 * v57);
          if ( (unsigned __int64)(v8 + 1) > MmUserProbeAddress || v8 + 1 <= v8 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v8 = v63[v57];
          v57 = (unsigned int)(v57 + 1);
        }
        LODWORD(v12) = v62;
      }
    }
    if ( v75 )
      DXGADAPTER::ReleaseReference(v75);
  }
  if ( v17 )
    operator delete[](v17);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, (__int64)v8);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v69);
  return (unsigned int)v12;
}
