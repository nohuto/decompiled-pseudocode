/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C032F258
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0339CD4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01E11B4 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2), __int64))
{
  __int64 v7; // r12
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v9; // rcx
  char v10; // si
  int v11; // r15d
  struct DXGADAPTER *v12; // rdi
  int OutputDuplManager; // eax
  unsigned int v14; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v17; // al
  int v18; // edi
  struct OUTPUTDUPL_MGR *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v20; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall *v22)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *), __int64); // [rsp+68h] [rbp-98h]
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v24; // [rsp+78h] [rbp-88h]
  char v25; // [rsp+80h] [rbp-80h]
  unsigned __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[144]; // [rsp+A0h] [rbp-60h] BYREF

  v22 = a6;
  v7 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1);
  v10 = 0;
  v11 = IsRemoteSessionUsingXddmMonitors;
  v21 = 0LL;
  v12 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v9) )
    {
      WdLogSingleEntry1(1LL, 80LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
        80LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(2LL, 86LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find remote output duplication manager",
        86LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221226021LL;
    }
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(a1, v7, &v21, &v27, &v20, &v26, &v19);
  v14 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v14;
  }
  v12 = v20;
  RemoteOutputDuplMgr = v19;
  if ( !v20 )
  {
LABEL_11:
    v17 = 0;
    goto LABEL_12;
  }
  v17 = 1;
LABEL_12:
  v24 = v12;
  v25 = 0;
  if ( v17 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    v10 = v25;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v12, 0LL);
  if ( !a1
    || v11
    || (DXGADAPTER::ReleaseReference(v21),
        DXGADAPTER::ReleaseReference(v12),
        v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL),
        v18 >= 0) )
  {
    if ( (unsigned int)v7 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v18 = v22(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a5);
    }
    else
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
      v18 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  if ( v10 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  return (unsigned int)v18;
}
