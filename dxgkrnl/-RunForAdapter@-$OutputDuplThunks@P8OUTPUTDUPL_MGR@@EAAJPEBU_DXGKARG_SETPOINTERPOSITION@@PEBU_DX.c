/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C032A55C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
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

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, UINT a4, UINT a5), __int64, __int64, int, int))
{
  __int64 v10; // r12
  int IsRemoteSessionUsingXddmMonitors; // eax
  char v12; // si
  int v13; // r15d
  struct DXGADAPTER *v14; // rdi
  int OutputDuplManager; // eax
  unsigned int v16; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v19; // al
  int v20; // edi
  struct OUTPUTDUPL_MGR *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v22; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v25)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *, const struct _DXGKARG_SETPOINTERSHAPE *, UINT, UINT), __int64, __int64, int, int); // [rsp+70h] [rbp-90h]
  _BYTE v26[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v27; // [rsp+80h] [rbp-80h]
  char v28; // [rsp+88h] [rbp-78h]
  unsigned __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v31[144]; // [rsp+A0h] [rbp-60h] BYREF

  v24 = a6;
  v25 = a9;
  v10 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v12 = 0;
  v13 = IsRemoteSessionUsingXddmMonitors;
  v23 = 0LL;
  v14 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
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
  OutputDuplManager = FindOutputDuplManager(a1, v10, &v23, &v30, &v22, &v29, &v21);
  v16 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v16;
  }
  v14 = v22;
  RemoteOutputDuplMgr = v21;
  if ( !v22 )
  {
LABEL_11:
    v19 = 0;
    goto LABEL_12;
  }
  v19 = 1;
LABEL_12:
  v27 = v14;
  v28 = 0;
  if ( v19 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    v12 = v28;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v14, 0LL);
  if ( !a1
    || v13
    || (DXGADAPTER::ReleaseReference(v23),
        DXGADAPTER::ReleaseReference(v14),
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL),
        v20 >= 0) )
  {
    if ( (unsigned int)v10 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v20 = v25(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, v24, a7, a8);
    }
    else
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v10, 0LL, 0LL, 0LL, 0LL);
      v20 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  return (unsigned int)v20;
}
