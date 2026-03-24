/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01140D0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0003148 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019830 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_309893433__private_IsEnabledDeviceUsage @ 0x1C00259A0 (Feature_309893433__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C010DD1C (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0114D10 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0114DE0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0117170 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0134070 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0134134 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0171FB0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r12d
  __int64 v9; // r9
  struct DXGRESOURCE *v10; // rsi
  DXGDEVICE *v11; // r15
  __int64 v12; // r13
  BOOL v13; // ebp
  struct DXGALLOCATION *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__int64, __int64, __int64); // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  struct DXGTHREAD *Current; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  struct DXGTERMINATIONTRACKER *v51; // r12
  void *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct DXGALLOCATION *v56; // r9
  __int64 v57; // rbp
  char v58; // r13
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdi
  struct DXGTHREAD *v64; // rax
  __int64 v65; // rsi
  unsigned int v66; // r8d
  __int64 v67; // rax
  __int64 v68; // r9
  int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  char v73; // di
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  struct _KTHREAD **v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rax
  unsigned int v81; // edx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdi
  struct DXGTHREAD *v88; // rax
  __int64 v89; // rbp
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // r9d
  char v93; // bp
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *v97; // rax
  struct _KTHREAD **v98; // rcx
  __int64 v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rbp
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // r9d
  __int64 v108; // [rsp+30h] [rbp-68h]
  struct DXGTERMINATIONTRACKER *v109; // [rsp+38h] [rbp-60h]
  _BYTE v110[88]; // [rsp+40h] [rbp-58h] BYREF
  int v111; // [rsp+A0h] [rbp+8h]
  char v114; // [rsp+C8h] [rbp+30h]

  v108 = 0LL;
  v111 = 0;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v9 = a3;
  v10 = a2;
  v11 = this;
  v12 = 0LL;
  v13 = *((_DWORD *)this + 108) == 2;
  v14 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      this = (DXGDEVICE *)*(unsigned int *)(*((_QWORD *)v14 + 6) + 4LL);
      if ( ((unsigned __int8)this & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v14 + 18) & 0x800) != 0 )
        break;
      if ( ((unsigned __int16)this & 0x800) != 0 )
        break;
      v15 = *((_QWORD *)v11 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 209LL) )
        break;
      a2 = (struct DXGRESOURCE *)*((_QWORD *)v14 + 3);
      if ( !a2 )
        break;
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct DXGRESOURCE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v15 + 640)
                                                                                                 + 8LL)
                                                                                     + 632LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 648LL),
              a2,
              0LL,
              v9);
      if ( !v18 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v19 + 24) = 968LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v108 += v18;
      v111 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL) + 8LL)
                                                        + 648LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 648LL),
                *((_QWORD *)v14 + 3));
      if ( v13
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL)
                                                                         + 8LL)
                                                             + 608LL))(
             *(_QWORD *)(*((_QWORD *)v11 + 2) + 648LL),
             *((_QWORD *)v14 + 3)) )
      {
        v13 = 0;
      }
      v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
      if ( !v14 )
        goto LABEL_16;
    }
    v8 = 0;
