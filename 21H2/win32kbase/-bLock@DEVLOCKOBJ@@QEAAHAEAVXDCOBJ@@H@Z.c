/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C003A310
 * Callers:
 *     GreGetClipBox @ 0x1C003A0D0 (GreGetClipBox.c)
 * Callees:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AB70 (-bCompute@DC@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00C7DDC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  int v3; // esi
  int v7; // eax
  int v8; // r12d
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rdi
  int v16; // r8d
  int v17; // ecx
  DC *v18; // r9
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r8
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  int v26; // r8d
  __int64 v27; // rax
  struct _KTHREAD *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rax
  struct _KTHREAD *v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  DC *v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rax
  struct _KTHREAD *v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rax
  struct _KTHREAD *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rax
  int v64; // ecx
  HSEMAPHORE v65; // r8
  struct _ERESOURCE *v66; // rdi
  HSEMAPHORE v67; // rcx
  __int64 v68; // r8
  int v69; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v73; // rax
  int v74; // edi
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // edi
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edi
  __int64 v81; // rax
  struct _ERESOURCE *v82; // rcx
  struct _ERESOURCE *v83; // rcx
  __int64 v84; // rax
  int v85; // edi
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // edi
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // edi
  __int64 v92; // rax

  v3 = 0;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( !qword_1C0256880
      || (int)qword_1C0256880() < 0
      || !qword_1C0256888
      || (v7 = qword_1C0256888(a2, (char *)this + 96, (char *)this + 88, (char *)this + 28), v7 != 1) )
    {
      LOBYTE(v7) = 0;
    }
    if ( !(_BYTE)v7 )
      return 0LL;
  }
  if ( qword_1C0256310 && (int)qword_1C0256310() >= 0 && qword_1C0256318 )
    qword_1C0256318(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v9 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v9,
        (unsigned int)&LockAcquireShared,
        a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (CurrentProcess = PsGetCurrentProcess(v12, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess))
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v14 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v14 + 104) )
    {
      v15 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v15) )
      {
        v17 = (int)ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v17,
            (unsigned int)&LockAcquireShared,
            v16,
            (_DWORD)ghsemGreLock,
            (__int64)L"ghsemGreLock");
        v8 = 1;
      }
    }
    v18 = *a2;
    v19 = *((_QWORD *)*a2 + 6);
    if ( (**((_DWORD **)*a2 + 122) & 1) == 0 && (*((_DWORD *)v18 + 9) & 0x8000) == 0
      || (v20 = *(_DWORD *)(v19 + 40), (v20 & 1) == 0)
      || (v20 & 0x1000000) != 0
      || *(_DWORD *)(v19 + 2612) != 5
      && (v20 & 0x20000) == 0
      && ((v21 = *(_QWORD *)(v19 + 2576), ((v21 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v21 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v19 + 2128) & 0x400) != 0
      || (v20 & 0x48000000) != 0
      || (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v19 + 24) + 40LL) & 0x1000000) != 0 )
    {
      v65 = (HSEMAPHORE)*((_QWORD *)v18 + 8);
      *(_QWORD *)this = v65;
      v66 = (struct _ERESOURCE *)v65;
      v67 = (HSEMAPHORE)*((_QWORD *)*a2 + 6);
      *((_QWORD *)this + 2) = v67;
      if ( v8 == 1 && v65 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        v67 = ghsemGreLock;
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v66 = *(struct _ERESOURCE **)this;
        v8 = 0;
      }
      if ( v66 )
      {
        PsEnterPriorityRegion(v67);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v66);
        v66 = *(struct _ERESOURCE **)this;
      }
      v68 = 11LL;
      if ( v66 == (struct _ERESOURCE *)ghsemGreLock )
        v68 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v66, v68);
      v69 = *((_DWORD *)this + 6);
      if ( (v69 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v69 | 0x200;
    }
    v22 = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (v73 = PsGetCurrentProcess(v24, v23),
          v74 = PsGetProcessSessionIdEx(v73),
          v75 = PsGetCurrentThreadProcess(),
          v74 != (unsigned int)PsGetProcessSessionIdEx(v75))
      || (v25 = (__int64 *)PsGetThreadWin32Thread(v22)) == 0LL
      || (v27 = *v25) == 0
      || !*(_DWORD *)(v27 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v28 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v76 = PsGetCurrentProcess(v30, v29),
            v77 = PsGetProcessSessionIdEx(v76),
            v78 = PsGetCurrentThreadProcess(),
            v77 == (unsigned int)PsGetProcessSessionIdEx(v78)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v31 )
        {
          v32 = *v31;
          if ( v32 )
          {
            *(_QWORD *)(v32 + 320) = 0LL;
            *(_QWORD *)(v32 + 312) = 0LL;
          }
        }
      }
      v33 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v79 = PsGetCurrentProcess(v35, v34),
            v80 = PsGetProcessSessionIdEx(v79),
            v81 = PsGetCurrentThreadProcess(),
            v80 == (unsigned int)PsGetProcessSessionIdEx(v81)) )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(v33);
        if ( v36 )
        {
          v37 = *v36;
          if ( v37 )
            ++*(_DWORD *)(v37 + 104);
        }
      }
      v38 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v38,
          (unsigned int)&LockAcquireShared,
          v26,
          (_DWORD)ghsemDCVisRgn,
          (__int64)L"ghsemDCVisRgn");
    }
    v39 = *((_DWORD *)*a2 + 9);
    if ( (v39 & 0x1000) != 0 && (v39 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v82 = (struct _ERESOURCE *)ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
          goto LABEL_144;
      }
      goto LABEL_145;
    }
  }
  else
  {
    v54 = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess()
      && (v84 = PsGetCurrentProcess(v56, v55),
          v85 = PsGetProcessSessionIdEx(v84),
          v86 = PsGetCurrentThreadProcess(),
          v85 != (unsigned int)PsGetProcessSessionIdEx(v86))
      || (v57 = (__int64 *)PsGetThreadWin32Thread(v54)) == 0LL
      || (v58 = *v57) == 0
      || !*(_DWORD *)(v58 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v59 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v87 = PsGetCurrentProcess(v61, v60),
            v88 = PsGetProcessSessionIdEx(v87),
            v89 = PsGetCurrentThreadProcess(),
            v88 == (unsigned int)PsGetProcessSessionIdEx(v89)) )
      {
        v62 = (__int64 *)PsGetThreadWin32Thread(v59);
        if ( v62 )
        {
          v63 = *v62;
          if ( v63 )
            ++*(_DWORD *)(v63 + 104);
        }
      }
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v82 = (struct _ERESOURCE *)ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
LABEL_144:
          ExReleaseResourceAndLeaveCriticalRegion(v82);
          PsLeavePriorityRegion();
        }
      }
