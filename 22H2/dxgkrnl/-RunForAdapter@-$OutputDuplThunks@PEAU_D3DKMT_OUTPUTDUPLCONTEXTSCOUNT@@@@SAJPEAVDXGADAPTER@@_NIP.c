/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029D1A8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C014F4D8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r14
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct OUTPUTDUPL_MGR *v13; // rbx
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v24; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v25; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v27; // [rsp+60h] [rbp-A0h]
  char v28; // [rsp+68h] [rbp-98h]
  unsigned __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[144]; // [rsp+80h] [rbp-80h] BYREF

  v25 = 0LL;
  v5 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v8 = a3;
  v24 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
    v13 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = 90LL;
      WdLogEvent5_WdError(v18);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v25, &v30, &v24, &v29, &RemoteOutputDuplMgr);
  v13 = (struct OUTPUTDUPL_MGR *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v24;
    v13 = RemoteOutputDuplMgr;
    if ( v24 )
    {
      v15 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v15 = 0;
LABEL_9:
    v27 = v5;
    v28 = 0;
    if ( v15 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v5, 0LL);
    if ( a1 )
    {
      DXGADAPTER::ReleaseReference(v25);
      DXGADAPTER::ReleaseReference(v5);
      if ( *((_DWORD *)v5 + 50) != 1 )
      {
        LODWORD(v13) = -1073741130;
LABEL_18:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31, v20);
        if ( v28 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
        return (unsigned int)v13;
      }
      v13 = RemoteOutputDuplMgr;
    }
    if ( (unsigned int)v8 < *((_DWORD *)v13 + 13) )
    {
      LODWORD(v13) = a5(v13, a4);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v22 + 24) = v8;
      WdLogEvent5_WdError(v22);
      LODWORD(v13) = -1071774972;
    }
    goto LABEL_18;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = a1;
  *(_QWORD *)(v14 + 32) = v13;
  WdLogEvent5_WdWarning(v14);
  return (unsigned int)v13;
}
