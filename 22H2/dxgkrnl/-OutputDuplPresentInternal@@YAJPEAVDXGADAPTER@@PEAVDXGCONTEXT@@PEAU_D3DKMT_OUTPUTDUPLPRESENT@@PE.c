/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029C240
 * Callers:
 *     OutputDuplPresent @ 0x1C029E558 (OutputDuplPresent.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C014F4D8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029C5D4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct DXGADAPTER **v8; // rbx
  __int64 v9; // rdx
  struct DXGADAPTER **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int OutputDuplManager; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER **v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  struct OUTPUTDUPL_MGR *v28; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  char v35; // [rsp+88h] [rbp-78h]
  _BYTE v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[88]; // [rsp+D8h] [rbp-28h] BYREF

  v31 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( (a3->Flags.Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1, (__int64)a2);
  }
  else
  {
    v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v29, (__int64)a2);
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v31, v9);
    OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v10, &v32, v8, &v30, &v28);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v28;
  }
  if ( !RemoteOutputDuplMgr )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v15 + 24) = 2833LL;
    WdLogEvent5_WdAssertion(v15);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = a3->VidPnSourceId;
    WdLogEvent5_WdError(v16);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  v17 = *((_QWORD *)a2 + 2);
  v35 = 0;
  v34 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, *((_QWORD *)a2 + 2), 2, v18, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  if ( OutputDuplManager >= 0 )
  {
    Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
    if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 8) != 0 )
      goto LABEL_16;
    v21 = (DXGADAPTER **)*((_QWORD *)v29 + 337);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdError(0LL, v19);
      *(_QWORD *)(v22 + 24) = v29 != 0LL;
      WdLogEvent5_WdError(v22);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v21, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
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
                            a3->VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v36);
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = a2;
      *(_QWORD *)(v26 + 32) = a3->VidPnSourceId;
      WdLogEvent5_WdWarning(v26);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  if ( v35 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
LABEL_19:
  DXGADAPTER_REFERENCE::Assign(&v29, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v31, 0LL);
  return (unsigned int)OutputDuplManager;
}
