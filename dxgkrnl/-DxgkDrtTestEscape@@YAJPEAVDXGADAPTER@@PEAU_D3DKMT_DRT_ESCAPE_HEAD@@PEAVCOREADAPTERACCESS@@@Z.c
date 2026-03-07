__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **this)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int StandardAllocation; // esi
  int v9; // esi
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  char IsDrtEnabled; // al
  int v13; // edx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  char *v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  char *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // r8
  struct DXGPROCESS *v26; // rax
  struct DXGPROCESS *v27; // rdi
  __int64 v28; // rdi
  const wchar_t *v29; // r9
  char *v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct DXGPROCESS *v36; // rax
  struct CCD_BTL *v37; // rax
  struct _KTHREAD **v38; // rax
  ADAPTER_RENDER **v39; // rcx
  void *v40; // rcx
  NTSTATUS v41; // eax
  __int64 v42; // rdi
  struct _KTHREAD **v43; // rax
  __int64 v44; // r12
  struct DXGDEVICE *v45; // r15
  __int64 v46; // r9
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v48; // rdi
  _QWORD *v49; // r8
  struct _KTHREAD **v50; // rax
  struct DXGDEVICE *v51; // rax
  struct _KTHREAD **v52; // rax
  struct _KTHREAD **v53; // r15
  struct DXGDEVICE *v54; // r13
  __int64 v55; // rdi
  __int64 v56; // r12
  unsigned int v57; // esi
  unsigned int v58; // edi
  unsigned int HostProcess; // eax
  __int64 v60; // r9
  int v61; // ecx
  unsigned int v62; // r8d
  struct _EX_RUNDOWN_REF **v63; // rax
  _QWORD *v64; // r8
  __int64 v65; // rax
  struct _EX_RUNDOWN_REF **v66; // rcx
  struct _EX_RUNDOWN_REF **v67; // rax
  struct _EX_RUNDOWN_REF *v68; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  unsigned int v70; // r8d
  int v71; // edx
  int v72; // ecx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v74; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v75; // rdi
  struct DXGPROCESS *v76; // rax
  void *v77; // rdi
  unsigned int v78; // eax
  int IsTargetInClientVidPnTopology; // edi
  unsigned int v80; // ebx
  PVOID v81; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v83; // rax
  NTSTATUS Status; // eax
  __int64 v85; // rdx
  int v86; // edi
  struct DXGPROCESS *v87; // rax
  __int64 v88; // r13
  struct DXGDEVICE *v89; // rdi
  __int64 v90; // r9
  UINT v91; // r12d
  __int64 v92; // rdi
  const wchar_t *v93; // r9
  UINT v94; // edi
  unsigned int v95; // edi
  struct _D3DDDI_ALLOCATIONLIST *v96; // r15
  _QWORD *v97; // rax
  _QWORD *v98; // r10
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v100; // rdi
  struct DXGDEVICE *Elements; // rax
  struct _DEVICE_OBJECT **HeadIterator; // rax
  DXGCONTEXT *v103; // r10
  struct _DEVICE_OBJECT *v104; // rdx
  __int64 v105; // r8
  __int64 v106; // rcx
  struct DXGDEVICE *v107; // rdx
  unsigned int v108; // edx
  unsigned int MonitorHash; // eax
  int v110; // eax
  unsigned int v111; // eax
  RAPID_HPD_MANAGER *v112; // rdi
  __int64 v113; // rcx
  int v114; // edx
  __int64 v115; // rcx
  __int64 v116; // r8
  int v117; // ecx
  unsigned int v118; // [rsp+50h] [rbp-8F8h]
  unsigned __int8 v119[4]; // [rsp+54h] [rbp-8F4h] BYREF
  struct _EX_RUNDOWN_REF *v120; // [rsp+58h] [rbp-8F0h] BYREF
  __int64 v121; // [rsp+60h] [rbp-8E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-8E0h] BYREF
  PVOID v123; // [rsp+78h] [rbp-8D0h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-8C8h] BYREF
  unsigned int v125; // [rsp+98h] [rbp-8B0h] BYREF
  __int64 v126; // [rsp+A0h] [rbp-8A8h] BYREF
  struct _EX_RUNDOWN_REF *v127; // [rsp+A8h] [rbp-8A0h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+B0h] [rbp-898h] BYREF
  struct DXGDEVICE *v129; // [rsp+C0h] [rbp-888h] BYREF
  _QWORD v130[2]; // [rsp+C8h] [rbp-880h] BYREF
  int v131; // [rsp+D8h] [rbp-870h]
  struct DXGDEVICE *v132; // [rsp+E0h] [rbp-868h] BYREF
  DXGDEVICE *v133; // [rsp+E8h] [rbp-860h] BYREF
  _BYTE v134[8]; // [rsp+F0h] [rbp-858h] BYREF
  struct DXGADAPTER *v135; // [rsp+F8h] [rbp-850h]
  char v136; // [rsp+100h] [rbp-848h]
  int v137; // [rsp+108h] [rbp-840h]
  struct DXGDEVICE *v138; // [rsp+110h] [rbp-838h] BYREF
  __int64 v139; // [rsp+118h] [rbp-830h] BYREF
  _BYTE v140[8]; // [rsp+120h] [rbp-828h] BYREF
  __int64 v141; // [rsp+128h] [rbp-820h]
  char v142; // [rsp+130h] [rbp-818h]
  int v143; // [rsp+138h] [rbp-810h] BYREF
  struct DXGDEVICE *v144; // [rsp+140h] [rbp-808h] BYREF
  struct _EX_RUNDOWN_REF *v145; // [rsp+148h] [rbp-800h] BYREF
  struct _EX_RUNDOWN_REF *v146; // [rsp+150h] [rbp-7F8h] BYREF
  struct _EX_RUNDOWN_REF *v147; // [rsp+158h] [rbp-7F0h] BYREF
  PVOID Object; // [rsp+160h] [rbp-7E8h] BYREF
  struct DXGDEVICE *v149; // [rsp+168h] [rbp-7E0h] BYREF
  struct DXGDEVICE *v150; // [rsp+170h] [rbp-7D8h] BYREF
  _QWORD v151[2]; // [rsp+178h] [rbp-7D0h] BYREF
  _BYTE v152[8]; // [rsp+188h] [rbp-7C0h] BYREF
  __int64 v153; // [rsp+190h] [rbp-7B8h]
  char v154; // [rsp+198h] [rbp-7B0h]
  __int64 v155; // [rsp+1A0h] [rbp-7A8h] BYREF
  struct _EX_RUNDOWN_REF *v156; // [rsp+1A8h] [rbp-7A0h] BYREF
  struct _EX_RUNDOWN_REF *v157; // [rsp+1B0h] [rbp-798h] BYREF
  struct _EX_RUNDOWN_REF *v158; // [rsp+1B8h] [rbp-790h] BYREF
  _QWORD v159[2]; // [rsp+1C0h] [rbp-788h] BYREF
  _BYTE v160[16]; // [rsp+1D0h] [rbp-778h] BYREF
  __int128 v161; // [rsp+1E0h] [rbp-768h] BYREF
  unsigned __int8 v162[16]; // [rsp+1F0h] [rbp-758h] BYREF
  __int128 v163; // [rsp+200h] [rbp-748h]
  __int128 v164; // [rsp+210h] [rbp-738h]
  __int128 v165; // [rsp+220h] [rbp-728h]
  __int128 v166; // [rsp+230h] [rbp-718h]
  __int128 v167; // [rsp+240h] [rbp-708h]
  PVOID P; // [rsp+250h] [rbp-6F8h] BYREF
  _BYTE v169[256]; // [rsp+258h] [rbp-6F0h] BYREF
  int v170; // [rsp+358h] [rbp-5F0h]
  _QWORD v171[10]; // [rsp+360h] [rbp-5E8h] BYREF
  _QWORD v172[54]; // [rsp+3B0h] [rbp-598h] BYREF
  _D3DKMT_RENDER v173; // [rsp+560h] [rbp-3E8h] BYREF
  __int64 v174[10]; // [rsp+6D0h] [rbp-278h] BYREF
  _BYTE v175[160]; // [rsp+720h] [rbp-228h] BYREF
  _BYTE v176[160]; // [rsp+7C0h] [rbp-188h] BYREF
  _BYTE v177[160]; // [rsp+860h] [rbp-E8h] BYREF

  memset(v174, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v174[1]);
  v174[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v174[3]) = 45;
  LOBYTE(v174[6]) = -1;
  v7 = 0LL;
  StandardAllocation = 0;
  v118 = 0;
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 1) >= 0x10u )
    {
      v9 = *((_DWORD *)a2 + 3);
      Current = DXGPROCESS::GetCurrent(v6);
      if ( Current )
      {
        if ( !v9 || (IsDrtEnabled = DxgkpIsDrtEnabled(v10), v13 = 4096, !IsDrtEnabled) )
          v13 = 0;
        *((_DWORD *)Current + 106) = v13 | *((_DWORD *)Current + 106) & 0xFFFFEFFF;
      }
      return 0;
    }
    WdLogSingleEntry1(3LL, *((unsigned int *)a2 + 1));
    return (unsigned int)-1073741789;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled(v6) )
  {
    WdLogSingleEntry1(3LL, 1686LL);
    return (unsigned int)-1073741811;
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v6) + 106) & 0x100) != 0 )
  {
    v14 = *((int *)a2 + 2);
    if ( (unsigned int)v14 > 0x31 || (v15 = 0x2000020010000LL, !_bittest64(&v15, v14)) )
    {
      WdLogSingleEntry1(4LL, 277LL);
      return -1073741811LL;
    }
  }
  v17 = *((int *)a2 + 2);
  if ( (int)v17 <= 24 )
  {
    if ( (_DWORD)v17 == 24 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return StandardAllocation;
      }
    }
    else
    {
      if ( (int)v17 <= 14 )
      {
        switch ( (_DWORD)v17 )
        {
          case 0xE:
            if ( *((_DWORD *)a2 + 1) < 0x14u )
            {
              WdLogSingleEntry1(3LL, 1024LL);
              return (unsigned int)-1073741811;
            }
            v34 = *((_QWORD *)a1 + 27);
            if ( !v34 )
              return (unsigned int)-1073741823;
            return (unsigned int)DxgkHandleThermalCoolingDrtEscape(v34, a2);
          case 1:
            return (unsigned int)MonitorDRTTest(a1, a2, (__int64)v174);
          case 2:
            return (unsigned int)-1073741637;
          case 3:
            if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            StandardAllocation = COREADAPTERACCESS::AcquireExclusive((__int64)this, 1LL);
            if ( (StandardAllocation & 0x80000000) == 0 )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            return StandardAllocation;
          case 4:
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              if ( (unsigned int)(*((_DWORD *)a2 + 3) - 1) <= 0x3FF )
              {
                g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                return StandardAllocation;
              }
              WdLogSingleEntry1(3LL, 362LL);
            }
            else
            {
              WdLogSingleEntry1(3LL, 353LL);
            }
            return (unsigned int)-1073741811;
          case 5:
            if ( *((_DWORD *)a2 + 1) >= 0x14u )
            {
              g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
              return StandardAllocation;
            }
            WdLogSingleEntry1(3LL, 376LL);
            return (unsigned int)-1073741811;
          case 6:
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              WdLogSingleEntry1(3LL, 450LL);
              return (unsigned int)-1073741811;
            }
            v26 = DXGPROCESS::GetCurrent((unsigned int)(v17 - 6));
            v27 = v26;
            if ( !v26 )
            {
              v28 = 458LL;
              WdLogSingleEntry1(2LL, 458LL);
LABEL_49:
              v29 = L"Cannot get the current DXGPROCESS";
LABEL_50:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, v28, 0LL, 0LL, 0LL, 0LL);
              return (unsigned int)-1073741811;
            }
            v30 = (char *)v26 + 216;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v30, 0LL);
            *((_QWORD *)v30 + 1) = KeGetCurrentThread();
            v133 = 0LL;
            v31 = *((_DWORD *)a2 + 3);
            if ( v31 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v138, v31, (struct _KTHREAD **)v27, &v133);
              if ( !v133 )
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"The device handle is invalid: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                StandardAllocation = -1073741811;
                if ( v138 )
                {
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v138 + 2), v138);
                  StandardAllocation = -1073741811;
                }
                goto LABEL_57;
              }
              if ( v138 && _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v138 + 2), v138);
            }
            if ( !v133 )
            {
              v133 = (DXGDEVICE *)((*((_QWORD *)v27 + 40) - 24LL) & -(__int64)(*((_QWORD *)v27 + 40) != 0LL));
              if ( !v133 )
              {
                WdLogSingleEntry1(2LL, 485LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"The process does not have any devices",
                  485LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                StandardAllocation = -1073741811;
LABEL_57:
                *((_QWORD *)v30 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v30, 0LL);
                KeLeaveCriticalRegion();
                return StandardAllocation;
              }
            }
            DXGDEVICE::GetContexts(v133, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
            *((_DWORD *)a2 + 3) = *(_DWORD *)(v32 + 468);
            *((_QWORD *)v30 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v30, 0LL);
            KeLeaveCriticalRegion();
            return v118;
          case 0xA:
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 792);
              return StandardAllocation;
            }
            WdLogSingleEntry1(3LL, 393LL);
            return (unsigned int)-1073741811;
          case 0xB:
            v19 = *((_DWORD *)a1 + 792);
            if ( v19 && *((unsigned int *)a2 + 1) >= 344 * (unsigned __int64)(v19 - 1) + 360 )
            {
              v20 = (char *)a2 + 352;
              v21 = v19;
              do
              {
                v22 = *((_QWORD *)a1 + 378);
                v23 = v20 - 336;
                v24 = (_OWORD *)(v7 + v22 + 8);
                v25 = 2LL;
                do
                {
                  *(_OWORD *)v23 = *v24;
                  *((_OWORD *)v23 + 1) = v24[1];
                  *((_OWORD *)v23 + 2) = v24[2];
                  *((_OWORD *)v23 + 3) = v24[3];
                  *((_OWORD *)v23 + 4) = v24[4];
                  *((_OWORD *)v23 + 5) = v24[5];
                  *((_OWORD *)v23 + 6) = v24[6];
                  v23 += 128;
                  *((_OWORD *)v23 - 1) = v24[7];
                  v24 += 8;
                  --v25;
                }
                while ( v25 );
                *(_OWORD *)v23 = *v24;
                *((_OWORD *)v23 + 1) = v24[1];
                *((_OWORD *)v23 + 2) = v24[2];
                *((_OWORD *)v23 + 3) = v24[3];
                *((_OWORD *)v23 + 4) = v24[4];
                *(_DWORD *)v20 = *(_DWORD *)(v7 + v22 + 344);
                v20[4] = *(_BYTE *)(v7 + v22 + 356);
                v7 += 520LL;
                v20 += 344;
                --v21;
              }
              while ( v21 );
              return StandardAllocation;
            }
            WdLogSingleEntry1(3LL, 412LL);
            return (unsigned int)-1073741811;
          case 0xC:
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              v18 = *((_QWORD *)a1 + 366);
              if ( v18 )
                *(_BYTE *)(v18 + 1024) = *((_BYTE *)a2 + 12);
              return StandardAllocation;
            }
            WdLogSingleEntry1(3LL, 431LL);
            return (unsigned int)-1073741811;
          default:
            goto LABEL_297;
        }
      }
      if ( (_DWORD)v17 != 15 )
      {
        if ( (_DWORD)v17 != 16 )
        {
          v35 = (unsigned int)(v17 - 17);
          if ( (_DWORD)v17 != 17 )
          {
            if ( (_DWORD)v17 == 18 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
              {
                WdLogSingleEntry1(3LL, 993LL);
                return (unsigned int)-1073741811;
              }
              v50 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v17 - 18));
              if ( !v50 )
              {
                v28 = 1001LL;
                WdLogSingleEntry1(2LL, 1001LL);
                goto LABEL_49;
              }
              v150 = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v139, *((_DWORD *)a2 + 3), v50, &v150);
              v51 = v150;
              if ( v150 )
              {
                *((_BYTE *)v150 + 1903) = 1;
                *(_BYTE *)(*((_QWORD *)v51 + 5) + 337LL) = 1;
              }
              else
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot get the device by handle: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                StandardAllocation = -1073741811;
                v118 = -1073741811;
              }
              if ( !v139 )
                return StandardAllocation;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v139 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                return v118;
              v39 = (ADAPTER_RENDER **)v139;
              goto LABEL_163;
            }
            if ( (_DWORD)v17 == 19 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
                return -1073741811LL;
              if ( g_OSTestSigningEnabled )
              {
                *((_BYTE *)DXGGLOBAL::GetGlobal() + 1616) = *((_DWORD *)a2 + 3) != 0;
                return StandardAllocation;
              }
              return (unsigned int)-1073741637;
            }
            if ( (_DWORD)v17 != 20 )
            {
              if ( (_DWORD)v17 != 21 )
              {
                if ( (_DWORD)v17 == 22 )
                {
                  v36 = DXGPROCESS::GetCurrent((unsigned int)(v17 - 22));
                  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)&Event, v36);
                  DXGUSERCRIT::Acquire((DXGUSERCRIT *)&Event, 0);
                  v37 = CCD_BTL::Global();
                  CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v37 + 8));
                  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)&Event);
                  return StandardAllocation;
                }
                if ( *((_DWORD *)a2 + 1) < 0x30u )
                {
                  WdLogSingleEntry1(3LL, 342LL);
                  return (unsigned int)-1073741811;
                }
                return (unsigned int)DxgkpSendTestVmBusCommand(a1, a2);
              }
              if ( *((_DWORD *)a2 + 1) < 0x18u )
              {
                WdLogSingleEntry1(3LL, 756LL);
                return (unsigned int)-1073741811;
              }
              v38 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v17 - 21));
              if ( !v38 )
              {
                v28 = 764LL;
                WdLogSingleEntry1(2LL, 764LL);
                goto LABEL_49;
              }
              v144 = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v129, *((_DWORD *)a2 + 3), v38, &v144);
              if ( v144 )
              {
                v40 = (void *)*((_QWORD *)a2 + 2);
                Object = 0LL;
                v41 = ObReferenceObjectByHandle(v40, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
                StandardAllocation = v41;
                v118 = v41;
                if ( v41 >= 0 )
                {
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v159, v144);
                  KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
                  if ( v159[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v159);
                }
                else
                {
                  v42 = v41;
                  WdLogSingleEntry1(2LL, v41);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"hEvent is invalid, returning 0x%I64x",
                    v42,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot get the device by handle: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                StandardAllocation = -1073741811;
                v118 = -1073741811;
              }
              if ( !v129 )
                return StandardAllocation;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                return v118;
              v39 = (ADAPTER_RENDER **)v129;
LABEL_163:
              ADAPTER_RENDER::DestroyDeviceNoLocks(v39[2], (struct DXGDEVICE *)v39);
              return v118;
            }
            if ( *((_DWORD *)a2 + 1) < 0x18u )
            {
              WdLogSingleEntry1(3LL, 664LL);
              return (unsigned int)-1073741811;
            }
            v43 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v17 - 20));
            v44 = (__int64)v43;
            if ( !v43 )
            {
              v28 = 672LL;
              WdLogSingleEntry1(2LL, 672LL);
              goto LABEL_49;
            }
            v149 = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v121, *((_DWORD *)a2 + 3), v43, &v149);
            v45 = v149;
            if ( !v149 )
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the device by handle: 0x%I64x",
                *((unsigned int *)a2 + 3),
                0LL,
                0LL,
                0LL,
                0LL);
              StandardAllocation = -1073741811;
              v118 = -1073741811;
