/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C031BA80 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017B030 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02D95F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0329360 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0329AC4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct DXGPROCESS *a2)
{
  int v2; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  struct DXGHWQUEUE *v8; // rbx
  unsigned int v9; // ebx
  __int64 CurrentProcess; // rax
  __int64 v11; // r9
  int OutputDuplManager; // ebx
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int *v16; // rax
  struct DXGHWQUEUE *v17; // rbx
  struct DXGDEVICE **v18; // r15
  unsigned __int64 v19; // rbx
  _QWORD *Pool2; // rax
  unsigned int v21; // r14d
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  char *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  char *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // r9
  const wchar_t *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  struct DXGADAPTER **v38; // rbx
  struct DXGADAPTER **v39; // rax
  struct DXGHWQUEUE *RemoteOutputDuplMgr; // rsi
  struct DXGDEVICE *v41; // rax
  __int64 v42; // r9
  DXGADAPTER **v43; // rcx
  struct DXGGLOBAL *Global; // rax
  const struct DXGK_PRESENT_PARAMS *v45; // rax
  const struct DXGK_PRESENT_PARAMS *v46; // r14
  struct DXGGLOBAL *v47; // rax
  struct DXGHWQUEUE *v49; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  _BYTE v51[32]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v55; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v57[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v58[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h]
  char v60; // [rsp+C8h] [rbp-38h]
  PVOID v61; // [rsp+D0h] [rbp-30h] BYREF
  char v62; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v63; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v64; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v65; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v66[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v67[6]; // [rsp+120h] [rbp+20h] BYREF
  char v68; // [rsp+150h] [rbp+50h]
  char v69[8]; // [rsp+160h] [rbp+60h] BYREF
  char v70[64]; // [rsp+168h] [rbp+68h] BYREF
  char v71[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = *((_DWORD *)a1 + 14);
  v53 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v6 = *((_DWORD *)a1 + 15);
    v49 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57, v6, a2, &v49, 0, 1);
    v8 = v49;
    if ( !v49 )
    {
      v9 = *((_DWORD *)a1 + 15);
      CurrentProcess = PsGetCurrentProcess(v7);
      v11 = v9;
      OutputDuplManager = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v11);
LABEL_6:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
      goto LABEL_86;
    }
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v53);
    v14 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v8 + 2), *((_DWORD *)a1 + 1), v13, &v54);
    if ( v14 < 0 )
    {
      OutputDuplManager = v14;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
  }
  v15 = *((_DWORD *)a1 + 2);
  v61 = 0LL;
  v63 = 0;
  if ( !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&v61, v15) )
  {
    WdLogSingleEntry1(3LL, 2617LL);
    OutputDuplManager = -1073741801;
    goto LABEL_82;
  }
  v16 = (unsigned int *)*((_QWORD *)a1 + 2);
  v49 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66, *v16, a2, &v49, 0);
  v17 = v49;
  if ( !v49 )
  {
    WdLogSingleEntry1(3LL, **((unsigned int **)a1 + 2));
    OutputDuplManager = -1073741811;
    goto LABEL_81;
  }
  *(_QWORD *)v61 = v49;
  if ( !v53 )
    DXGADAPTER_REFERENCE::Assign(&v53, *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 1880LL));
  v18 = (struct DXGDEVICE **)*((_QWORD *)v17 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v18[2]);
  v19 = *((unsigned int *)a1 + 2);
  P = 0LL;
  v52 = 0;
  if ( (unsigned int)v19 <= 4 )
  {
    Pool2 = v51;
    P = v51;
    if ( (_DWORD)v19 )
    {
      memset(v51, 0, 8 * v19);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
    {
LABEL_20:
      WdLogSingleEntry1(3LL, 2646LL);
      OutputDuplManager = -1073741801;
      goto LABEL_76;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v19, 1265072196LL);
    P = Pool2;
  }
  v52 = v19;
  if ( !Pool2 )
    goto LABEL_20;
  *Pool2 = v18;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v58, a2);
  v21 = 1;
  if ( *((_DWORD *)a1 + 2) <= 1u )
  {
LABEL_48:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v67,
      P,
      v52,
      v33,
      1);
    if ( v68 )
    {
      if ( v67[0] )
      {
        WdLogSingleEntry1(3LL, 2712LL);
        OutputDuplManager = -1073741811;
      }
      else
      {
        WdLogSingleEntry1(3LL, 2707LL);
        OutputDuplManager = -1073741801;
      }
      goto LABEL_75;
    }
    v37 = *((_DWORD *)a1 + 14);
    v64 = 0LL;
    v55 = 0LL;
    v49 = 0LL;
    if ( (v37 & 2) != 0 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    }
    else
    {
      v38 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v55);
      v39 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v64);
      OutputDuplManager = FindOutputDuplManager(v53, *((_DWORD *)a1 + 1), v39, &v65, v38, &v56, &v49);
      if ( OutputDuplManager < 0 )
      {
LABEL_74:
        DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v64, 0LL);
