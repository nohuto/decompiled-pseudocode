/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C0166634
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0166610 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden this)))
{
  int IsRemoteSessionUsingXddmMonitors; // eax
  int v7; // r15d
  struct DXGADAPTER *v8; // rdi
  int OutputDuplManager; // eax
  unsigned int v10; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v12; // al
  char v13; // si
  int v14; // edi
  struct OUTPUTDUPL_MGR *v16; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *v17; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v18; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-98h] BYREF
  char v20; // [rsp+80h] [rbp-88h]
  unsigned __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v23[144]; // [rsp+98h] [rbp-70h] BYREF

  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v18 = 0LL;
  v7 = IsRemoteSessionUsingXddmMonitors;
  v17 = 0LL;
  v8 = 0LL;
  v16 = 0LL;
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
    goto LABEL_19;
  }
  OutputDuplManager = FindOutputDuplManager(a1, 0, &v18, &v22, &v17, &v21, &v16);
  v10 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    WdLogSingleEntry2(3LL, a1, OutputDuplManager);
    return v10;
  }
  v8 = v17;
  RemoteOutputDuplMgr = v16;
  if ( !v17 )
  {
LABEL_19:
    v12 = 0;
    goto LABEL_6;
  }
  v12 = v7 + 1;
LABEL_6:
  v19[1] = v8;
  v13 = 0;
  v20 = 0;
  if ( v12 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    v13 = v20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v8, 0LL);
  if ( !a1
    || v7
    || (DXGADAPTER::ReleaseReference(v18),
        DXGADAPTER::ReleaseReference(v8),
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL),
        v14 >= 0) )
  {
    if ( *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      v14 = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", 0LL, 0LL, 0LL, 0LL, 0LL);
      v14 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  return (unsigned int)v14;
}