LABEL_117:
              if ( !v121 )
                return StandardAllocation;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v121 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                return v118;
              v39 = (ADAPTER_RENDER **)v121;
              goto LABEL_163;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v130, v45);
            v141 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
            v142 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v176, (__int64)v45, 0, v46, 0);
            StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v176, 0LL);
            v118 = StandardAllocation;
            if ( (StandardAllocation & 0x80000000) != 0 )
            {
LABEL_121:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v176);
              if ( v142 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
              if ( v130[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v130);
              goto LABEL_117;
            }
            v127 = 0LL;
            AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                          v44,
                                                          (DXGALLOCATIONREFERENCE *)&v158,
                                                          *((_DWORD *)a2 + 4));
            DXGALLOCATIONREFERENCE::MoveAssign(&v127, AllocationSafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v158);
            v48 = v127;
            if ( v127 )
            {
              v49 = (_QWORD *)*((_QWORD *)v45 + 2);
              if ( *(_QWORD *)(*(_QWORD *)(v127[1].Count + 16) + 16LL) != v49[2] )
              {
                StandardAllocation = -1073741811;
                WdLogSingleEntry3(2LL, v45, v127, -1073741811LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  (__int64)v45,
                  (__int64)v48,
                  -1073741811LL,
                  0LL,
                  0LL);
                goto LABEL_128;
              }
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (v127[9].Count & 0x800) == 0 )
                {
                  v143 = 0;
                  v155 = 0LL;
                  StandardAllocation = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v49[95] + 8LL) + 216LL))(
                                         v49[96],
                                         v127[3].Count,
                                         0LL,
                                         &v143,
                                         &v155,
                                         0LL);
                  v118 = StandardAllocation;
                  if ( (StandardAllocation & 0x80000000) == 0 )
                    LODWORD(v48[9].Count) |= 0x800u;
                  goto LABEL_129;
                }
                WdLogSingleEntry1(2LL, 720LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Allocation is already pinned",
                  720LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                if ( _bittest((const signed __int32 *)&v127[9], 0xBu) )
                {
                  (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v49[95] + 8LL) + 224LL))(
                    v49[96],
                    v127[3].Count);
                  LODWORD(v48[9].Count) &= ~0x800u;
                  goto LABEL_129;
                }
                WdLogSingleEntry1(2LL, 741LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Allocation is not pinned",
                  741LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 4));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the allocation by handle: 0x%I64x",
                *((unsigned int *)a2 + 4),
                0LL,
                0LL,
                0LL,
                0LL);
            }
            StandardAllocation = -1073741811;
