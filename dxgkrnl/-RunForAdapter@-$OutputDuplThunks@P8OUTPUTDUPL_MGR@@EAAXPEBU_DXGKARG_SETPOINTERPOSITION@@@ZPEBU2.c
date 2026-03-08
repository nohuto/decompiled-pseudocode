/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C032A818
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017B030 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C017C498 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
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
  char v9; // si
  int v10; // r15d
  struct DXGADAPTER *v11; // rdi
  int OutputDuplManager; // eax
  unsigned int v13; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v16; // al
  int v17; // edi
  struct OUTPUTDUPL_MGR *v18; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall *v21)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *), __int64); // [rsp+68h] [rbp-98h]
  _BYTE v22[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v23; // [rsp+78h] [rbp-88h]
  char v24; // [rsp+80h] [rbp-80h]
  unsigned __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[144]; // [rsp+A0h] [rbp-60h] BYREF

  v21 = a6;
  v7 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v9 = 0;
  v10 = IsRemoteSessionUsingXddmMonitors;
  v20 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
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
  OutputDuplManager = FindOutputDuplManager(a1, v7, &v20, &v26, &v19, &v25, &v18);
  v13 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v13;
  }
  v11 = v19;
  RemoteOutputDuplMgr = v18;
  if ( !v19 )
  {
LABEL_11:
    v16 = 0;
    goto LABEL_12;
  }
  v16 = 1;
LABEL_12:
  v23 = v11;
  v24 = 0;
  if ( v16 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    v9 = v24;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v11, 0LL);
  if ( !a1
    || v10
    || (DXGADAPTER::ReleaseReference(v20),
        DXGADAPTER::ReleaseReference(v11),
        v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL),
        v17 >= 0) )
  {
    if ( (unsigned int)v7 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v17 = v21(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a5);
    }
    else
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
      v17 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  return (unsigned int)v17;
}
