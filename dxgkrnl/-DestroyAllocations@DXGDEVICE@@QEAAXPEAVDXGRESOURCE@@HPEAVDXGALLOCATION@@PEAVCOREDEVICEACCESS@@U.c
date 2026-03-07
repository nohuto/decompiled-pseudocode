void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v7; // rax
  struct DXGALLOCATION *v8; // r14
  struct DXGRESOURCE *v10; // r12
  __int64 v11; // rcx
  struct DXGRESOURCE *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  struct DXGALLOCATION *v18; // rsi
  struct DXGALLOCATION *v19; // r12
  COREDEVICEACCESS *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  struct DXGALLOCATION *v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // edx
  __int64 v28; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v31; // r15
  struct DXGPROCESS *v32; // rdi
  char *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // r8
  HMGRTABLE *v36; // rcx
  struct DXGALLOCATION *v37; // rdi
  char v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  void *v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGPROCESS *v50; // r15
  struct DXGPROCESS *v51; // rdi
  char *v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  KIRQL CurrentIrql; // al
  __int64 v56; // r12
  struct DXGTHREAD *v57; // rdi
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  COREDEVICEACCESS *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  void *v67; // rcx
  char v68; // r15
  struct DXGALLOCATION *v69; // rbx
  struct DXGALLOCATION *v70; // r12
  struct DXGALLOCATION *v71; // rdi
  struct DXGRESOURCE *v72; // r14
  struct DXGALLOCATION *v73; // rsi
  __int64 v74; // rdi
  void *v75; // rcx
  DXGADAPTERALLOCATION *v76; // rbx
  int v77; // ebx
  struct DXGALLOCATION *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned int j; // r8d
  volatile signed __int32 *v89; // rcx
  unsigned int v90; // r8d
  __int64 v91; // rax
  unsigned int v92; // r15d
  unsigned int v93; // edi
  struct DXGPROCESS *Current; // rax
  unsigned int v95; // edi
  struct DXGPROCESS *v96; // rax
  DXGOVERLAY *i; // rdi
  __int64 v98; // rax
  char *v99; // rdx
  struct DXGTHREAD *v100; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  int v103; // r9d
  struct DXGTHREAD *v104; // rax
  struct _ETHREAD *v105; // rbx
  KSPIN_LOCK *v106; // rax
  int v107; // r9d
  KIRQL v108; // al
  DXGADAPTER *v109; // rcx
  int v110; // [rsp+40h] [rbp-140h]
  int v111; // [rsp+48h] [rbp-138h]
  int v112; // [rsp+50h] [rbp-130h]
  int v113; // [rsp+60h] [rbp-120h]
  int v114; // [rsp+68h] [rbp-118h]
  int v115; // [rsp+70h] [rbp-110h]
  int v116; // [rsp+78h] [rbp-108h]
  int v117; // [rsp+88h] [rbp-F8h]
  int v118; // [rsp+E0h] [rbp-A0h]
  int v119; // [rsp+E8h] [rbp-98h]
  unsigned __int8 v120; // [rsp+100h] [rbp-80h]
  struct DXGALLOCATION *v121; // [rsp+108h] [rbp-78h] BYREF
  void *v122; // [rsp+110h] [rbp-70h]
  int v123; // [rsp+118h] [rbp-68h]
  int v124; // [rsp+11Ch] [rbp-64h]
  struct DXGRESOURCE *v125; // [rsp+120h] [rbp-60h]
  void **v126; // [rsp+128h] [rbp-58h]
  COREDEVICEACCESS *v127; // [rsp+130h] [rbp-50h]
  unsigned int v128; // [rsp+138h] [rbp-48h] BYREF
  __int128 v129; // [rsp+140h] [rbp-40h] BYREF
  PVOID Object; // [rsp+150h] [rbp-30h] BYREF
  struct DXGTHREAD *DxgThread; // [rsp+158h] [rbp-28h] BYREF
  _DXGKARG_DESTROYALLOCATION v132; // [rsp+160h] [rbp-20h] BYREF
  struct DXGALLOCATION *v133; // [rsp+180h] [rbp+0h]
  int v134; // [rsp+188h] [rbp+8h] BYREF
  __int64 v135; // [rsp+190h] [rbp+10h]
  char v136; // [rsp+198h] [rbp+18h]
  _BYTE v137[16]; // [rsp+1A0h] [rbp+20h] BYREF
  _BYTE v138[16]; // [rsp+1B0h] [rbp+30h] BYREF
  char v139[8]; // [rsp+1C0h] [rbp+40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C8h] [rbp+48h] BYREF
  _BYTE v141[128]; // [rsp+200h] [rbp+80h] BYREF

  v127 = a5;
  v7 = *((_QWORD *)this + 2);
  v8 = a4;
  v133 = a4;
  v123 = a3;
  v10 = a2;
  v125 = a2;
  v11 = *(_QWORD *)(v7 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry1(1LL, 1295LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1295LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = 0LL;
  if ( a3 )
    v12 = v10;
  memset(v141, 0, sizeof(v141));
  if ( !v12 || (v126 = (void **)*((_QWORD *)v12 + 8)) == 0LL )
    v126 = (void **)v141;
  v129 = 0LL;
  if ( v10 && a3 )
  {
    v81 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v81 + 24) = v10;
    v14 = *((_QWORD *)v10 + 1);
    v13 = *(_QWORD *)(v14 + 40);
    *(_QWORD *)(v81 + 32) = v13;
  }
  LOBYTE(v13) = 0;
  v120 = 0;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v17 + 209) )
  {
    if ( a3 )
    {
      if ( v10 )
      {
        v92 = *((_DWORD *)v10 + 5);
        if ( v92 )
        {
          v93 = *((_DWORD *)this + 118);
          Current = DXGPROCESS::GetCurrent();
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4472),
            *((_DWORD *)Current + 126),
            v93,
            v92,
            0,
            0LL,
            a6);
          LOBYTE(v13) = 1;
          *((_DWORD *)v10 + 5) = 0;
          v120 = 1;
        }
      }
    }
  }
  v121 = v8;
  v18 = v8;
  if ( v8 )
  {
    v19 = v8;
    v14 = (__int64)v8;
    v20 = v127;
    while ( 1 )
    {
      v19 = (struct DXGALLOCATION *)*((_QWORD *)v19 + 8);
      v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v21 + 209) )
      {
        if ( !(_BYTE)v13 && (*(_BYTE *)(v14 + 128) & 4) != 0 )
        {
          v95 = *((_DWORD *)this + 118);
          v96 = DXGPROCESS::GetCurrent();
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v21 + 4472),
            *((_DWORD *)v96 + 126),
            v95,
            0,
            1u,
            &v121,
            a6);
        }
        *((_BYTE *)v18 + 128) &= ~4u;
      }
      v22 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      *(_QWORD *)(v22 + 24) = v18;
      *(_QWORD *)(v22 + 32) = *(_QWORD *)(*((_QWORD *)v18 + 1) + 40LL);
      v24 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v24 & 1) != 0 )
      {
        v90 = *((_DWORD *)this + 472);
        if ( v90 || (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 0x100) == 0 )
        {
          if ( ((v24 >> 6) & 0xF) >= v90 )
          {
            WdLogSingleEntry1(1LL, 1391LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < this->GetNumVidPnSources()",
              1391LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGDEVICE::RemovePrimaryAllocation(this, v18);
        }
      }
      v25 = *(unsigned int *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v25 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v137, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v137);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 64); i != (DXGDEVICE *)((char *)this + 512) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v18 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v137);
        if ( v137[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v137);
      }
      v26 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v26 & 0x2000) != 0 && *((_QWORD *)v18 + 3) )
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v26 >> 6) & 0xF, v18);
      v27 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v27 & 0x200A) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v27 >> 6) & 0xF, v18, v23);
      v28 = *((_QWORD *)v18 + 3);
      if ( v28 && (*((_DWORD *)v18 + 18) & 0x800) != 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) & 0x2000) != 0 )
        {
          v98 = *((_QWORD *)this + 2);
          v128 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v98 + 760)
                                                                                              + 8LL)
                                                                                  + 688LL))(
                 *(_QWORD *)(v98 + 768),
                 v28,
                 &v128) )
          {
            if ( v128 <= 1 && v20 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)v20 + 3)) )
            {
              COREDEVICEACCESS::Release(v20);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 696LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                *((_QWORD *)v18 + 3),
                (*(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) >> 6) & 0xF);
              COREDEVICEACCESS::AcquireSharedUncheck(v20, v99);
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)v18 + 3));
        *((_DWORD *)v18 + 18) &= ~0x800u;
      }
      CurrentProcess = PsGetCurrentProcess(v25);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v31 = (struct DXGPROCESS *)ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
        goto LABEL_22;
      v100 = DXGTHREAD::GetCurrent();
      if ( v100 )
      {
        v32 = (struct DXGPROCESS *)*((_QWORD *)v100 + 3);
        if ( !v32 )
          goto LABEL_22;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v32 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
        if ( !v32 )
        {
          WdLogSingleEntry1(2LL, 2923LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find DXGPROCESS",
            2923LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_22:
          v32 = v31;
        }
      }
      v33 = (char *)v32 + 248;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v32 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v103 = *((_DWORD *)v32 + 68);
          if ( v103 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, v103);
        }
        ExAcquirePushLockExclusiveEx((char *)v32 + 248, 0LL);
      }
      v36 = (struct DXGPROCESS *)((char *)v32 + 280);
      v37 = v121;
      *((_QWORD *)v33 + 1) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle(v36, *((_DWORD *)v37 + 4));
      DxgkUnreferenceDxgAllocation(v37);
      *((_QWORD *)v33 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v33, 0LL);
      KeLeaveCriticalRegion();
      v38 = 0;
      if ( v20 )
      {
        v79 = *((_QWORD *)v20 + 3);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v79 + 184) )
        {
          v37 = v121;
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v121 + 11);
          goto LABEL_26;
        }
        if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v79 + 168)) )
        {
          v38 = 1;
          COREACCESS::Release((COREDEVICEACCESS *)((char *)v20 + 8));
          if ( *((_BYTE *)v20 + 144) )
          {
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v20 + 72));
            v37 = v121;
            ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v121 + 11);