LABEL_128:
            v118 = -1073741811;
LABEL_129:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v127);
            goto LABEL_121;
          }
LABEL_300:
          if ( *((_DWORD *)a2 + 1) < 0xA8u )
          {
            WdLogSingleEntry1(3LL, 835LL);
            return -1073741811LL;
          }
          v87 = DXGPROCESS::GetCurrent(v35);
          v88 = (__int64)v87;
          if ( !v87 )
          {
            WdLogSingleEntry1(2LL, 842LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot get the current DXGPROCESS",
              842LL,
              0LL,
              0LL,
              0LL,
              0LL);
            return -1073741811LL;
          }
          v123 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
            (DXGCONTEXTBYHANDLE *)v160,
            *((_DWORD *)a2 + 3),
            v87,
            (struct DXGCONTEXT **)&v123,
            0,
            1);
          if ( !v123 )
          {
            WdLogSingleEntry1(2LL, 851LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Cannot get the context", 851LL, 0LL, 0LL, 0LL, 0LL);
LABEL_319:
            StandardAllocation = -1073741811;
LABEL_358:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v160);
            return StandardAllocation;
          }
          if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          v89 = (struct DXGDEVICE *)*((_QWORD *)v123 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock,
            v89);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&Event, (struct _KTHREAD **)v123 + 56, 0);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)Event.Header.WaitListHead.Flink);
          LODWORD(Event.Header.WaitListHead.Blink) = 2;
          v135 = a1;
          v136 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v175, (__int64)v89, 0, v90, 0);
          StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v175, 0LL);
          if ( (StandardAllocation & 0x80000000) == 0 )
          {
            v91 = *((_DWORD *)a2 + 8);
            if ( v91 > 0x10 )
            {
              v92 = 873LL;
              WdLogSingleEntry1(2LL, 873LL);
              v93 = L"Invalid number of allocations";
LABEL_314:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v93, v92, 0LL, 0LL, 0LL, 0LL);
LABEL_315:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
              if ( v136 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&Event);
              if ( IoStatusBlock.Pointer )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock);
              goto LABEL_319;
            }
            v94 = *((_DWORD *)a2 + 4);
            if ( !v94 && *((_DWORD *)a2 + 2) == 17 )
            {
              v92 = 879LL;
              WdLogSingleEntry1(2LL, 879LL);
              v93 = L"Invalid command buffer size";
              goto LABEL_314;
            }
            if ( *((_BYTE *)a1 + 209) )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)v123 + 7);
              v95 = 0;
              if ( !v91 )
              {
LABEL_324:
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
                if ( v136 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&Event);
                if ( IoStatusBlock.Pointer )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock);
                StandardAllocation = 0;
                goto LABEL_358;
              }
              while ( 1 )
              {
                DXGPROCESS::GetAllocationSafe(
                  v88,
                  (DXGALLOCATIONREFERENCE *)DeviceObject,
                  *((_DWORD *)a2 + 2 * v95 + 9));
                if ( !DeviceObject[0] )
                  break;
                *((_DWORD *)a2 + 2 * v95 + 9) = HIDWORD(DeviceObject[0]->NextDevice);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)DeviceObject);
                if ( ++v95 >= *((_DWORD *)a2 + 8) )
                  goto LABEL_324;
              }
              WdLogSingleEntry1(2LL, 893LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid allocation handle",
                893LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)DeviceObject);
              goto LABEL_315;
            }
            memset(&v173, 0, sizeof(v173));
            v173.hDevice = *((_DWORD *)a2 + 3);
            v173.AllocationCount = v91;
            v96 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
            v173.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
            *(_DWORD *)&v173.Flags |= 0x20u;
            if ( *((_DWORD *)a2 + 2) == 17 )
            {
              v173.CommandLength = v94;
              v97 = (_QWORD *)*((_QWORD *)a2 + 3);
            }
            else
            {
              v173.CommandLength = 80;
              v97 = v171;
            }
            v173.pNewCommandBuffer = v97;
            IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v123 + 2) + 16LL) + 16LL));
            v119[0] = IsDxgmms2;
            v125 = v91;
            P = 0LL;
            v170 = 0;
            v100 = 0LL;
            v132 = 0LL;
            if ( IsDxgmms2 )
            {
              Elements = (struct DXGDEVICE *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                               (__int64 *)&P,
                                               v91);
              v100 = (struct DXGALLOCATION **)Elements;
              v132 = Elements;
              if ( !Elements )
              {
                WdLogSingleEntry1(3LL, 951LL);
                if ( P != v169 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v170 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
                if ( v136 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&Event);
                if ( IoStatusBlock.Pointer )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock);
                StandardAllocation = -1073741801;
                goto LABEL_358;
              }
              StandardAllocation = DxgkReferenceAllocationList(
                                     &v125,
                                     v96,
                                     (struct DXGALLOCATION **)Elements,
                                     *((struct DXGDEVICE **)v123 + 2));
              v98 = v123;
            }
            if ( (StandardAllocation & 0x80000000) == 0 )
            {
              HeadIterator = (struct _DEVICE_OBJECT **)DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator(
                                                         v98 + 51,
                                                         &v161);
              v104 = HeadIterator[1];
              if ( v104 == *HeadIterator )
                v104 = 0LL;
              DeviceObject[0] = v104;
              v161 = 0LL;
              StandardAllocation = DXGCONTEXT::Render(
                                     v103,
                                     &v173,
                                     (__int64)v175,
                                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)v134,
                                     (struct DXGCONTEXT **)&v123,
                                     v100,
                                     (struct DXGHWQUEUE **)DeviceObject);
            }
            if ( IsDxgmms2 )
              DxgkUnreferenceAllocationList(v125, (struct _EX_RUNDOWN_REF **)v100);
            if ( P != v169 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v170 = 0;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          if ( v136 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&Event);
          if ( IoStatusBlock.Pointer )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock);
          goto LABEL_358;
        }
        if ( *((_DWORD *)a2 + 1) < 0x60u )
        {
          WdLogSingleEntry1(3LL, 500LL);
          return (unsigned int)-1073741811;
        }
        v52 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v17 - 16));
        v53 = v52;
        if ( !v52 )
        {
          v28 = 508LL;
          WdLogSingleEntry1(2LL, 508LL);
          goto LABEL_49;
        }
        v132 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v126, *((_DWORD *)a2 + 3), v52, &v132);
        v54 = v132;
        if ( !v132 )
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot get the device by handle: 0x%I64x",
            *((unsigned int *)a2 + 3),
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_159:
          StandardAllocation = -1073741811;
          v118 = -1073741811;
