/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C00D90AC
 * Callers:
 *     HDXDrvEscape @ 0x1C00D8F50 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C01998F0 (GreDrvConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _ERESOURCE *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8", v1);
    v26 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
    if ( v26 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v26);
      PsLeavePriorityRegion(v28, v27);
    }
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7", v3);
    v29 = (struct _ERESOURCE *)*((_QWORD *)this + 6);
    if ( v29 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v29);
      PsLeavePriorityRegion(v31, v30);
    }
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6", v4);
    v5 = (struct _ERESOURCE *)*((_QWORD *)this + 5);
    if ( v5 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion(v7, v6);
    }
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5", v8);
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
    if ( v9 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      PsLeavePriorityRegion(v11, v10);
    }
  }
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4", v12);
    v13 = (struct _ERESOURCE *)*((_QWORD *)this + 3);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion(v15, v14);
    }
  }
  v16 = *((_QWORD *)this + 2);
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3", v16);
    v17 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    if ( v17 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v17);
      PsLeavePriorityRegion(v19, v18);
    }
  }
  v20 = *((_QWORD *)this + 1);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2", v20);
    v21 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v21 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v21);
      PsLeavePriorityRegion(v23, v22);
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v25, v24);
    }
  }
}
