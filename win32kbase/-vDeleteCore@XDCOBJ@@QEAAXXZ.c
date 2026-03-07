void __fastcall XDCOBJ::vDeleteCore(__int64 **this)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbx
  struct HPATH__ *v16; // rdx
  _QWORD *v17; // rbx
  __int64 *v18; // rdx
  __int16 *v19; // rbp
  unsigned __int8 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rsi
  struct _ERESOURCE *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // r12
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 v37; // r8
  int v38; // ebx
  signed int v39; // r14d
  __int64 v40; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r13
  struct _ERESOURCE *v46; // r15
  __int64 v47; // r15
  int v48; // edx
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rsi
  __int64 v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // r8d
  struct _ERESOURCE *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  char EtwGdiHandleType; // r15
  __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned __int8 v67; // cl
  __int64 *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rbx
  unsigned int v73; // eax
  __int64 v74; // r8
  unsigned __int64 v75; // rdx
  unsigned int v76; // r9d
  __int64 v77; // r8
  _DWORD *v78; // r15
  int v79; // eax
  unsigned int v80; // ebx
  __int64 v81; // r8
  __int64 v82; // r14
  unsigned int v83; // edx
  __int64 v84; // r8
  _QWORD *v85; // r12
  _QWORD **v86; // r11
  unsigned __int64 v87; // r10
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // r8d
  struct _ERESOURCE *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v96; // rcx
  __int64 v97; // rax
  _QWORD *v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rbp
  struct _ERESOURCE *v101; // r14
  __int64 v102; // rbp
  __int64 v103; // r14
  __int64 v104; // r9
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v106; // rax
  int v107; // r8d
  unsigned int v108; // r14d
  _DWORD *v109; // [rsp+40h] [rbp-E8h] BYREF
  int v110; // [rsp+48h] [rbp-E0h]
  _QWORD v111[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v112[8]; // [rsp+70h] [rbp-B8h] BYREF
  int *v113; // [rsp+78h] [rbp-B0h]
  unsigned __int8 v114; // [rsp+130h] [rbp+8h]
  __int64 v115; // [rsp+138h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+140h] [rbp+18h] BYREF

  v2 = (*this)[220];
  v115 = 0LL;
  if ( qword_1C02D5DB8 && (int)qword_1C02D5DB8() >= 0 && qword_1C02D5DC0 )
    qword_1C02D5DC0(&v115, v2);
  v3 = *this;
  v4 = (volatile signed __int32 *)(*this)[154];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v4, 1);
    v3[154] = 0LL;
  }
  v5 = v3[151];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((_DWORD *)(v5 - 16), 0);
    v3[151] = 0LL;
  }
  v6 = *this;
  v7 = (volatile signed __int32 *)(*this)[171];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v7, 1);
    v6[171] = 0LL;
  }
  v8 = v6[168];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((_DWORD *)(v8 - 16), 0);
    v6[168] = 0LL;
  }
  v9 = *this;
  v10 = (volatile signed __int32 *)(*this)[188];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v10, 1);
    v9[188] = 0LL;
  }
  v11 = v9[185];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush((_DWORD *)(v11 - 16), 0);
    v9[185] = 0LL;
  }
  v12 = *this;
  v13 = (volatile signed __int32 *)(*this)[205];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v13, 1);
    v12[205] = 0LL;
  }
  v14 = v12[202];
  if ( v14 )
  {
    v13 = (volatile signed __int32 *)(v14 - 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v13, 0);
    v12[202] = 0LL;
  }
  v15 = *this;
  v16 = (struct HPATH__ *)(*this)[25];
  if ( v16 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v112, v16);
    if ( v113 && (v113[21] & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v113, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v112);
    v15[25] = 0LL;
  }
  if ( qword_1C02D5DC8 && (int)qword_1C02D5DC8() >= 0 && qword_1C02D5DD0 )
    qword_1C02D5DD0(this);
  v17 = (_QWORD *)(*this)[259];
  while ( v17 )
  {
    v98 = v17;
    v17 = (_QWORD *)v17[1];
    v100 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
    v101 = *(struct _ERESOURCE **)(v100 + 48);
    if ( v101 )
    {
      PsEnterPriorityRegion(v99);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v101);
    }
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v100 + 48), 14);
    v102 = *(_QWORD *)(v100 + 6368);
    v103 = *(_QWORD *)(*v98 + 128LL);
    v111[0] = v103;
    --*(_DWORD *)(*v98 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C02D5D80 )
    {
      v104 = 64LL;
      if ( v103 != v102 )
        v104 = 32LL;
      qword_1C02D5D80(v111, *v98, 0LL, v104);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v98);
  }
  v18 = (__int64 *)(*this)[37];
  if ( v18 && v18 != *this + 33 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
    (*this)[37] = 0LL;
  }
  v19 = 0LL;
  v20 = 0;
  v21 = **this;
  SGDGetSessionState(v13);
  v24 = *(_QWORD *)(SGDGetSessionState(v22) + 24);
  v25 = *(struct _ERESOURCE **)(v24 + 1912);
  if ( v25 )
  {
    PsEnterPriorityRegion(v23);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v25);
  }
  v26 = *(_QWORD *)(v24 + 1912);
  v27 = *(_QWORD *)(SGDGetSessionState(v23) + 24);
  if ( *(_DWORD *)(v27 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v27,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v28,
      v26,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  v109 = 0LL;
  v110 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v109, (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v110 )
  {
    v30 = SGDGetSessionState(v29);
    v31 = v109;
    v32 = *(_QWORD *)(*(_QWORD *)(v30 + 24) + 8008LL);
    v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v32, *v109 & 0xFFFFFF);
    v34 = *(_QWORD *)(v32 + 16);
    v35 = v33;
    v36 = *(_DWORD *)(v34 + 2056);
    if ( v33 < v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
    {
      if ( v33 >= v36 )
      {
        v37 = *(_QWORD *)(v34 + 8LL * (((v33 - v36) >> 16) + 1) + 8);
        v35 = -65536 * ((v33 - v36) >> 16) - v36 + v33;
      }
      else
      {
        v37 = *(_QWORD *)(v34 + 8);
      }
      if ( (unsigned int)v35 < *(_DWORD *)(v37 + 20) )
        v19 = *(__int16 **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
    }
    v38 = v31[2];
    v114 = *((_BYTE *)v31 + 14);
    v39 = v38 & 0xFFFFFFFE;
    if ( (v38 & 0xFFFFFFFE) == 0 || v39 == -2147483630 )
    {
LABEL_44:
      EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v31 + 14));
      v61 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v60) + 24) + 8008LL);
      v62 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v61, *v31 & 0xFFFFFF);
      v63 = *(_QWORD *)(v61 + 16);
      v64 = v62;
      v65 = *(unsigned int *)(v63 + 2056);
      v66 = (unsigned int)v65 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16);
      if ( v62 >= (unsigned int)v66
        || (v62 >= (unsigned int)v65
          ? (v66 = ((v62 - (unsigned int)v65) >> 16) + 1,
             v63 = *(_QWORD *)(v63 + 8 * v66 + 8),
             v64 = -65536 * ((v62 - (unsigned int)v65) >> 16) - (_DWORD)v65 + v62)
          : (v63 = *(_QWORD *)(v63 + 8)),
            (unsigned int)v64 >= *(_DWORD *)(v63 + 20)) )
      {
        v68 = 0LL;
      }
      else
      {
        v67 = v64;
        v64 >>= 8;
        v66 = 2LL * v67;
        v68 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v63 + 24) + 8 * v64) + 8 * v66 + 8);
      }
      v69 = *v68;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
      {
        v106 = (_DWORD *)SGDGetUserSessionState(v66, v64, v63, v65);
        McTemplateK0pqqq_EtwWriteTransfer(
          *v106,
          (unsigned int)&GdiDestroyHandle,
          v107,
          v69,
          EtwGdiHandleType,
          *v106,
          v39);
      }
      *((_BYTE *)v31 + 14) = 0;
      *((_QWORD *)v31 + 2) = 0LL;
      v31[2] = v38 & 1;
      v70 = *(_QWORD *)(SGDGetSessionState(v66) + 24);
      v71 = *(_QWORD *)(v70 + 8008);
      v72 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v70) + 24) + 8008LL);
      v73 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v72, *v31 & 0xFFFFFF);
      v74 = *(_QWORD *)(v72 + 16);
      v75 = v73;
      v76 = *(_DWORD *)(v74 + 2056);
      if ( v73 >= v76 + ((*(unsigned __int16 *)(v74 + 2) + 0xFFFF) << 16)
        || (v73 >= v76
          ? (v77 = *(_QWORD *)(v74 + 8LL * (((v73 - v76) >> 16) + 1) + 8), v75 = -65536 * ((v73 - v76) >> 16)
                                                                               - v76
                                                                               + v73)
          : (v77 = *(_QWORD *)(v74 + 8)),
            (unsigned int)v75 >= *(_DWORD *)(v77 + 20)) )
      {
        v78 = 0LL;
      }
      else
      {
        v78 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v77 + 24) + 8 * (v75 >> 8)) + 16LL * (unsigned __int8)v75 + 8);
      }
      v79 = (unsigned __int16)*v78;
      v80 = v79 | (*v78 >> 8) & 0xFF0000;
      if ( v80 >= 0x10000 )
      {
        if ( *(_DWORD *)v71 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v71 + 16),
                                      (unsigned __int16)v79,
                                      1)
               + 13) == HIWORD(v80) )
            v80 = (unsigned __int16)v80;
        }
        else
        {
          v80 = (unsigned __int16)v79;
        }
      }
      v81 = *(_QWORD *)(v71 + 24);
      if ( v81 )
      {
        v108 = *(_DWORD *)(v81 + 4LL * (unsigned __int16)v80);
        if ( v108 )
        {
          if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v71 + 16), v108, 1) )
            GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v71 + 16), v108, 1);
          *(_DWORD *)(4LL * (unsigned __int16)v80 + *(_QWORD *)(v71 + 24)) = 0;
          --*(_DWORD *)(v71 + 4);
        }
      }
      v82 = *(_QWORD *)(v71 + 16);
      v83 = *(_DWORD *)(v82 + 2056);
      if ( v80 >= v83 + ((*(unsigned __int16 *)(v82 + 2) + 0xFFFF) << 16) )
        goto LABEL_67;
      if ( v80 >= v83 )
      {
        v84 = *(_QWORD *)(v82 + 8LL * (((v80 - v83) >> 16) + 1) + 8);
        v80 += -65536 * ((v80 - v83) >> 16) - v83;
      }
      else
      {
        v84 = *(_QWORD *)(v82 + 8);
      }
      if ( v80 >= *(_DWORD *)(v84 + 20) )
      {
        v86 = (_QWORD **)(v84 + 24);
      }
      else
      {
        v85 = *(_QWORD **)(v84 + 24);
        v86 = (_QWORD **)(v84 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(*v85 + 8 * ((unsigned __int64)v80 >> 8)) + 16LL * (unsigned __int8)v80 + 8) )
        {
          v87 = (unsigned __int64)v80 >> 8;
          *(_QWORD *)(*(_QWORD *)(*v85 + 8 * v87) + 16LL * (unsigned __int8)v80 + 8) = 0LL;
          *(_QWORD *)(*(_QWORD *)v84 + 24LL * v80) = *(unsigned int *)(v84 + 12);
          --*(_DWORD *)(v84 + 16);
          *(_DWORD *)(v84 + 12) = v80;
LABEL_66:
          ExReleasePushLockExclusiveEx(*(_QWORD *)(**v86 + 8 * v87) + 16LL * (unsigned __int8)v80, 0LL);
          KeLeaveCriticalRegion();
          *(_BYTE *)v82 = 0;
LABEL_67:
          *(_QWORD *)v78 = 0LL;
          --*(_DWORD *)(v71 + 4);
          KeLeaveCriticalRegion();
          v20 = v114;
          goto LABEL_68;
        }
      }
      v87 = (unsigned __int64)v80 >> 8;
      goto LABEL_66;
    }
    Process = 0LL;
    if ( v39 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v40);
      v43 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v43 = 0LL;
    }
    else
    {
      if ( PsLookupProcessByProcessId((HANDLE)v39, &Process) < 0 )
      {
LABEL_42:
        if ( Process )
          ObfDereferenceObject(Process);
        goto LABEL_44;
      }
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      v43 = ProcessWin32Process;
      if ( ProcessWin32Process && !*ProcessWin32Process )
        v43 = 0LL;
    }
    if ( v43 )
    {
      v45 = *(_QWORD *)(SGDGetSessionState(v42) + 24);
      v46 = *(struct _ERESOURCE **)(v45 + 1912);
      if ( v46 )
      {
        PsEnterPriorityRegion(v44);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v46);
      }
      v47 = *(_QWORD *)(v45 + 1912);
      v49 = *(_QWORD *)(SGDGetSessionState(v44) + 24);
      if ( *(_DWORD *)(v49 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v49, v48, v50, v47, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      --*((_DWORD *)v43 + 15);
      v51 = *(_QWORD *)(SGDGetSessionState(v49) + 24);
      v52 = *(_QWORD *)(v51 + 1912);
      v54 = *(_QWORD *)(SGDGetSessionState(v53) + 24);
      if ( *(_DWORD *)(v54 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v54, (unsigned int)&LockRelease, v55, v52, (__int64)L"GreBaseGlobals.hsemHmgr");
      v56 = *(struct _ERESOURCE **)(v51 + 1912);
      if ( v56 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v56);
        PsLeavePriorityRegion(v58, v57);
      }
    }
    goto LABEL_42;
  }
LABEL_68:
  v88 = *(_QWORD *)(SGDGetSessionState(v29) + 24);
  v89 = *(_QWORD *)(v88 + 1912);
  v91 = *(_QWORD *)(SGDGetSessionState(v90) + 24);
  if ( *(_DWORD *)(v91 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v91, (unsigned int)&LockRelease, v92, v89, (__int64)L"GreBaseGlobals.hsemHmgr");
  v93 = *(struct _ERESOURCE **)(v88 + 1912);
  if ( v93 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v93);
    PsLeavePriorityRegion(v95, v94);
  }
  if ( v19 )
  {
    v96 = *(NSInstrumentation::CLeakTrackingAllocator **)(SGDGetSessionState(v93) + 24);
    if ( v19[7] >= 0 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
    else
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v96, *((void **)v96 + v20 + 244), v19);
  }
  v97 = v115;
  *this = 0LL;
  if ( v97 )
  {
    if ( (*(_DWORD *)(v97 + 712) & 0x81) != 0 && qword_1C02D5D38 && (int)qword_1C02D5D38() >= 0 )
    {
      if ( qword_1C02D5D40 )
        qword_1C02D5D40(&v115);
    }
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v115);
  }
}