LABEL_160:
          if ( !v126 )
            return StandardAllocation;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            return v118;
          v39 = (ADAPTER_RENDER **)v126;
          goto LABEL_163;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
        v137 = 0;
        v131 = 0;
        v55 = 0LL;
        v56 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
        if ( *(_BYTE *)(v56 + 209) )
        {
          *(_OWORD *)v162 = *(_OWORD *)a2;
          v163 = *((_OWORD *)a2 + 1);
          v164 = *((_OWORD *)a2 + 2);
          v165 = *((_OWORD *)a2 + 3);
          v166 = *((_OWORD *)a2 + 4);
          v167 = *((_OWORD *)a2 + 5);
          *(_DWORD *)&v162[12] = *((_DWORD *)v54 + 118);
          v57 = *(_DWORD *)&v162[12];
          v58 = *(_DWORD *)(v56 + 4560);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v53);
          if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v56 + 4472),
                      HostProcess,
                      v58,
                      v57,
                      0,
                      D3DKMT_ESCAPE_DRT_TEST,
                      0,
                      0x60u,
                      v162) < 0 )
          {
            WdLogSingleEntry1(2LL, 550LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VmBusSendEscape failed to create standard allocation",
              550LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_159;
          }
          v137 = HIDWORD(v164);
          v131 = v165;
          v55 = v167;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v151, v54);
        v153 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
        v154 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v177, (__int64)v54, 0, v60, 0);
        StandardAllocation = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v177, 0LL);
        v118 = StandardAllocation;
        if ( (StandardAllocation & 0x80000000) == 0 )
        {
          memset(v172, 0, 0x1A8uLL);
          HIDWORD(v172[0]) = *((_DWORD *)a2 + 3);
          LODWORD(v172[2]) = 4;
          v172[3] = (char *)a2 + 16;
          v61 = LODWORD(v172[0]) | 0x200;
          LODWORD(v172[0]) |= 0x200u;
          if ( *((_BYTE *)a2 + 60) )
          {
            v61 |= 1u;
            LODWORD(v172[0]) = v61;
          }
          if ( *((_BYTE *)a2 + 65) )
          {
            v61 |= 0x20u;
            LODWORD(v172[0]) = v61;
          }
          if ( *((_BYTE *)a2 + 61) )
          {
            v61 |= 0x400u;
            LODWORD(v172[0]) = v61;
          }
          if ( *((_BYTE *)a2 + 62) )
          {
            v61 |= 0x1000u;
            LODWORD(v172[0]) = v61;
          }
          if ( *((_BYTE *)a2 + 63) )
          {
            v61 |= 0x2000u;
            LODWORD(v172[0]) = v61;
          }
          if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
            LODWORD(v172[0]) = v61 | 0x8000;
          LOBYTE(v172[51]) = *((_BYTE *)a2 + 64);
          LODWORD(v172[48]) = *((_DWORD *)a2 + 14);
          HIDWORD(v172[48]) = *((_DWORD *)a2 + 17);
          HIDWORD(v172[47]) = *((_DWORD *)a2 + 10);
          LODWORD(v172[49]) = *((_DWORD *)a2 + 18);
          v172[50] = *((_QWORD *)a2 + 10);
          StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                 v54,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v172,
                                 (struct COREDEVICEACCESS *)v177);
          v118 = StandardAllocation;
          if ( (StandardAllocation & 0x80000000) == 0 )
          {
            v62 = HIDWORD(v172[6]);
            *((_DWORD *)a2 + 11) = HIDWORD(v172[6]);
            *((_QWORD *)a2 + 6) = v172[1];
            if ( ((_DWORD)v53[53] & 0x100) != 0 )
            {
              v145 = 0LL;
              v63 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v53,
                                                 (DXGALLOCATIONREFERENCE *)&v156,
                                                 v62);
              DXGALLOCATIONREFERENCE::MoveAssign(&v145, v63);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v156);
              if ( v145
                && (v64 = (_QWORD *)*((_QWORD *)v54 + 2), *(_QWORD *)(*(_QWORD *)(v145[1].Count + 16) + 16LL) == v64[2]) )
              {
                v65 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v64[95] + 8LL) + 624LL))(
                        v64[96],
                        v145[3].Count,
                        0LL);
              }
              else
              {
                v65 = 0LL;
              }
              *((_QWORD *)a2 + 10) = v65;
              v66 = &v145;
            }
            else
            {
              if ( !*(_BYTE *)(v56 + 209) )
                goto LABEL_169;
              v147 = 0LL;
              v67 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v53,
                                                 (DXGALLOCATIONREFERENCE *)&v157,
                                                 v62);
              DXGALLOCATIONREFERENCE::MoveAssign(&v147, v67);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v157);
              v68 = v147;
              if ( v147 )
              {
                HIDWORD(v147[2].Ptr) = v137;
                LOBYTE(v68[16].Count) |= 4u;
                *(_QWORD *)(v68[6].Count + 112) = v55;
                LODWORD(v68[15].Count) = v55;
              }
              v146 = 0LL;
              ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                          (__int64)v53,
                                                          (DXGRESOURCEREFERENCE *)&v120,
                                                          *((_DWORD *)a2 + 12));
              DXGRESOURCEREFERENCE::MoveAssign(&v146, ResourceSafe);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v120);
              if ( v146 )
                HIDWORD(v146[2].Ptr) = v131;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v146);
              v66 = &v147;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v66);
            goto LABEL_169;
          }
          StandardAllocation = -1073741811;
          v118 = -1073741811;
        }