LABEL_145:
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      v83 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ghsemGreLock )
        return 0LL;
      goto LABEL_160;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_57;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( ghsemDCVisRgn )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    v83 = (struct _ERESOURCE *)ghsemGreLock;
    if ( !ghsemGreLock )
      return 0LL;
LABEL_160:
    ExReleaseResourceAndLeaveCriticalRegion(v83);
    PsLeavePriorityRegion();
    return 0LL;
  }
LABEL_57:
  v40 = *((_DWORD *)this + 6);
  if ( (v40 & 0x20000) == 0 )
  {
    v41 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (v40 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 11) )
      {
        v42 = *((_DWORD *)v41 + 10);
        v43 = 1016LL;
        if ( (v42 & 1) != 0 )
          v43 = 1024LL;
        v44 = (*((_DWORD *)v41 + 9) & 0x4000) == 0;
        *((_DWORD *)v41 + 256) = *(_DWORD *)((char *)v41 + v43);
        *((_DWORD *)v41 + 257) = *(_DWORD *)((char *)v41 + v43 + 4);
        *((_DWORD *)v41 + 262) = *((_DWORD *)v41 + 258);
        *((_DWORD *)v41 + 263) = *((_DWORD *)v41 + 259);
        *((_DWORD *)v41 + 264) = *((_DWORD *)v41 + 260);
        *((_DWORD *)v41 + 265) = *((_DWORD *)v41 + 261);
        *((_DWORD *)v41 + 10) = v42 | 1;
        if ( !v44 )
        {
          v45 = *((_QWORD *)v41 + 62);
          if ( *(_QWORD *)(v45 + 248) || (*(_DWORD *)(v45 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v45 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v41 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v41 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v46 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v90 = PsGetCurrentProcess(v48, v47),
            v91 = PsGetProcessSessionIdEx(v90),
            v92 = PsGetCurrentThreadProcess(),
            v91 == (unsigned int)PsGetProcessSessionIdEx(v92)) )
      {
        v49 = (__int64 *)PsGetThreadWin32Thread(v46);
        if ( v49 )
        {
          v50 = *v49;
          if ( *v49 )
          {
            *(_QWORD *)(v50 + 312) = (char *)this + 32;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v50 + 328) |= 1u;
              *((_QWORD *)*a2 + 248) = 0LL;
              v64 = (int)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v64,
                  (unsigned int)&LockAcquireShared,
                  v26,
                  (_DWORD)ghsemVisRgnUniqueness,
                  (__int64)L"ghsemVisRgnUniqueness");
              *(_DWORD *)(v50 + 336) = giVisRgnUniqueness;
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  v64,
                  (unsigned int)&LockRelease,
                  v26,
                  (_DWORD)ghsemVisRgnUniqueness,
                  (__int64)L"ghsemVisRgnUniqueness");
              v40 = (int)ghsemVisRgnUniqueness;
              if ( ghsemVisRgnUniqueness )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
                PsLeavePriorityRegion();
              }
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v40,
        (unsigned int)&LockRelease,
        v26,
        (_DWORD)ghsemDCVisRgn,
        (__int64)L"ghsemDCVisRgn");
    v40 = (int)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v40,
        (unsigned int)&LockRelease,
        v26,
        (_DWORD)ghsemGreLock,
        (__int64)L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
    return 1LL;
  if ( qword_1C0256310 && (int)qword_1C0256310() >= 0 && qword_1C0256318 )
    v3 = qword_1C0256318(this, a2);
  v51 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    if ( (v51 & 0x1000) == 0 && (v51 & 0x800000) == 0 )
      return 1LL;
    v52 = *((_QWORD *)this + 4);
    if ( !v52 )
    {
      XDCOBJ::vLock((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)*a2);
      v52 = *((_QWORD *)this + 4);
      if ( !v52 )
        return 1LL;
      *((_BYTE *)this + 81) = 0;
    }
    *(_DWORD *)(v52 + 40) |= 2u;
    *((_BYTE *)this + 80) = 1;
    return 1LL;
  }
  *((_DWORD *)this + 6) = v51 & 0xFFFFFFFE;
  return 0LL;
}