LABEL_16:
    LODWORD(v9) = a3;
    v12 = v108;
  }
  if ( (_DWORD)v9 )
  {
    if ( v11 != (DXGDEVICE *)-240LL && *((struct _KTHREAD **)v11 + 31) == KeGetCurrentThread() )
    {
      v20 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v20 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 240, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *((_DWORD *)v11 + 66);
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v24);
      }
      ExAcquirePushLockExclusiveEx((char *)v11 + 240, 0LL);
    }
    *((_QWORD *)v11 + 31) = KeGetCurrentThread();
    if ( v10 == *((struct DXGRESOURCE **)v11 + 7) || *((_QWORD *)v10 + 4) )
    {
      v25 = *((_QWORD *)v10 + 5);
      if ( v25 )
        *(_QWORD *)(v25 + 32) = *((_QWORD *)v10 + 4);
      v26 = *((_QWORD *)v10 + 4);
      if ( v26 )
      {
        *(_QWORD *)(v26 + 40) = *((_QWORD *)v10 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)v11 + 7) != v10 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL, v21);
          *(_QWORD *)(v27 + 24) = 8848LL;
          WdLogEvent5_WdAssertion(v27);
        }
        *((_QWORD *)v11 + 7) = *((_QWORD *)v10 + 5);
      }
    }
    *((_QWORD *)v11 + 31) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v11 + 240, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v9) = a3;
  }
  if ( !v8 || v13 || (!(_DWORD)v9 || !*((_QWORD *)v10 + 3)) && v10 )
    goto LABEL_45;
  v28 = *((_QWORD *)v11 + 2);
  ++*(_DWORD *)(v28 + 1364);
  v109 = (struct DXGTERMINATIONTRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)(v28 + 1344));
  if ( !v109 )
  {
    v29 = *(unsigned int *)(v28 + 1388);
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v28 + 1392);
    v31 = *(unsigned int *)(v28 + 1384);
    v32 = *(unsigned int *)(v28 + 1380);
    ++*(_DWORD *)(v28 + 1368);
    v109 = (struct DXGTERMINATIONTRACKER *)v30(v32, v29, v31);
    if ( !v109 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 4424LL;
      WdLogEvent5_WdLowResource(v37);
      goto LABEL_45;
    }
  }
  v114 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v28 + 1224, 0LL);
  *(_QWORD *)(v28 + 1232) = KeGetCurrentThread();
  v38 = v12 + *(_QWORD *)(v28 + 1208);
  CurrentProcess = PsGetCurrentProcess(v40, v39, v41, v42);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v47 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v46, v45)) == 0LL
    || (v49 = *((_QWORD *)Current + 1)) == 0 )
  {
    v49 = v47;
  }
  if ( (*(_BYTE *)(v49 + 346) || v38 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v49, v45) + 94))
    && v38 >= *(_QWORD *)(v28 + 1208) )
  {
    v114 = 1;
    *(_QWORD *)(v28 + 1208) = v38;
  }
  *(_QWORD *)(v28 + 1232) = 0LL;
  ExReleasePushLockExclusiveEx(v28 + 1224, 0LL);
  KeLeaveCriticalRegion();
  if ( !v114 )
  {
    v50 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v50 + 24) = 4415LL;
    WdLogEvent5_WdEvent(v50);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v28, (struct _SLIST_ENTRY *)v109);