LABEL_169:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v177);
        if ( v154 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
        if ( v151[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v151);
        goto LABEL_160;
      }
      if ( *((_DWORD *)a2 + 1) >= 0xA8u )
      {
        v70 = *((_DWORD *)a2 + 4);
        if ( v70 < *((_DWORD *)a1 + 792) )
        {
          v71 = *((_DWORD *)a2 + 3);
          switch ( v71 )
          {
            case 0:
              DXGADAPTER::ForcePStateAcrossNodes(a1, *((_DWORD *)a2 + 6));
              return StandardAllocation;
            case 1:
            case 2:
            case 3:
              DXGADAPTER::ForcePState((__int64)a1, v71, v70, *((_DWORD *)a2 + 6));
              return StandardAllocation;
            case 4:
              *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1060);
              return StandardAllocation;
            case 5:
              DXGADAPTER::QueryPStateEngineData(
                a1,
                *((_DWORD *)a2 + 5),
                (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                (unsigned int *)a2 + 4);
              return StandardAllocation;
          }
        }
      }
    }
    return -1073741811LL;
  }
  if ( (int)v17 > 37 )
  {
    switch ( (_DWORD)v17 )
    {
      case '&':
        if ( *((_DWORD *)a2 + 1) >= 0x30u )
        {
          if ( *((int *)a1 + 705) < 2700 || !DXGADAPTER::IsFullWDDMAdapter(a1) )
          {
            WdLogSingleEntry1(2LL, 1403LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DRT Test: Test is only valid for full WDDM2.7 and above adapters.",
              1403LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
          {
            WdLogSingleEntry1(2LL, 1411LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DRT Test: Wrong value of ArgSize passed for D3DKMT_DRT_TEST_COMMAND_DISPLAY_DIAGNOSTICS_TEST.",
              1411LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v117 = *((_DWORD *)a2 + 3);
          if ( !v117 )
          {
            *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)a1
                                                                                            + 365))
                                 ? 0xC00000BB
                                 : 0;
            return 0;
          }
          if ( v117 == 1 )
          {
            DeviceObject[0] = *((PDEVICE_OBJECT *)a2 + 4);
            IoStatusBlock.Pointer = (PVOID)0x10800000001LL;
            IoStatusBlock.Information = (ULONG_PTR)DeviceObject;
            StandardAllocation = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                   *((ADAPTER_DISPLAY **)a1 + 365),
                                   (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)&IoStatusBlock,
                                   v116);
            *((_DWORD *)a2 + 11) = StandardAllocation;
            if ( (StandardAllocation & 0x80000000) != 0 )
            {
              WdLogSingleEntry1(2LL, 1437LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DRT Test: DdiGetDisplayStateIntrusive failed.",
                1437LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            return StandardAllocation;
          }
          WdLogSingleEntry1(3LL, 1444LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, 1392LL);
        }
        return (unsigned int)-1073741811;
      case '(':
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry1(3LL, 1524LL);
          return (unsigned int)-1073741811;
        }
        DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel = *((_DWORD *)a2 + 3);
        DXGTRACKEDWORKLOAD::m_bypassPowerLevel = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 5) = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadPhysicalAdapterIndex;
        MonitorHash = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadNodeOrdinal;
        break;
      case ',':
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          WdLogSingleEntry1(3LL, 803LL);
          return (unsigned int)-1073741811;
        }
        if ( !DXGPROCESS::GetCurrent((unsigned int)(v17 - 44)) )
        {
          v28 = 810LL;
          WdLogSingleEntry1(2LL, 810LL);
          goto LABEL_49;
        }
        Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a1;
        LOBYTE(Event.Header.WaitListHead.Blink) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v115 = *(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v115 + 284);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v115 + 4308);
          *(_DWORD *)(v115 + 4308) = 0;
          if ( LOBYTE(Event.Header.WaitListHead.Blink) )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
          return v118;
        }
        StandardAllocation = -1073741130;
        goto LABEL_408;
      case '-':
        if ( *((_DWORD *)a2 + 1) >= 0x40u )
        {
          v112 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 305192);
          if ( RAPID_HPD_MANAGER::IsEnabled(v112) )
          {
            if ( *((_DWORD *)a2 + 5) )
            {
              if ( *((_DWORD *)a2 + 6) )
                v114 = 2 - (*((_DWORD *)a2 + 7) != 0);
              else
                v114 = 0;
              RAPID_HPD_MANAGER::SetTestControl(v113, v114);
            }
            if ( *((_DWORD *)a2 + 3) )
              RAPID_HPD_MANAGER::ReportTriggerEvent((__int64)v112, 4u, 0LL);
            if ( *((_DWORD *)a2 + 4) )
              RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v112, 4u, 0LL);
            if ( *((_DWORD *)a2 + 8) )
              RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
                v112,
                1u,
                (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 36),
                (struct _GUID *)((char *)a2 + 40),
                0LL);
            *((_DWORD *)a2 + 14) = *((_DWORD *)v112 + 6);
            *((_DWORD *)a2 + 15) = *((_DWORD *)v112 + 7);
          }
          else
          {
            return (unsigned int)-1073740959;
          }
          return StandardAllocation;
        }
        WdLogSingleEntry1(3LL, 1537LL);
        return (unsigned int)-1073741811;
      case '.':
