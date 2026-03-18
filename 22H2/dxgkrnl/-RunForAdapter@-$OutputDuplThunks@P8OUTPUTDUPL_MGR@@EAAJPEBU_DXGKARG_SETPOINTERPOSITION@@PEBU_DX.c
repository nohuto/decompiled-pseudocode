/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C032EF9C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01F2970 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
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
  __int64 v12; // rcx
  char v13; // si
  int v14; // r15d
  struct DXGADAPTER *v15; // rdi
  int OutputDuplManager; // eax
  unsigned int v17; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v20; // al
  int v21; // edi
  struct OUTPUTDUPL_MGR *v22; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v23; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v26)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *, const struct _DXGKARG_SETPOINTERSHAPE *, UINT, UINT), __int64, __int64, int, int); // [rsp+70h] [rbp-90h]
  _BYTE v27[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v28; // [rsp+80h] [rbp-80h]
  char v29; // [rsp+88h] [rbp-78h]
  unsigned __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v32[144]; // [rsp+A0h] [rbp-60h] BYREF

  v25 = a6;
  v26 = a9;
  v10 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1);
  v13 = 0;
  v14 = IsRemoteSessionUsingXddmMonitors;
  v24 = 0LL;
  v15 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v12) )
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
  OutputDuplManager = FindOutputDuplManager(a1, v10, &v24, &v31, &v23, &v30, &v22);
  v17 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v17;
  }
  v15 = v23;
  RemoteOutputDuplMgr = v22;
  if ( !v23 )
  {
LABEL_11:
    v20 = 0;
    goto LABEL_12;
  }
  v20 = 1;
LABEL_12:
  v28 = v15;
  v29 = 0;
  if ( v20 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    v13 = v29;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v15, 0LL);
  if ( !a1
    || v14
    || (DXGADAPTER::ReleaseReference(v24),
        DXGADAPTER::ReleaseReference(v15),
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL),
        v21 >= 0) )
  {
    if ( (unsigned int)v10 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v21 = v26(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, v25, a7, a8);
    }
    else
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v10, 0LL, 0LL, 0LL, 0LL);
      v21 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  return (unsigned int)v21;
}
