/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C015DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
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
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C015E248 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 *v7; // rax
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  int PairingAdapters; // esi
  struct DXGADAPTER *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  struct DXGADAPTER *v30; // rsi
  __int64 v31; // rax
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  int v34; // [rsp+40h] [rbp-118h] BYREF
  __int64 v35; // [rsp+48h] [rbp-110h]
  char v36; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v37; // [rsp+58h] [rbp-100h] BYREF
  __int128 v38; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGADAPTER *v39; // [rsp+70h] [rbp-E8h] BYREF
  DXGADAPTER *v40; // [rsp+78h] [rbp-E0h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v43[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2146);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2146LL);
  v7 = (__int128 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (__int128 *)MmUserProbeAddress;
  v38 = *v7;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4, v5, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v12);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v34);
    }
    return 3221225485LL;
  }
  v37 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v40, (unsigned int)v38, Current, &v37, 1);
  v16 = v37;
  if ( !v37 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = (unsigned int)v38;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    if ( v40 )
      DXGADAPTER::ReleaseReference(v40);
    goto LABEL_12;
  }
  v37 = 0LL;
  v39 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v16, DWORD1(v38), &v37, &v41, &v39, &v42, 0);
  if ( PairingAdapters >= 0 )
  {
    v24 = v39;
  }
  else
  {
    v24 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v16, DWORD1(v38), &v37, &v41, 0LL, 0LL, 0);
  }
  if ( PairingAdapters >= 0 )
  {
    if ( v24 && !*((_QWORD *)v24 + 337) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v29 + 24) = 11287LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = v37;
    if ( !v37 || !*((_QWORD *)v37 + 338) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v31 + 24) = 11289LL;
      WdLogEvent5_WdAssertion(v31);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v30, v24);
    DXGADAPTER::ReleaseReference(v30);
    if ( v24 )
      DXGADAPTER::ReleaseReference(v24);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL);
    if ( PairingAdapters >= 0 )
    {
      if ( !v24 || (**((_DWORD **)v24 + 325) & 0x80000) != 0 )
        *((_QWORD *)&v38 + 1) = 0x3F8000003F800000LL;
      else
        PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                            *((ADAPTER_DISPLAY **)v24 + 337),
                            DWORD1(v38),
                            (float *)&v38 + 2,
                            (float *)&v38 + 3);
      v33 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      *v33 = DWORD2(v38);
      v32 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v32 = (_DWORD *)MmUserProbeAddress;
      *v32 = HIDWORD(v38);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43, (__int64)v32);
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v25 + 24) = v16;
    *(_QWORD *)(v25 + 32) = DWORD1(v38);
    WdLogEvent5_WdError(v25);
  }
  if ( v40 )
    DXGADAPTER::ReleaseReference(v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v26);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v34);
  return (unsigned int)PairingAdapters;
}
