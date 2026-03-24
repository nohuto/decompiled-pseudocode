/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C016AF88
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C016AE60 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C016B1A0 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD **v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rsi
  struct DXGDEVICE *v21; // rdi
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  struct DXGADAPTER *v27; // r15
  ADAPTER_DISPLAY **v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGDEVICE *v48; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v49; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGDEVICE *v50; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v51; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v52; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT **v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  char v56; // [rsp+80h] [rbp-80h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v59; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v60[144]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = -1;
  v53 = a4;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v55 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2192);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2192LL);
  v49 = 0LL;
  v7 = 0LL;
  v48 = 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v16 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v14, v13);
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v37 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v26) = -1073741790;
    *(_QWORD *)(v37 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v37);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v59,
    (unsigned int)v6,
    (struct _KTHREAD **)Current,
    &v49,
    1);
  v20 = v49;
  if ( v49 )
  {
    v21 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, (unsigned int)v5, v16, &v48);
      if ( !v48 )
      {
        v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v42 + 24) = v20;
        *(_QWORD *)(v42 + 32) = v5;
        WdLogEvent5_WdWarning(v42);
        if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
        LODWORD(v26) = -1073741811;
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v48 + 8);
      v7 = v48;
      v21 = v48;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
        v7 = v48;
      }
      v20 = v49;
    }
    v51 = 0LL;
    v52 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v20, (unsigned int)v4, &v51, &v57, &v52, &v58, 0);
    v26 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v43[3] = v20;
      v43[4] = v4;
      v43[5] = v26;
    }
    else
    {
      v27 = v51;
      v28 = (ADAPTER_DISPLAY **)v52;
      if ( !v51 || !v52 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v44 + 24) = 6336LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( (unsigned int)v4 < *((_DWORD *)v28[337] + 20) )
      {
        if ( !v21
          || v27 == *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) && v28 == *((ADAPTER_DISPLAY ***)v7 + 231) )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, v27, (struct DXGADAPTER *const)v28);
          DXGADAPTER::ReleaseReference(v27);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v28);
          v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
          if ( v31 >= 0 )
          {
            if ( !*((_QWORD *)v27 + 338) )
            {
              v46 = WdLogNewEntry5_WdAssertion(v30, v29);
              *(_QWORD *)(v46 + 24) = 6371LL;
              WdLogEvent5_WdAssertion(v46);
            }
            if ( !v28[337] )
            {
              v47 = WdLogNewEntry5_WdAssertion(v30, v29);
              *(_QWORD *)(v47 + 24) = 6372LL;
              WdLogEvent5_WdAssertion(v47);
            }
            if ( !(_DWORD)v5 || *((_DWORD *)v7 + 144) == 1 )
            {
              ADAPTER_DISPLAY::GetVBlankEvent(v28[337], v4, v53);
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v60);
            }
            else
            {
              v31 = -1073741130;
            }
          }
          LODWORD(v26) = v31;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60, v29);
        }
        else
        {
          v45 = WdLogNewEntry5_WdWarning(v24, v23, v25);
          *(_QWORD *)(v45 + 24) = v20;
          *(_QWORD *)(v45 + 32) = v5;
          WdLogEvent5_WdWarning(v45);
          LODWORD(v26) = -1073741811;
        }
        goto LABEL_20;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      LODWORD(v26) = -1073741811;
      v43[3] = v4;
      v43[4] = -1073741811LL;
    }
    WdLogEvent5_WdError(v43);
LABEL_20:
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    goto LABEL_21;
  }
  v38 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  LODWORD(v26) = -1073741811;
  *(_QWORD *)(v38 + 24) = v6;
  *(_QWORD *)(v38 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v38);
LABEL_21:
  if ( v59 )
    DXGADAPTER::ReleaseReference(v59);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v32);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v54);
  return (unsigned int)v26;
}
