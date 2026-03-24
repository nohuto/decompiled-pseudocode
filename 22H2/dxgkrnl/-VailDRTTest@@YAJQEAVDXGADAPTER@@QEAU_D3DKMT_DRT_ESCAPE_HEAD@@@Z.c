/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B6310
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0002D44 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008594 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BBC8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C012AA60 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C026A1FC (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0286100 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028AD80 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C028AFF8 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C028B1AC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C028B360 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028CF00 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall VailDRTTest(
        struct DXGADAPTER *const a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *const a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGVIRTUALMACHINE *VirtualMachine; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  HANDLE *p_Handle; // rcx
  __int64 v26; // rdx
  struct _KPROCESS *CurrentProcess; // r15
  __int64 v28; // rdx
  struct _KPROCESS *v29; // rdx
  __int64 v30; // rdi
  struct DXGPROCESS *v31; // rax
  struct DXGPROCESS *v32; // r14
  __int64 v33; // r15
  int v34; // r13d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r14
  unsigned int v39; // edi
  int v40; // eax
  int EntryType; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  int v57; // ebx
  _QWORD *v58; // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rcx
  PVOID v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  DxgkCompositionObject **v69; // rbx
  struct DXGVAILOBJECT *v70; // rax
  void *v71; // r15
  __int64 v72; // rdx
  unsigned int v73; // ebx
  char *v74; // rax
  char *v75; // r12
  __int128 v76; // xmm0
  __int64 v77; // rax
  unsigned int v78; // edi
  __int64 v79; // r14
  unsigned int v80; // ebx
  __int64 v81; // r9
  void *v82; // rcx
  NTSTATUS v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  int BundleObjectByPointer; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  unsigned int i; // ebx
  PVOID v95; // rcx
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+68h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v99; // [rsp+70h] [rbp-98h] BYREF
  __int64 v100; // [rsp+78h] [rbp-90h]
  __int64 v101; // [rsp+80h] [rbp-88h] BYREF
  __int64 v102; // [rsp+88h] [rbp-80h]
  char v103[8]; // [rsp+90h] [rbp-78h] BYREF
  char v104; // [rsp+98h] [rbp-70h]
  _BYTE v105[24]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v106[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v107; // [rsp+D8h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-20h] BYREF
  char v109; // [rsp+118h] [rbp+10h]
  _BYTE v110[1040]; // [rsp+128h] [rbp+20h] BYREF
  PVOID v111[16]; // [rsp+538h] [rbp+430h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v5 = *((_DWORD *)a2 + 3);
  if ( v5 > 6 )
  {
    v59 = v5 - 7;
    if ( !v59 )
      return DxgkSendDestroyBundleObject(*((unsigned int *)a2 + 4), (__int64)a2, a3, a4);
    v60 = v59 - 1;
    if ( !v60 )
      return DxgkExtractRemoteBundleObject(*((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), (void **)a2 + 3, 0LL);
    v61 = v60 - 1;
    if ( !v61 )
    {
      v78 = *((_DWORD *)a2 + 4);
      LODWORD(v79) = -1073741823;
      if ( v78 > 0x10 )
        return 3221225485LL;
      memset(v111, 0, sizeof(v111));
      v80 = 0;
      if ( v78 )
      {
        while ( 1 )
        {
          Handle = 0LL;
          Object = 0LL;
          LODWORD(v79) = ObReferenceObjectByHandle(
                           *((HANDLE *)a2 + v80 + 3),
                           0x20000u,
                           g_pDxgkSharedAllocationObjectType,
                           1,
                           &Object,
                           (POBJECT_HANDLE_INFORMATION)&Handle);
          v111[v80] = Object;
          if ( (int)v79 < 0 )
          {
            v82 = (void *)*((_QWORD *)a2 + v80 + 3);
            Object = 0LL;
            v83 = ObReferenceObjectByHandle(
                    v82,
                    0x20000u,
                    g_pDxgkSharedSyncObjectType,
                    1,
                    &Object,
                    (POBJECT_HANDLE_INFORMATION)&Handle);
            v79 = v83;
            v111[v80] = Object;
            if ( v83 < 0 )
              break;
          }
          v87 = *((unsigned int *)a2 + 4);
          if ( ++v80 >= (unsigned int)v87 )
            goto LABEL_114;
        }
        v88 = WdLogNewEntry5_WdWarning(v85, v84, v86);
        *(_QWORD *)(v88 + 24) = v79;
        WdLogEvent5_WdWarning(v88);
        v87 = *((unsigned int *)a2 + 4);
LABEL_114:
        if ( (int)v79 >= 0 )
        {
          BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v87, v111, (unsigned int *)a2 + 38, v81);
          v79 = BundleObjectByPointer;
          if ( BundleObjectByPointer < 0 )
          {
            v93 = WdLogNewEntry5_WdWarning(v91, v90, v92);
            *(_QWORD *)(v93 + 24) = v79;
            WdLogEvent5_WdWarning(v93);
          }
        }
      }
      for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
      {
        v95 = v111[i];
        if ( v95 )
          ObfDereferenceObject(v95);
      }
      return (unsigned int)v79;
    }
    v62 = (unsigned int)(v61 - 1);
    if ( !(_DWORD)v62 )
    {
      Current = DXGPROCESS::GetCurrent(v62, (__int64)a2, a3, a4);
      v69 = (DxgkCompositionObject **)Current;
      if ( !Current || !*((_QWORD *)Current + 60) )
      {
        v77 = WdLogNewEntry5_WdError(v68, v67);
        *(_QWORD *)(v77 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v77);
        return 3221225485LL;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v101, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v101);
      v70 = DXGPROCESS::ReferenceVailObject(v69);
      v71 = (void *)*((_QWORD *)v70 + 12);
      DxgkCompositionObject::Release(v70);
      ObfReferenceObject(v71);
      if ( (_BYTE)v102 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v101, v72);
      v73 = -1073741801;
      v74 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      v75 = v74;
      if ( v74 )
      {
        *(_QWORD *)v74 = 0LL;
        *((_QWORD *)v74 + 2) = VailDRTProcessExtractWorker;
        *((_QWORD *)v74 + 3) = v74;
        *((_OWORD *)v74 + 2) = *(_OWORD *)a2;
        *((_OWORD *)v74 + 3) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v74 + 4) = *((_OWORD *)a2 + 2);
        *((_OWORD *)v74 + 5) = *((_OWORD *)a2 + 3);
        *((_OWORD *)v74 + 6) = *((_OWORD *)a2 + 4);
        *((_OWORD *)v74 + 7) = *((_OWORD *)a2 + 5);
        *((_OWORD *)v74 + 8) = *((_OWORD *)a2 + 6);
        *((_OWORD *)v74 + 9) = *((_OWORD *)a2 + 7);
        *((_OWORD *)v74 + 10) = *((_OWORD *)a2 + 8);
        v76 = *((_OWORD *)a2 + 9);
        *((_QWORD *)v74 + 24) = v71;
        *((_OWORD *)v74 + 11) = v76;
        KeInitializeEvent((PRKEVENT)(v74 + 200), NotificationEvent, 0);
        *((_DWORD *)v75 + 56) = -1073741823;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v75, NormalWorkQueue);
        KeWaitForSingleObject(v75 + 200, Executive, 0, 0, 0LL);
        *(_OWORD *)a2 = *((_OWORD *)v75 + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)v75 + 3);
        *((_OWORD *)a2 + 2) = *((_OWORD *)v75 + 4);
        *((_OWORD *)a2 + 3) = *((_OWORD *)v75 + 5);
        *((_OWORD *)a2 + 4) = *((_OWORD *)v75 + 6);
        *((_OWORD *)a2 + 5) = *((_OWORD *)v75 + 7);
        *((_OWORD *)a2 + 6) = *((_OWORD *)v75 + 8);
        *((_OWORD *)a2 + 7) = *((_OWORD *)v75 + 9);
        *((_OWORD *)a2 + 8) = *((_OWORD *)v75 + 10);
        *((_OWORD *)a2 + 9) = *((_OWORD *)v75 + 11);
        v73 = *((_DWORD *)v75 + 56);
        operator delete(v75);
      }
      ObfDereferenceObject(v71);
      return v73;
    }
    if ( (_DWORD)v62 == 1 )
    {
      Object = 0LL;
      Handle = 0LL;
      if ( (int)DxgkCreateRemoteCompositionSurfaceObjectForPairing((struct IPairedSurfaceObject **)&Object, &Handle) >= 0 )
      {
        memset(v110, 0, sizeof(v110));
        v63 = Object;
        v99 = 0LL;
        LOBYTE(v64) = 1;
        if ( (*(int (__fastcall **)(PVOID, _BYTE *, __int64, struct _EX_RUNDOWN_REF **))(*(_QWORD *)Object + 24LL))(
               Object,
               v110,
               v64,
               &v99) >= 0 )
        {
          memset(v110, 0, 0x1C4uLL);
          (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v63 + 40LL))(v63, 0LL, 0LL, v110);
          LOBYTE(v65) = 1;
          (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v63 + 32LL))(v63, v65);
        }
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v63 + 16LL))(v63);
        if ( Handle )
          ObCloseHandle(Handle, 1);
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v5 != 6 )
  {
    if ( !v5 )
      return 0LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 0LL;
    v7 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( (unsigned int)(v8 - 1) >= 2 )
          return 3221225485LL;
        return 0LL;
      }
      Object = 0LL;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v103);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v103);
      Global = DXGGLOBAL::GetGlobal(v10, v9);
      VirtualMachine = DXGGLOBAL::FindVirtualMachine(Global, (struct _GUID *)a2 + 1);
      if ( VirtualMachine )
      {
        *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)VirtualMachine + 248);
        v17 = *((_QWORD *)VirtualMachine + 7);
        if ( v17 )
        {
          v18 = 0LL;
          if ( *((_DWORD *)a2 + 8) )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Handle, *(struct DXGFASTMUTEX *const *)(v17 + 104), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Handle);
            if ( *(_DWORD *)(v17 + 40) != 1 )
            {
LABEL_23:
              if ( !(_BYTE)v98 )
                goto LABEL_26;
              p_Handle = &Handle;
              goto LABEL_25;
            }
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v105,
              (struct _KTHREAD **)v17);
            v19 = (*((_DWORD *)a2 + 8) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 256)
              || (v20 = *(_QWORD *)(v17 + 240),
                  v21 = (*((_DWORD *)a2 + 8) >> 25) & 0x60,
                  v22 = *(_DWORD *)(v20 + 16 * v19 + 8),
                  ((*((_DWORD *)a2 + 8) >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
              || (v22 & 0x2000) != 0
              || (v22 & 0x1F) == 0 )
            {
LABEL_22:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
              goto LABEL_23;
            }
            v23 = v22 & 0x1F;
            if ( (_BYTE)v23 != 12 )
            {
              v24 = WdLogNewEntry5_WdError(v23, v21);
              *(_QWORD *)(v24 + 24) = 316LL;
              WdLogEvent5_WdError(v24);
              goto LABEL_22;
            }
            v18 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
            if ( !v18 )
              goto LABEL_22;
            DXGPROCESS::AcquireReference((DXGPROCESS *)v18, v21);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
            if ( (_BYTE)v98 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Handle, v13);
          }
          CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v14, v13, v15, v16);
          if ( !v18 )
            goto LABEL_42;
          if ( !*((_DWORD *)a2 + 9) )
          {
LABEL_41:
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v18, v26);
LABEL_42:
            if ( v104 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v103, v26);
            return 0LL;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v99, *(struct DXGFASTMUTEX *const *)(v18 + 104), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v99);
          if ( *(_DWORD *)(v18 + 40) == 1 && (*(_BYTE *)(v18 + 347) & 0x20) != 0 )
          {
            v29 = *(struct _KPROCESS **)(v18 + 56);
            v109 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v29);
            CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
              (CEnsureCurrentDxgProcess *)&v101,
              (struct DXGPROCESS *)v18);
            v30 = v102;
            if ( v102 )
            {
              v106[0] = 48LL;
              memset(&v106[1], 0, 24);
              v107 = 0LL;
              if ( (int)DxgkShareObjectsInternal(
                          0LL,
                          1,
                          CurrentProcess,
                          1u,
                          (char *)a2 + 36,
                          (__int64)v106,
                          0x10000000u,
                          &Object,
                          0LL) >= 0 )
              {
                *((_QWORD *)a2 + 5) = Object;
                *(_QWORD *)(v30 + 8) = v101;
                if ( v109 )
                  KeUnstackDetachProcess(&ApcState);
                if ( (_BYTE)v100 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v99, v26);
                goto LABEL_41;
              }
            }
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v18, v26);
            if ( v30 )
              *(_QWORD *)(v30 + 8) = v101;
            if ( v109 )
            {
              KeUnstackDetachProcess(&ApcState);
              v109 = 0;
            }
          }
          else
          {
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v18, v28);
          }
          if ( (_BYTE)v100 )
          {
            p_Handle = (HANDLE *)&v99;
LABEL_25:
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)p_Handle, v13);
          }
        }
      }