LABEL_377:
        if ( !_bittest((const signed __int32 *)a1 + 571, 0xBu) )
          return StandardAllocation;
        Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a1;
        LOBYTE(Event.Header.WaitListHead.Blink) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        if ( *((_QWORD *)a1 + 366) )
        {
          if ( *((_DWORD *)a1 + 50) == 1 )
          {
            v110 = *((_DWORD *)a2 + 2);
            if ( v110 == 30 )
            {
              v111 = ADAPTER_RENDER::EnableIommuForDrt(
                       *((ADAPTER_RENDER **)a1 + 366),
                       *((struct SYSMM_ADAPTER **)a1 + 28));
LABEL_382:
              StandardAllocation = v111;
              goto LABEL_408;
            }
            if ( v110 == 46 )
            {
              v111 = ADAPTER_RENDER::DisableIommuForDrt(
                       *((ADAPTER_RENDER **)a1 + 366),
                       *((struct SYSMM_ADAPTER **)a1 + 28));
              goto LABEL_382;
            }
          }
          StandardAllocation = 0;
        }
LABEL_408:
        if ( LOBYTE(Event.Header.WaitListHead.Blink) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        return StandardAllocation;
      case '/':
        v108 = *((_DWORD *)a2 + 1);
        if ( v108 < 0x23 )
        {
          WdLogSingleEntry1(3LL, 1600LL);
          return (unsigned int)-1073741811;
        }
        if ( v108 < 20 * *((_DWORD *)a2 + 7) + 35 )
        {
          WdLogSingleEntry1(3LL, 1608LL);
          return (unsigned int)-1073741811;
        }
        MonitorHash = DxgkGetMonitorHash(
                        *(struct _LUID *)((char *)a2 + 12),
                        *((_DWORD *)a2 + 5),
                        (unsigned int *)a2 + 7,
                        (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 32));
        break;
      default:
        v35 = (unsigned int)(v17 - 48);
        if ( (_DWORD)v17 == 48 )
        {
          if ( a1 )
          {
            if ( !this || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[11]) )
            {
              v28 = 1631LL;
              WdLogSingleEntry1(2LL, 1631LL);
              v29 = L"Caller should not set the HardwareAccess so DxgkEscape will acquire the adapter lock shared.";
            }
            else if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              if ( *((_DWORD *)a2 + 3) < *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) )
              {
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
                StandardAllocation = COREADAPTERACCESS::AcquireExclusive((__int64)this, 2LL);
                if ( (StandardAllocation & 0x80000000) == 0 )
                {
                  v105 = *((unsigned int *)a2 + 3);
                  v106 = *((_QWORD *)a1 + 365);
                  v107 = *(struct DXGDEVICE **)(4000 * v105 + *(_QWORD *)(v106 + 128) + 728);
                  if ( v107 )
                    ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v106, v107, v105);
                  return 0;
                }
                WdLogSingleEntry1(2LL, 1661LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to acquire the adapter core access exclusively.",
                  1661LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                return StandardAllocation;
              }
              v28 = 1647LL;
              WdLogSingleEntry1(2LL, 1647LL);
              v29 = L"Caller specified VidPn source ID is invalid.";
            }
            else
            {
              v28 = 1639LL;
              WdLogSingleEntry1(2LL, 1639LL);
              v29 = L"DRT test specified invalid buffer size for D3DKMT_DRT_RESET_DISPLAY_OWNERSHIP.";
            }
          }
          else
          {
            v28 = 1624LL;
            WdLogSingleEntry1(2LL, 1624LL);
            v29 = L"Caller should specify the adapter.";
          }
          goto LABEL_50;
        }
        if ( (_DWORD)v17 == 49 )
        {
          if ( *((_DWORD *)a2 + 1) < 0xD0u )
          {
            WdLogSingleEntry1(3LL, 827LL);
            return -1073741811LL;
          }
          goto LABEL_300;
        }
