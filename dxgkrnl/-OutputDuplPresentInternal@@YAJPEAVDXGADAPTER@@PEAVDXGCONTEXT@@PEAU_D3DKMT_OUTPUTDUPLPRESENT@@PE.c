/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C03294A0
 * Callers:
 *     OutputDuplPresent @ 0x1C032C14C (OutputDuplPresent.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017B030 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C017C498 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0329AC4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  int IsRemoteSessionUsingXddmMonitors; // r12d
  unsigned int *p_VidPnSourceId; // rdi
  struct DXGADAPTER **v10; // rbx
  struct DXGADAPTER **v11; // rax
  int OutputDuplManager; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  DXGADAPTER **v16; // rcx
  struct OUTPUTDUPL_MGR *v18; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  char v25; // [rsp+88h] [rbp-78h]
  _BYTE v26[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+D8h] [rbp-28h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  p_VidPnSourceId = &a3->VidPnSourceId;
  if ( IsRemoteSessionUsingXddmMonitors )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  else
  {
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v19);
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v21);
    OutputDuplManager = FindOutputDuplManager(a1, *p_VidPnSourceId, v11, &v22, v10, &v20, &v18);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v18;
  }
  if ( !RemoteOutputDuplMgr )
  {
    WdLogSingleEntry1(1LL, 2805LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Failed to get output dupl manager",
      2805LL,
      0LL,
      0LL,
      0LL,
      0LL);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( *p_VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    WdLogSingleEntry1(2LL, *p_VidPnSourceId);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x is not valid for output duplication manager",
      *p_VidPnSourceId,
      0LL,
      0LL,
      0LL,
      0LL);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  v14 = *((_QWORD *)a2 + 2);
  v25 = 0;
  v24 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, *((_QWORD *)a2 + 2), 2, v15, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
  if ( OutputDuplManager >= 0 )
  {
    if ( IsRemoteSessionUsingXddmMonitors || (a3->Flags.Value & 8) != 0 )
      goto LABEL_16;
    v16 = (DXGADAPTER **)*((_QWORD *)v19 + 365);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, 1LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Output duplication is not supported on render only device 0x%I64x",
        v19 != 0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v16, *((const struct DXGDEVICE **)a2 + 2), *p_VidPnSourceId) )
    {
LABEL_16:
      OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                            RemoteOutputDuplMgr,
                            a2,
                            a3->Flags,
                            a3->hSource,
                            a3->BroadcastContextCount,
                            &a3->PresentRegions,
                            0LL,
                            *p_VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v26);
    }
    else
    {
      WdLogSingleEntry2(3LL, a2, *p_VidPnSourceId);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  if ( v25 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
LABEL_19:
  DXGADAPTER_REFERENCE::Assign(&v19, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v21, 0LL);
  return (unsigned int)OutputDuplManager;
}
