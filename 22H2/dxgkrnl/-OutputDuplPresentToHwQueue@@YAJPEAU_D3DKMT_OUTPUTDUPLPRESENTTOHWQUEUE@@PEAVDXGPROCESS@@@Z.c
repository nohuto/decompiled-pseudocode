/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026E918
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0275220 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017AD0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017BF8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C014F4D8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022CDB8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C029C140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029C5D4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct DXGPROCESS *a2)
{
  int v2; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int OutputDuplManager; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGDEVICE *v14; // rbx
  struct DXGADAPTER **v15; // rax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGHWQUEUE *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  struct DXGDEVICE **v29; // r15
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  _BYTE *PoolWithTag; // rax
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  char *v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  struct DXGADAPTER *v58; // rdi
  struct DXGADAPTER **v59; // rbx
  __int64 v60; // rdx
  struct DXGADAPTER **v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  struct DXGDEVICE *v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  DXGADAPTER **v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rax
  struct DXGGLOBAL *Global; // rax
  char *v76; // rbx
  PSLIST_ENTRY v77; // rdi
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(__int64, __int64, __int64, char *); // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  int v87; // esi
  __int64 v88; // rdx
  __int64 v89; // rcx
  struct DXGGLOBAL *v90; // rax
  union _SLIST_HEADER *v91; // rbx
  __int64 v92; // rax
  struct DXGHWQUEUE *v94; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v95; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  _BYTE v98[32]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v99; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v100; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v101; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v102[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v103[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-40h]
  char v105; // [rsp+C8h] [rbp-38h]
  PVOID v106; // [rsp+D0h] [rbp-30h] BYREF
  char v107; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v108; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v109; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v110; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v111[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v112[6]; // [rsp+120h] [rbp+20h] BYREF
  char v113; // [rsp+150h] [rbp+50h]
  char v114[8]; // [rsp+160h] [rbp+60h] BYREF
  char v115[64]; // [rsp+168h] [rbp+68h] BYREF
  char v116[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = *((_DWORD *)a1 + 14);
  v95 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v94 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102, *((_DWORD *)a1 + 15), a2, &v94, 0);
    if ( !v94 )
    {
      OutputDuplManager = -1073741811;
      v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
      v9[3] = -1073741811LL;
      v9[4] = PsGetCurrentProcess(v11, v10, v12, v13);
      v9[5] = *((unsigned int *)a1 + 15);
      WdLogEvent5_WdWarning(v9);
LABEL_6:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
      goto LABEL_90;
    }
    v14 = (struct DXGDEVICE *)*((_QWORD *)v94 + 2);
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v95, v5);
    v16 = OutputDuplPreIndirectPresent(v14, *((_DWORD *)a1 + 1), v15, &v96);
    if ( v16 < 0 )
    {
      OutputDuplManager = v16;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v102);
  }
  v17 = *((_DWORD *)a1 + 2);
  v106 = 0LL;
  v108 = 0;
  if ( !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v106, v17) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = 2389LL;
    WdLogEvent5_WdWarning(v21);
    OutputDuplManager = -1073741801;
    goto LABEL_86;
  }
  v22 = (unsigned int *)*((_QWORD *)a1 + 2);
  v94 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v111, *v22, (struct _KTHREAD **)a2, &v94, 0);
  v26 = v94;
  if ( !v94 )
  {
    v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v27 + 24) = **((unsigned int **)a1 + 2);
    WdLogEvent5_WdWarning(v27);
    OutputDuplManager = -1073741811;
    goto LABEL_85;
  }
  *(_QWORD *)v106 = v94;
  if ( !v95 )
    DXGADAPTER_REFERENCE::Assign(&v95, *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 1848LL));
  v29 = (struct DXGDEVICE **)*((_QWORD *)v26 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v102, v29[2]);
  v33 = *((_DWORD *)a1 + 2);
  P = 0LL;
  v99 = 0;
  if ( v33 <= 4 )
  {
    PoolWithTag = v98;
  }
  else
  {
    v30 = 0xFFFFFFFFFFFFFFFFuLL % v33;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
    {
LABEL_79:
      v92 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v92 + 24) = 2418LL;
      WdLogEvent5_WdWarning(v92);
      OutputDuplManager = -1073741801;
      goto LABEL_80;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v33, 0x4B677844u);
  }
  P = PoolWithTag;
  v99 = v33;
  if ( !PoolWithTag )
    goto LABEL_79;
  memset(PoolWithTag, 0, 8LL * v33);
  if ( !P )
    goto LABEL_79;
  *(_QWORD *)P = v29;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v103, (struct _KTHREAD **)a2);
  v35 = 1;
  if ( *((_DWORD *)a1 + 2) <= 1u )
  {
LABEL_47:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v112,
      P,
      v99);
    if ( v113 )
    {
      if ( v112[0] )
      {
        v56 = WdLogNewEntry5_WdWarning(v50, v49, v51);
        *(_QWORD *)(v56 + 24) = 2484LL;
        WdLogEvent5_WdWarning(v56);
        OutputDuplManager = -1073741811;
      }
      else
      {
        v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
        *(_QWORD *)(v52 + 24) = 2479LL;
        WdLogEvent5_WdWarning(v52);
        OutputDuplManager = -1073741801;
      }
      goto LABEL_78;
    }
    v57 = *((_DWORD *)a1 + 14);
    v109 = 0LL;
    v100 = 0LL;
    v94 = 0LL;
    if ( (v57 & 2) != 0 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v50, v49);
    }
    else
    {
      v58 = v95;
      v59 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v100, v49);
      v61 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v109, v60);
      OutputDuplManager = FindOutputDuplManager(v58, *((unsigned int *)a1 + 1), v61, &v110, v59, &v101, &v94);
      if ( OutputDuplManager < 0 )
      {
LABEL_77:
        DXGADAPTER_REFERENCE::Assign(&v100, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v109, 0LL);
LABEL_78:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v112);
        goto LABEL_80;
      }
      RemoteOutputDuplMgr = v94;
    }
    if ( !RemoteOutputDuplMgr )
    {
      v65 = WdLogNewEntry5_WdAssertion(v63, v62);
      *(_QWORD *)(v65 + 24) = 2508LL;
      WdLogEvent5_WdAssertion(v65);
      OutputDuplManager = -1073741275;
      goto LABEL_77;
    }
    if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v66 = WdLogNewEntry5_WdError(v63, v62);
      *(_QWORD *)(v66 + 24) = *((unsigned int *)a1 + 1);
      WdLogEvent5_WdError(v66);
      OutputDuplManager = -1073741811;
      goto LABEL_77;
    }
    v67 = v29[2];
    v105 = 0;
    v104 = *(_QWORD *)(*((_QWORD *)v67 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, (__int64)v29[2], 2, v68, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v114, 0LL);
    if ( OutputDuplManager >= 0 )
    {
      if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        goto LABEL_68;
      v71 = (DXGADAPTER **)*((_QWORD *)v100 + 337);
      if ( !v71 )
      {
        v72 = WdLogNewEntry5_WdError(0LL, v69);
        *(_QWORD *)(v72 + 24) = v100 != 0LL;
        WdLogEvent5_WdError(v72);
        OutputDuplManager = -1073741811;
        goto LABEL_75;
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v71, v29[2], *((_DWORD *)a1 + 1)) )
      {
LABEL_68:
        Global = DXGGLOBAL::GetGlobal(v70, v69);
        v76 = (char *)Global + 1024;
        ++*((_DWORD *)Global + 261);
        v77 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
        if ( v77
          || (v78 = *((unsigned int *)v76 + 11),
              v79 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v76 + 6),
              v80 = *((unsigned int *)v76 + 10),
              v81 = *((unsigned int *)v76 + 9),
              ++*((_DWORD *)v76 + 6),
              (v77 = (PSLIST_ENTRY)v79(v81, v78, v80, v76)) != 0LL) )
        {
          memset(v77, 0, 0x5F8uLL);
          v77[94].Next = (struct _SLIST_ENTRY *)v106;
          v87 = OUTPUTDUPL_MGR::ProcessPresent(
                  RemoteOutputDuplMgr,
                  (struct DXGCONTEXT *)v29,
                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                  *(_DWORD *)a1,
                  *((_DWORD *)a1 + 2) - 1,
                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                  (const struct DXGK_PRESENT_PARAMS *)v77,
                  *((_DWORD *)a1 + 1),
                  (struct DXGCONTEXT **)P,
                  (struct COREDEVICEACCESS *)v114);
          v90 = DXGGLOBAL::GetGlobal(v89, v88);
          v91 = (union _SLIST_HEADER *)((char *)v90 + 1024);
          ++*((_DWORD *)v90 + 263);
          if ( ExQueryDepthSList((PSLIST_HEADER)v90 + 64) < *((_WORD *)v90 + 520) )
          {
            ExpInterlockedPushEntrySList(v91, v77);
          }
          else
          {
            ++LODWORD(v91[2].Alignment);
            ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v91[3].Region)(v77, v91);
          }
          OutputDuplManager = v87;
        }
        else
        {
          v86 = WdLogNewEntry5_WdLowResource(v83, v82, v84, v85);
          OutputDuplManager = -1073741801;
          *(_QWORD *)(v86 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v86);
        }
      }
      else
      {
        v74 = WdLogNewEntry5_WdWarning(v70, v69, v73);
        *(_QWORD *)(v74 + 24) = v29;
        *(_QWORD *)(v74 + 32) = *((unsigned int *)a1 + 1);
        WdLogEvent5_WdWarning(v74);
        OutputDuplManager = -1071775744;
      }
    }
