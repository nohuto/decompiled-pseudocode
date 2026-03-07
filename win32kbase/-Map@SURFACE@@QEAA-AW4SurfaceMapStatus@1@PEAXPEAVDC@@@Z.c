__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _ERESOURCE *v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _ERESOURCE *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ebx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _ERESOURCE *v35; // [rsp+60h] [rbp+8h] BYREF
  void *v36; // [rsp+78h] [rbp+20h] BYREF

  v36 = 0LL;
  v2 = 1;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0
    || !_bittest16((const signed __int16 *)(a1 + 102), 0xBu) )
  {
    return 0LL;
  }
  v4 = a1 + 272;
  v5 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 40) + 64LL), UserRequest, 0, 0, 0LL);
    if ( !*(_DWORD *)v4 || *(_DWORD *)v4 == v5 )
      break;
    v32 = *(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 4);
    KeReleaseMutex((PRKMUTEX)(v32 + 64), 0);
    KeWaitForSingleObject(*(PVOID *)(v4 + 40), UserRequest, 0, 0, 0LL);
  }
  v6 = *(_DWORD *)(v4 + 8) + 1;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 > *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v6;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 40) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v9 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 104LL);
  v35 = v9;
  if ( v9 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v11;
  }
  v14 = *(_QWORD **)(a1 + 264);
  if ( v14 != (_QWORD *)CurrentProcessWin32Process )
  {
    if ( v14 )
    {
      v20 = (_QWORD *)(a1 + 528);
      v21 = *(_QWORD *)(a1 + 528);
      if ( *(_QWORD *)(v21 + 8) != a1 + 528 )
        goto LABEL_43;
      v14 = *(_QWORD **)(a1 + 536);
      if ( (_QWORD *)*v14 != v20 )
        goto LABEL_43;
      *v14 = v21;
      *(_QWORD *)(v21 + 8) = v14;
      *(_QWORD *)(a1 + 536) = a1 + 528;
      *v20 = v20;
      v11 = *(_QWORD *)(a1 + 72);
      if ( v11 )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
    }
    v22 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v22 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    if ( !v22 )
    {
      v23 = *(_DWORD *)(a1 + 64);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v14, v11, v12, v13);
      MapKernelSectionForUserMapping(*(void **)(a1 + 248), CurrentProcess, v23, &v36);
      if ( !v36 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v35);
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v4);
        v19 = v35;
        v2 = 2;
LABEL_17:
        if ( v19 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", v19);
          ExReleaseResourceAndLeaveCriticalRegion(v19);
          PsLeavePriorityRegion(v34, v33);
        }
        return v2;
      }
    }
    v25 = PsGetCurrentProcessWin32Process(v14);
    if ( v25 )
      v25 &= -(__int64)(*(_QWORD *)v25 != 0LL);
    v26 = v25 + 224;
    v27 = (_QWORD *)(a1 + 528);
    v28 = *(_QWORD *)v26;
    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
    {
      *v27 = v28;
      *(_QWORD *)(a1 + 536) = v26;
      *(_QWORD *)(v28 + 8) = v27;
      *(_QWORD *)v26 = v27;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread(KeGetCurrentThread());
      v30 = PsGetCurrentProcessWin32Process(v29);
      if ( v30 )
        v30 &= -(__int64)(*(_QWORD *)v30 != 0LL);
      *(_QWORD *)(a1 + 264) = v30;
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v31 = (char *)v36;
        *(_QWORD *)(a1 + 72) = v36;
        if ( (*(_BYTE *)(a1 + 102) & 1) != 0 )
          *(_QWORD *)(a1 + 80) = v31;
        else
          *(_QWORD *)(a1 + 80) = &v31[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
      return 0LL;
    }
LABEL_43:
    __fastfail(3u);
  }
  if ( v9 )
  {
    v15 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
    if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v15, (unsigned int)&LockRelease, v16, (_DWORD)v9, (__int64)L"hsem");
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion(v18, v17);
    v19 = 0LL;
    goto LABEL_17;
  }
  return v2;
}