LABEL_75:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v67);
        goto LABEL_76;
      }
      RemoteOutputDuplMgr = v49;
    }
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(1LL, 2736LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed to get output dupl manager",
        2736LL,
        0LL,
        0LL,
        0LL,
        0LL);
      OutputDuplManager = -1073741275;
      goto LABEL_74;
    }
    if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 1));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VidPn source 0x%I64x is not valid for output duplication manager",
        *((unsigned int *)a1 + 1),
        0LL,
        0LL,
        0LL,
        0LL);
      OutputDuplManager = -1073741811;
      goto LABEL_74;
    }
    v41 = v18[2];
    v60 = 0;
    v59 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v18[2], 2, v42, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69, 0LL);
    if ( OutputDuplManager >= 0 )
    {
      if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        goto LABEL_68;
      v43 = (DXGADAPTER **)*((_QWORD *)v55 + 365);
      if ( !v43 )
      {
        WdLogSingleEntry1(2LL, 1LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Output duplication is not supported on render only device 0x%I64x",
          v55 != 0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        OutputDuplManager = -1073741811;
        goto LABEL_71;
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v43, v18[2], *((_DWORD *)a1 + 1)) )
      {
LABEL_68:
        Global = DXGGLOBAL::GetGlobal();
        v45 = (const struct DXGK_PRESENT_PARAMS *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
        v46 = v45;
        if ( v45 )
        {
          memset(v45, 0, 0x5F8uLL);
          *((_QWORD *)v46 + 188) = v61;
          OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                                RemoteOutputDuplMgr,
                                (struct DXGCONTEXT *)v18,
                                *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                                *(_DWORD *)a1,
                                *((_DWORD *)a1 + 2) - 1,
                                (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                                v46,
                                *((_DWORD *)a1 + 1),
                                (struct DXGCONTEXT **)P,
                                (struct COREDEVICEACCESS *)v69);
          v47 = DXGGLOBAL::GetGlobal();
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v47 + 1136), v46);
        }
        else
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          OutputDuplManager = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v18, *((unsigned int *)a1 + 1));
        OutputDuplManager = -1071775744;
      }
    }
LABEL_71:
    COREACCESS::~COREACCESS((COREACCESS *)v71);
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    if ( v60 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    goto LABEL_74;
  }
  while ( 1 )
  {
    v22 = v21;
    v23 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v21) >> 6) & 0xFFFFFF;
    if ( v23 >= *((_DWORD *)a2 + 74) )
      goto LABEL_28;
    v24 = *((_QWORD *)a2 + 35);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v21) >> 25) & 0x60) != (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60) )
      goto LABEL_28;
    if ( (*(_DWORD *)(v24 + 16LL * v23 + 8) & 0x2000) != 0 )
      goto LABEL_28;
    v25 = *(_DWORD *)(v24 + 16LL * v23 + 8) & 0x1F;
    if ( !v25 )
      goto LABEL_28;
    if ( v25 != 15 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_28:
      v26 = 0LL;
      goto LABEL_29;
    }
    v26 = *(_QWORD *)(v24 + 16LL * v23);
LABEL_29:
    if ( v21 >= v63 )
      v27 = v61;
    else
      v27 = (char *)v61 + 8 * v21;
    *v27 = v26;
    v28 = (char *)v61;
    v29 = (char *)v61 + 8 * v21;
    if ( v21 >= v63 )
      v29 = v61;
    OutputDuplManager = -1073741811;
    if ( !*v29 )
      break;
    if ( v21 < v63 )
      v28 = (char *)v61 + 8 * v21;
    if ( v21 >= v52 )
      v30 = P;
    else
      v30 = (char *)P + 8 * v21;
    *v30 = *(_QWORD *)(*(_QWORD *)v28 + 16LL);
    v31 = (char *)P;
    v32 = (char *)P + 8 * v21;
    if ( v21 >= v52 )
      v32 = P;
    if ( !*v32 )
      goto LABEL_51;
    if ( v21 < v52 )
      v31 = (char *)P + 8 * v21;
    if ( *(struct DXGDEVICE **)(*(_QWORD *)v31 + 16LL) != v18[2] )
    {
LABEL_51:
      WdLogSingleEntry4(2LL, v18, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v21), v21, -1073741811LL);
      v34 = L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x";
      v35 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v21);
      v36 = -1073741811LL;
      goto LABEL_53;
    }
    if ( ++v21 >= *((_DWORD *)a1 + 2) )
      goto LABEL_48;
  }
  WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v21), v21);
  v34 = L"DxgkOutputDuplPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d";
  v35 = v21;
  v18 = (struct DXGDEVICE **)*(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v21);
  v22 = 0LL;
  v36 = 0LL;
LABEL_53:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v34, (__int64)v18, v35, v22, v36, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
LABEL_76:
  if ( P != v51 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v52 = 0;
  if ( v57[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
LABEL_81:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v66);
LABEL_82:
  if ( v61 != &v62 && v61 )
    ExFreePoolWithTag(v61, 0);
  v61 = 0LL;
  v63 = 0;
LABEL_86:
  DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
  return (unsigned int)OutputDuplManager;
}
