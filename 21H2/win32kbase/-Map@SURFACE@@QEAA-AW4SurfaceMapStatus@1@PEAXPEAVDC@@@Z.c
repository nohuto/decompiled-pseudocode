/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0082120
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C00820D0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0082458 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0082620 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // rsi
  unsigned int v3; // ebx
  unsigned int i; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // edi
  int v19; // eax
  unsigned int v20; // ebx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  char *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  HSEMAPHORE v35; // [rsp+60h] [rbp+8h] BYREF
  void *v36; // [rsp+78h] [rbp+20h] BYREF

  v36 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0
    || !_bittest16((const signed __int16 *)(a1 + 102), 0xBu) )
  {
    return 0LL;
  }
  v2 = (unsigned int *)(a1 + 272);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v2 + 5) + 64LL), UserRequest, 0, 0, 0LL);
  for ( i = *v2; *v2; i = *v2 )
  {
    if ( i == v3 )
      break;
    v33 = *((_QWORD *)v2 + 5);
    ++v2[1];
    KeReleaseMutex((PRKMUTEX)(v33 + 64), 0);
    KeWaitForSingleObject(*((PVOID *)v2 + 5), UserRequest, 0, 0, 0LL);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)v2 + 5) + 64LL), UserRequest, 0, 0, 0LL);
  }
  v5 = ++v2[2];
  *v2 = v3;
  if ( v5 > (int)v2[3] )
    v2[3] = v5;
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)v2 + 5) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v10 = (struct _ERESOURCE *)ghsemMapRot;
  v35 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  v11 = *(_QWORD *)(a1 + 264);
  if ( v11 == PsGetCurrentProcessWin32Process(v7, v6, v8, v9) )
  {
    if ( v10 )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v13, (unsigned int)&LockRelease, v14, (_DWORD)v10, (__int64)L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v16);
      v10 = 0LL;
    }
    v17 = 1;
    goto LABEL_14;
  }
  if ( v11 )
  {
    v31 = (_QWORD *)(a1 + 528);
    v13 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v13 + 8) != a1 + 528 )
      goto LABEL_36;
    v32 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v32 != v31 )
      goto LABEL_36;
    *v32 = v13;
    *(_QWORD *)(v13 + 8) = v32;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v31 = v31;
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
  }
  v19 = *(_DWORD *)(a1 + 116);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( (v19 & 1) != 0
    || (v20 = *(_DWORD *)(a1 + 64),
        *(_QWORD *)(a1 + 72) = 0LL,
        *(_QWORD *)(a1 + 80) = 0LL,
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13, v12, v14, v15),
        MapKernelSectionForUserMapping(*(void **)(a1 + 248), CurrentProcess, v20, &v36),
        v36) )
  {
    v22 = (_QWORD *)(a1 + 528);
    v23 = PsGetCurrentProcessWin32Process(v13, v12, v14, v15) + 224;
    v24 = *(_QWORD *)v23;
    if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) == v23 )
    {
      *v22 = v24;
      *(_QWORD *)(a1 + 536) = v23;
      *(_QWORD *)(v24 + 8) = v22;
      *(_QWORD *)v23 = v22;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v26, v25, v27, v28);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v29 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v30 = (char *)v36;
        *(_QWORD *)(a1 + 72) = v36;
        if ( v29 )
          *(_QWORD *)(a1 + 80) = &v30[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v30;
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v35);
      SEMOBJ::vUnlock((PERESOURCE *)&v35);
      return 0LL;
    }
LABEL_36:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v35);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v2);
  v10 = (struct _ERESOURCE *)v35;
  v17 = 2;
LABEL_14:
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v34);
  }
  return v17;
}