LABEL_75:
    COREACCESS::~COREACCESS((COREACCESS *)v116);
    COREACCESS::~COREACCESS((COREACCESS *)v115);
    if ( v105 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v36 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 >= *((_DWORD *)a2 + 64) )
      goto LABEL_27;
    v37 = *((_QWORD *)a2 + 30);
    v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 25) & 0x60) != (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
      || (v38 & 0x2000) != 0
      || (v38 & 0x1F) == 0 )
    {
      goto LABEL_27;
    }
    v39 = v38 & 0x1F;
    if ( (_BYTE)v39 != 15 )
    {
      v40 = WdLogNewEntry5_WdError(v39, (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 25) & 0x60);
      *(_QWORD *)(v40 + 24) = 316LL;
      WdLogEvent5_WdError(v40);
LABEL_27:
      v41 = 0LL;
      goto LABEL_28;
    }
    v41 = *(_QWORD *)(v37 + 16LL * (unsigned int)v36);
LABEL_28:
    if ( v35 >= v108 )
      v42 = v106;
    else
      v42 = (char *)v106 + 8 * v35;
    *v42 = v41;
    v43 = (char *)v106;
    v44 = (char *)v106 + 8 * v35;
    if ( v35 >= v108 )
      v44 = v106;
    OutputDuplManager = -1073741811;
    if ( !*v44 )
      break;
    if ( v35 < v108 )
      v43 = (char *)v106 + 8 * v35;
    v45 = *(_QWORD *)(*(_QWORD *)v43 + 16LL);
    if ( v35 >= v99 )
      v46 = P;
    else
      v46 = (char *)P + 8 * v35;
    *v46 = v45;
    v47 = P;
    v48 = (char *)P + 8 * v35;
    if ( v35 >= v99 )
      v48 = P;
    if ( !*v48 )
      goto LABEL_50;
    if ( v35 < v99 )
      v47 = (char *)P + 8 * v35;
    v47 = (_QWORD *)*v47;
    if ( (struct DXGDEVICE *)v47[2] != v29[2] )
    {
LABEL_50:
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v47, v45);
      v53[3] = v29;
      v54 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v35);
      v53[5] = v35;
      v53[4] = v54;
      v53[6] = -1073741811LL;
      goto LABEL_52;
    }
    if ( ++v35 >= *((_DWORD *)a1 + 2) )
      goto LABEL_47;
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdError(v44, v42);
  v55 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v35);
  v53[4] = v35;
  v53[3] = v55;
LABEL_52:
  WdLogEvent5_WdError(v53);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
LABEL_80:
  if ( P != v98 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v99 = 0;
  if ( v102[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v102);
LABEL_85:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v111, v28);
LABEL_86:
  if ( v106 != &v107 && v106 )
    ExFreePoolWithTag(v106, 0);
  v106 = 0LL;
  v108 = 0;
LABEL_90:
  DXGADAPTER_REFERENCE::Assign(&v95, 0LL);
  return (unsigned int)OutputDuplManager;
}