LABEL_99:
            if ( *((_BYTE *)v20 + 144) )
              COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v20 + 72), 0LL);
            COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v20 + 8), 0LL);
            goto LABEL_26;
          }
        }
        v37 = v121;
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v37 + 11);
      if ( v38 )
        goto LABEL_99;
LABEL_26:
      v39 = *((_QWORD *)v18 + 3);
      if ( v39 )
      {
        v40 = *((_QWORD *)this + 2);
        Object = 0LL;
        v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v40 + 760) + 8LL)
                                                                          + 160LL))(
                *(_QWORD *)(v40 + 768),
                v39,
                &Object,
                a6.Value);
        if ( v41 < 0 )
        {
          if ( v41 != -1071775486 )
          {
            WdLogSingleEntry1(1LL, 1504LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"ntStatus == STATUS_GRAPHICS_ALLOCATION_BUSY",
              1504LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v44 = WdLogNewEntry5_WdTrace(v43, v42, v15, v16);
          *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 99);
          *(_QWORD *)(v44 + 32) = *((_QWORD *)v18 + 3);
          if ( v20 )
          {
            v80 = *((_QWORD *)v20 + 3);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v80 + 184)
              && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v80 + 168)) )
            {
              COREACCESS::Release((COREDEVICEACCESS *)((char *)v20 + 8));
              if ( *((_BYTE *)v20 + 144) )
                COREACCESS::Release((COREDEVICEACCESS *)((char *)v20 + 72));
              if ( Object )
              {
                if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
                {
                  DXGDEVICE::FlushScheduler(this, 3LL, 4294967293LL);
                  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 608LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  *((_QWORD *)v18 + 3),
                  0LL,
                  4LL);
              }
              if ( *((_BYTE *)v20 + 144) )
                COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v20 + 72), 0LL);
              COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v20 + 8), 0LL);
            }
            v37 = v121;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 152LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *((_QWORD *)v18 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v18 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(this, v37);
      }
      v45 = (void *)*((_QWORD *)v37 + 4);
      if ( v45 )
      {
        v126[(unsigned int)v129] = v45;
        LODWORD(v129) = v129 + 1;
        *((_QWORD *)v37 + 4) = 0LL;
      }
      v13 = v120;
      v121 = v19;
      v18 = v19;
      v14 = (__int64)v19;
      if ( !v19 )
      {
        v8 = v133;
        v10 = v125;
        break;
      }
    }
  }
  if ( (_DWORD)v129 )
  {
    v46 = *((_QWORD *)this + 2);
    *((_QWORD *)&v129 + 1) = v126;
    v127 = (COREDEVICEACCESS *)*((_QWORD *)this + 77);
    v134 = -1;
    v135 = 0LL;
    if ( (qword_1C013A870 & 2) != 0 )
    {
      v136 = 1;
      v134 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerEnter, v15, 5029);
    }
    else
    {
      v136 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v134, 5029);
    v48 = PsGetCurrentProcess(v47);
    v49 = PsGetProcessDxgProcess(v48);
    v50 = (struct DXGPROCESS *)v49;
    if ( !v49 || (*(_DWORD *)(v49 + 424) & 0x80) != 0 )
    {
      v104 = DXGTHREAD::GetCurrent();
      if ( v104 )
      {
        v51 = (struct DXGPROCESS *)*((_QWORD *)v104 + 3);
        if ( v51 )
          goto LABEL_43;
      }
      else
      {
        v105 = KeGetCurrentThread();
        v106 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v51 = DXGGLOBAL::SearchDxgThreadList(v106, v105);
        if ( v51 )
          goto LABEL_43;
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v51 = v50;
    if ( !v50 )
    {
      v52 = 0LL;
      LODWORD(v122) = 0;
LABEL_49:
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v46 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 16) + 4612LL));
      CurrentIrql = KeGetCurrentIrql();
      v56 = CurrentIrql;
      v57 = 0LL;
      if ( CurrentIrql < 2u
        && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
        && ((v57 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v57 = DxgThread) != 0LL)) )
      {
        v124 = *((_DWORD *)v57 + 12);
      }
      else
      {
        v124 = 0;
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v139,
        *(struct DXGADAPTER **)(v46 + 16));
      v58 = (*(int (__fastcall **)(COREDEVICEACCESS *, __int128 *))(*(_QWORD *)(v46 + 16) + 720LL))(v127, &v129);
      if ( v139[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v56 != KeGetCurrentIrql() )
      {
        v108 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, v46, v56, v108);
      }
      if ( v57 )
      {
        v60 = *((int *)v57 + 12);
        if ( (_DWORD)v60 != v124 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v57 + 12), v124, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 16) + 4612LL));
      v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v60, v59, v61, v62);
      v64 = v127;
      v63[3] = v58;
      v63[4] = v64;
      v63[5] = (unsigned int)v129;
      v63[6] = **((_QWORD **)&v129 + 1);
      if ( (_DWORD)v58 )
      {
        WdLogSingleEntry1(2LL, v58);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v58,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v46 + 16));
      if ( (_DWORD)v122 == 2 )
      {
        *((_QWORD *)v52 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v52, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v134);
      if ( v136 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v134);
      v10 = v125;
      goto LABEL_66;
    }