LABEL_297:
        WdLogSingleEntry1(3LL, v17);
        return (unsigned int)-1073741811;
    }
    *((_DWORD *)a2 + 6) = MonitorHash;
    return StandardAllocation;
  }
  if ( (_DWORD)v17 == 37 )
  {
    if ( *((_DWORD *)a2 + 1) >= 0x14u )
    {
      v85 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 448LL);
      if ( v85 )
        v86 = *(_DWORD *)(2920LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v85 + 8) + 136);
      else
        v86 = -1;
      *((_DWORD *)a2 + 4) = v86;
      return StandardAllocation;
    }
    WdLogSingleEntry1(3LL, 1508LL);
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v17 == 25 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x1Cu )
      return -1073741811LL;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DeviceObject[0] = 0LL;
    v123 = 0LL;
    result = DxgkGetMonitorDeviceObject(
               (const struct _LUID *)((char *)a2 + 12),
               *((_DWORD *)a2 + 5),
               (struct _FILE_OBJECT **)&v123,
               DeviceObject);
    if ( (int)result < 0 )
      return result;
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject[0]);
    IoStatusBlock = 0LL;
    v83 = IoBuildDeviceIoControlRequest(
            0x232433u,
            AttachedDeviceReference,
            (char *)a2 + 24,
            4u,
            0LL,
            0,
            1u,
            &Event,
            &IoStatusBlock);
    if ( v83 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v83);
      if ( Status == 259 )
      {
        while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
          ;
        Status = IoStatusBlock.Status;
      }
      v80 = Status;
    }
    else
    {
      v80 = -1073741823;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    v81 = v123;
    goto LABEL_281;
  }
  if ( (_DWORD)v17 != 26 )
  {
    if ( (_DWORD)v17 == 28 )
    {
      if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
        return -1073741811LL;
      v76 = DXGPROCESS::GetCurrent((unsigned int)(v17 - 28));
      if ( v76 )
      {
        *((_DWORD *)v76 + 106) = *((_DWORD *)v76 + 106) & 0xFFFFDFFF | (*((_BYTE *)a2 + 12) != 0 ? 0x2000 : 0);
        return StandardAllocation;
      }
      return 3221225506LL;
    }
    if ( (_DWORD)v17 == 29 )
      return (unsigned int)DrtTestSignalEventCb(a1, a2);
    if ( (_DWORD)v17 != 30 )
    {
      if ( (_DWORD)v17 == 31 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry1(3LL, 1336LL);
          return (unsigned int)-1073741811;
        }
        return (unsigned int)DrtTestUpdateRegistryForNewOverride(
                               *(struct _LUID *)((char *)a2 + 12),
                               *((_DWORD *)a2 + 5),
                               *((_DWORD *)a2 + 6));
      }
      if ( (_DWORD)v17 == 34 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v72 = *((_DWORD *)a2 + 3);
          if ( (unsigned int)(v72 - 1) <= 2 )
          {
            if ( *((int *)a1 + 705) >= 2600 && *((_QWORD *)a1 + 365) && *((_QWORD *)a1 + 366) )
            {
              DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v72);
              v75 = DiagnosticInfoArgs;
              if ( DiagnosticInfoArgs )
              {
                StandardAllocation = DXGADAPTER::DdiCollectDiagnosticInfo(a1, DiagnosticInfoArgs, v74);
                DxgFreeDiagnosticInfoArgs(v75);
              }
              else
              {
                return (unsigned int)-1073741801;
              }
            }
            return StandardAllocation;
          }
          WdLogSingleEntry1(3LL, 1365LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, 1350LL);
        }
        return (unsigned int)-1073741811;
      }
      if ( (_DWORD)v17 != 35 )
      {
        if ( (_DWORD)v17 == 36 )
          return (unsigned int)ForceGpupTdr(a2);
        goto LABEL_297;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x18u )
        {
          if ( *((_QWORD *)a2 + 2) )
            StandardAllocation = DxgkSetIndirectDisplayRenderAdapterByHandle(
                                   *((_DWORD *)a2 + 3),
                                   (struct _LUID *)a2 + 2);
          DeviceObject[0] = 0LL;
          DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)DeviceObject, *((_DWORD *)a2 + 3));
          if ( DeviceObject[0] )
          {
            IoStatusBlock.Pointer = 0LL;
            ADAPTER_DISPLAY::GetPairedRenderAdapter(
              (ADAPTER_DISPLAY *)DeviceObject[0][8].Dpc.DeferredContext,
              (DXGADAPTER **)&IoStatusBlock,
              0LL);
            if ( IoStatusBlock.Pointer )
              v7 = *(_QWORD *)((char *)IoStatusBlock.Pointer + 404);
            *((_QWORD *)a2 + 2) = v7;
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)&IoStatusBlock, 0LL);
          }
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)DeviceObject, 0LL);
          return StandardAllocation;
        }
        WdLogSingleEntry1(3LL, 1466LL);
        return (unsigned int)-1073741811;
      }
      return 3221225506LL;
    }
    goto LABEL_377;
  }
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) < 0x14u )
    return -1073741811LL;
  v77 = 0LL;
  Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a1;
  LOBYTE(Event.Header.WaitListHead.Blink) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
  if ( *((_DWORD *)a1 + 50) != 1 )
  {
LABEL_267:
    if ( LOBYTE(Event.Header.WaitListHead.Blink) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
    if ( !v77 )
      return (unsigned int)-1073741823;
    memset(v171, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v171[1]);
    v171[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v171[3]) = 45;
    LOBYTE(v171[6]) = -1;
    v125 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
    v80 = DxgkPowerOnOffMonitor(
            (__int64)v77,
            1u,
            (_DWORD *)a2 + 3,
            (int *)&v125,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v171);
    v81 = v77;
LABEL_281:
    ObfDereferenceObject(v81);
    return v80;
  }
  v78 = *((_DWORD *)a2 + 3);
  if ( v78 == -1 )
  {
LABEL_266:
    v77 = (void *)*((_QWORD *)a1 + 27);
    ObfReferenceObject(v77);
    goto LABEL_267;
  }
  v119[0] = 0;
  IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(a1, v78, v119);
  if ( IsTargetInClientVidPnTopology >= 0 )
  {
    if ( !v119[0] )
    {
      if ( LOBYTE(Event.Header.WaitListHead.Blink) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
      return -1073741811LL;
    }
    goto LABEL_266;
  }
  if ( LOBYTE(Event.Header.WaitListHead.Blink) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
  return (unsigned int)IsTargetInClientVidPnTopology;
}