LABEL_26:
      if ( v104 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v103, v13);
      return 3221225485LL;
    }
    v31 = DXGPROCESS::GetCurrent(v7, (__int64)a2, a3, a4);
    v32 = v31;
    if ( !v31 )
      return 3221225485LL;
    LODWORD(Object) = *((_DWORD *)v31 + 106);
    if ( !(_DWORD)Object )
      return 3221225485LL;
    v33 = *((unsigned int *)a2 + 4);
    if ( !(_DWORD)v33 )
      return 3221225485LL;
    v34 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v105, (struct _KTHREAD **)v31);
    v38 = (__int64)v32 + 240;
    v39 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
    if ( v39 >= *(_DWORD *)(v38 + 16)
      || (v35 = *(unsigned int *)(*(_QWORD *)v38 + 16LL * v39 + 8),
          v36 = (unsigned int)v33 >> 30,
          v40 = (*(_DWORD *)(*(_QWORD *)v38 + 16LL * v39 + 8) >> 5) & 3,
          LODWORD(v99) = v36,
          (_DWORD)v36 != v40)
      || (v35 & 0x2000) != 0
      || (v35 & 0x1F) == 0 )
    {
      v57 = 0;
LABEL_84:
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      v58[4] = v57;
      v58[3] = v33;
      v58[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v58);
LABEL_85:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
      if ( !v34 )
        return 3221225485LL;
      *((_DWORD *)a2 + 5) = (_DWORD)Object;
      *((_DWORD *)a2 + 6) = v34;
      return 0LL;
    }
    EntryType = HMGRTABLE::GetEntryType(v38, v39);
    if ( EntryType != 4 )
    {
      if ( EntryType == 11 )
      {
        if ( v39 >= *(_DWORD *)(v38 + 16) )
          goto LABEL_66;
        v35 = *(_QWORD *)v38;
        v36 = *(unsigned int *)(*(_QWORD *)v38 + 16LL * v39 + 8);
        if ( (_DWORD)v99 != ((*(_DWORD *)(*(_QWORD *)v38 + 16LL * v39 + 8) >> 5) & 3)
          || (v36 & 0x2000) != 0
          || (v36 & 0x1F) == 0 )
        {
          goto LABEL_66;
        }
        v36 &= 0x1Fu;
        if ( (_BYTE)v36 != 11 )
        {
          v42 = WdLogNewEntry5_WdError(v36, v35);
          *(_QWORD *)(v42 + 24) = 316LL;
          WdLogEvent5_WdError(v42);
LABEL_66:
          v43 = WdLogNewEntry5_WdWarning(v36, v35, v37);
          *(_QWORD *)(v43 + 24) = v33;
          *(_QWORD *)(v43 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v43);
LABEL_78:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v105);
          return 3221225485LL;
        }
        v44 = *(_QWORD *)(v35 + 16LL * v39);
        if ( !v44 )
          goto LABEL_66;
        v34 = *(_DWORD *)(v44 + 44);
        goto LABEL_85;
      }
      v57 = EntryType;
      goto LABEL_84;
    }
    Handle = 0LL;
    if ( v39 < *(_DWORD *)(v38 + 16) )
    {
      v45 = *(_QWORD *)v38;
      v46 = *(_DWORD *)(*(_QWORD *)v38 + 16LL * v39 + 8);
      if ( (_DWORD)v99 == ((v46 >> 5) & 3) && (v46 & 0x2000) == 0 && (v46 & 0x1F) != 0 )
      {
        v47 = v46 & 0x1F;
        if ( (_BYTE)v47 == 4 )
        {
          v49 = *(struct _EX_RUNDOWN_REF **)(v45 + 16LL * v39);
          goto LABEL_76;
        }
        v48 = WdLogNewEntry5_WdError(v47, v45);
        *(_QWORD *)(v48 + 24) = 316LL;
        WdLogEvent5_WdError(v48);
      }
    }
    v49 = 0LL;
LABEL_76:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v99, v49);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Handle, &v99);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99, v50);
    if ( !Handle )
    {
      v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v54 + 24) = v33;
      *(_QWORD *)(v54 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v54);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v55);
      goto LABEL_78;
    }
    v34 = *((_DWORD *)Handle + 5);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v51);
    goto LABEL_85;
  }
  return DxgkSendCreateBundleObject(*((unsigned int *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21, a4);
}