LABEL_43:
    v52 = (char *)v51 + 152;
    LODWORD(v122) = 0;
    if ( v51 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v51 + 20) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v51 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v51 + 152, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v107 = *((_DWORD *)v51 + 44);
          if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v53, (const EVENT_DESCRIPTOR *)"g", v54, v107);
        }
        ExAcquirePushLockExclusiveEx((char *)v51 + 152, 0LL);
      }
      *((_QWORD *)v51 + 20) = KeGetCurrentThread();
      LODWORD(v122) = 2;
    }
    goto LABEL_49;
  }
LABEL_66:
  v67 = 0LL;
  v68 = 1;
  v122 = 0LL;
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 1) & 1) != 0 )
    {
      v82 = *((_QWORD *)v10 + 7);
      if ( v82 )
      {
        v83 = *(_QWORD *)(v82 + 152);
        if ( v83 )
        {
          if ( *(DXGDEVICE **)(v83 + 80) == this && (*(_DWORD *)(v83 + 72))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v138,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v10 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 7) + 152LL) + 80LL) = 0LL;
            if ( v138[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138);
          }
        }
        v85 = *((_QWORD *)v10 + 7);
        v86 = *(_QWORD *)(v85 + 136);
        if ( (*(_DWORD *)(v86 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v85 + 132) != 1 )
          {
            v109 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
            if ( *((_DWORD *)v109 + 72) <= 1u || !DXGADAPTER::IsDxgmms2(v109) )
            {
              WdLogSingleEntry1(1LL, 1624LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhysicalAdapterC"
                          "ount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                1624LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          if ( ((*(_DWORD *)(v86 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 472)
            && (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 0x100) == 0 )
          {
            WdLogSingleEntry1(1LL, 1625LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAdapterAlloc->m_VidPnSourceId < this->GetNumVidPnSources() || GetProcess()->IsVmProcess()",
              1625LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v91 = (*(_DWORD *)(v86 - 44) >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v91 + 83) == v10 )
            *((_QWORD *)this + v91 + 83) = 0LL;
        }
        v87 = *((_QWORD *)v10 + 3);
        for ( j = 0; v87; ++j )
          v87 = *(_QWORD *)(v87 + 64);
        v89 = (volatile signed __int32 *)*((_QWORD *)v10 + 7);
        if ( _InterlockedExchangeAdd(v89 + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v89, v126, j);
        v67 = v122;
        *((_QWORD *)v10 + 7) = 0LL;
      }
      v68 = 0;
    }
    else
    {
      v67 = (void *)*((_QWORD *)v10 + 7);
      v122 = v67;
    }
  }
  v69 = v8;
  memset(&v132, 0, sizeof(v132));
  if ( v8 )
  {
    v70 = v8;
    v71 = v8;
    v72 = v125;
    while ( 1 )
    {
      v73 = (struct DXGALLOCATION *)*((_QWORD *)v70 + 8);
      v70 = v73;
      if ( (*((_DWORD *)v71 + 18) & 0x800) != 0 )
      {
        WdLogSingleEntry1(1LL, 1677LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
          1677LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*((_DWORD *)v71 + 18) & 0x7FE) != 0 )
      {
        WdLogSingleEntry1(1LL, 1678LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
          1678LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v74 = *((_QWORD *)v69 + 6);
      if ( v74 )
      {
        if ( !v68 )
          goto LABEL_133;
        if ( (*((_BYTE *)this + 1901) & 1) != 0 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
              *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
              &EventDestroyAdapterAllocation,
              *(_QWORD *)(v74 + 112),
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
              (char)this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              0,
              *(_QWORD *)(v74 + 112),
              v110,
              v111,
              v112,
              0,
              v113,
              v114,
              v115,
              v116,
              v74,
              v117,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              v118,
              v119,
              (*(_DWORD *)(v74 + 4) >> 21) & 0x3F,
              0);
        }
        else if ( *(_QWORD *)(v74 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 120LL))(
            *((_QWORD *)this + 99),
            0LL);
          *(_QWORD *)(v74 + 8) = 0LL;
        }
        v75 = *(void **)(*((_QWORD *)v69 + 6) + 16LL);
        if ( v75 )
        {
          v126[v132.NumAllocations++] = v75;
          *(_QWORD *)(*((_QWORD *)v69 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v68 )
      {
LABEL_133:
        if ( !v72 )
        {
          WdLogSingleEntry1(1LL, 1700LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 1700LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)v72 + 1) & 1) == 0 )
        {
          WdLogSingleEntry1(1LL, 1701LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            1701LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v123 )
        {
          WdLogSingleEntry1(1LL, 1702LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bDestroyResource", 1702LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v76 = (DXGADAPTERALLOCATION *)*((_QWORD *)v69 + 6);
      if ( (!v72 || (*((_DWORD *)v72 + 1) & 1) == 0) && v76 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v76);
        operator delete(v76);
      }
      v69 = v73;
      v71 = v73;
      if ( !v73 )
      {
        v8 = v133;
        v67 = v122;
        v10 = v125;
        break;
      }
    }
  }
  if ( v68 )
  {
    v77 = v123;
    v132.Flags.Value = 0;
    if ( v10 )
      v132.Flags.Value = v123 != 0;
    v132.hResource = v67;
    if ( v132.NumAllocations )
    {
      v132.pAllocationList = v126;
    }
    else
    {
      v132.pAllocationList = 0LL;
      if ( !v123 || !v67 )
        goto LABEL_91;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v132, 0);
    if ( v10 && !v77 )
    {
      if ( (*((_DWORD *)v10 + 1) & 1) != 0 )
      {
        WdLogSingleEntry1(1LL, 1750LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!(pResource->m_SharedResource)",
          1750LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)v10 + 7) = v132.hResource;
    }
  }
LABEL_91:
  if ( v8 )
  {
    v78 = v8;
    do
    {
      v78 = (struct DXGALLOCATION *)*((_QWORD *)v78 + 8);
      DXGALLOCATION::~DXGALLOCATION(v8);
      ExFreePoolWithTag(v8, 0);
      v8 = v78;
    }
    while ( v78 );
  }
}