LABEL_45:
    if ( a3 )
      DXGDEVICE::DestroyResource(v11, v10, a5, a6);
    else
      DXGDEVICE::DestroyAllocations(v11, v10, 0, a4, a5, a6);
    return;
  }
  v51 = v109;
  *(_QWORD *)v109 = v10;
  *((_QWORD *)v109 + 1) = a4;
  v52 = *(void **)(*((_QWORD *)v11 + 5) + 56LL);
  *((_QWORD *)v109 + 5) = v108;
  *((_DWORD *)v109 + 8) = v111;
  *((_QWORD *)v109 + 2) = v52;
  *((_QWORD *)v109 + 3) = v11;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v109 + 12) = a6;
  ObfReferenceObject(v52);
  v57 = *(_QWORD *)v109;
  v58 = 0;
  if ( *(_QWORD *)v109 )
  {
    v59 = PsGetCurrentProcess(v54, v53, v55, v56);
    v60 = PsGetProcessDxgProcess(v59);
    v63 = v60;
    if ( v60 && (*(_BYTE *)(v60 + 347) & 0x10) == 0
      || (v64 = DXGTHREAD::GetCurrent(v62, v61)) == 0LL
      || (v65 = *((_QWORD *)v64 + 1)) == 0 )
    {
      v65 = v63;
    }
    if ( (unsigned int)Feature_309893433__private_IsEnabledDeviceUsage() )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v110,
        (struct _KTHREAD **)v65);
      v66 = *(_DWORD *)(v57 + 16);
      v67 = (v66 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v67 < *(_DWORD *)(v65 + 256) )
      {
        v68 = *(_QWORD *)(v65 + 240);
        v69 = *(_DWORD *)(v68 + 16 * v67 + 8);
        if ( ((v66 >> 25) & 0x60) == (*(_BYTE *)(v68 + 16 * v67 + 8) & 0x60) && (v69 & 0x2000) == 0 && (v69 & 0x1F) != 0 )
          *(_DWORD *)(v68 + 16LL * ((v66 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v57);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v65 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v72 = *(_DWORD *)(v65 + 232);
          if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v70, &EventBlockThread, v71, v72);
        }
        ExAcquirePushLockExclusiveEx(v65 + 208, 0LL);
      }
      *(_QWORD *)(v65 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v65 + 240), *(_DWORD *)(v57 + 16));
      DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v57);
      *(_QWORD *)(v65 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v65 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    v73 = 0;
    if ( a5 )
    {
      v74 = *((_QWORD *)a5 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v74 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v74 + 168)) )
      {
        v73 = 1;
        if ( !*((_BYTE *)a5 + 32) )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75);
          v77[5] = (char *)a5 + 8;
          v77[3] = 275LL;
          v77[4] = 4LL;
          v77[6] = 0LL;
          v77[7] = 0LL;
          WdLogEvent5_WdCriticalError(v77);
        }
        v78 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
        *((_BYTE *)a5 + 32) = 0;
        if ( KeGetCurrentThread() != v78[23] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v78, *((char **)a5 + 5));
        *((_QWORD *)a5 + 5) = 0LL;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        v51 = v109;
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v57 + 72));
    if ( v73 )
    {
      if ( *((_BYTE *)a5 + 144) )
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8), 0LL);
    }
    if ( (unsigned int)Feature_309893433__private_IsEnabledDeviceUsage() )
      DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v65, *(_DWORD *)(v57 + 16));
  }
  v79 = *((_QWORD *)v51 + 1);
  if ( v79 )
  {
    do
    {
      v80 = *(_QWORD *)(v79 + 48);
      v81 = *(_DWORD *)(v80 + 4);
      if ( (v81 & 0x2000) != 0 && *(_QWORD *)(v79 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v11, (v81 >> 6) & 0xF, (struct DXGALLOCATION *)v79);
        v80 = *(_QWORD *)(v79 + 48);
      }
      v82 = *(unsigned int *)(v80 + 4);
      if ( (v82 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)v11,
          ((unsigned int)v82 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v79,
          v56);
      v83 = PsGetCurrentProcess(v54, v82, v55, v56);
      v84 = PsGetProcessDxgProcess(v83);
      v87 = v84;
      if ( v84 && (*(_BYTE *)(v84 + 347) & 0x10) == 0
        || (v88 = DXGTHREAD::GetCurrent(v86, v85)) == 0LL
        || (v89 = *((_QWORD *)v88 + 1)) == 0 )
      {
        v89 = v87;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v89 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v92 = *(_DWORD *)(v89 + 232);
          if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v90, &EventBlockThread, v91, v92);
        }
        ExAcquirePushLockExclusiveEx(v89 + 208, 0LL);
      }
      *(_QWORD *)(v89 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v89 + 240), *(_DWORD *)(v79 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v79);
      *(_QWORD *)(v89 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v89 + 208, 0LL);
      KeLeaveCriticalRegion();
      v93 = 0;
      if ( a5 )
      {
        v94 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v94 + 184)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v94 + 168)) )
        {
          v93 = 1;
          if ( !*((_BYTE *)a5 + 32) )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v96, v95);
            v97[3] = 275LL;
            v97[4] = 4LL;
            v97[5] = (char *)a5 + 8;
            v97[6] = 0LL;
            v97[7] = 0LL;
            WdLogEvent5_WdCriticalError(v97);
          }
          v98 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v98[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v98, *((char **)a5 + 5));
          *((_QWORD *)a5 + 5) = 0LL;
          if ( *((_BYTE *)a5 + 144) )
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v79 + 88));
      if ( v93 )
      {
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
        if ( *((_BYTE *)a5 + 32) )
        {
          v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v99);
          v100[3] = 275LL;
          v100[4] = 4LL;
          v100[5] = (char *)a5 + 8;
          v100[6] = 0LL;
          v100[7] = 0LL;
          WdLogEvent5_WdCriticalError(v100);
        }
        v54 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v54 + 184) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v54 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v101, &EventBlockThread, v102, 72);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
        }
        *((_QWORD *)a5 + 5) = 0LL;
        *((_BYTE *)a5 + 32) = 1;
      }
      v103 = *(_QWORD *)(v79 + 64);
      if ( *(_QWORD *)(v79 + 24) )
      {
        if ( !v58 )
        {
          v58 = 1;
          if ( v11 != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)v11 + 23) == KeGetCurrentThread() )
          {
            v104 = WdLogNewEntry5_WdAssertion(v54, v99);
            *(_QWORD *)(v104 + 24) = 1571LL;
            WdLogEvent5_WdAssertion(v104);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 176, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v107 = *((_DWORD *)v11 + 50);
              if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v105, &EventBlockThread, v106, v107);
            }
            ExAcquirePushLockExclusiveEx((char *)v11 + 176, 0LL);
          }
          *((_QWORD *)v11 + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)v11 + 468) == 1 )
            KeClearEvent(*((PRKEVENT *)v11 + 235));
          *((_QWORD *)v11 + 23) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v11 + 176, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL) + 8LL)
                                                                                               + 152LL))(
          *(_QWORD *)(*((_QWORD *)v11 + 2) + 648LL),
          *(_QWORD *)(v79 + 24),
          (*(_DWORD *)(*(_QWORD *)(v79 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v51);
      }
      v79 = v103;
    }
    while ( v103 );
  }
}
