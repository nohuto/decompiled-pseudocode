/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C00A11D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A1548 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00A1678 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C00A19F4 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00A1B74 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288330 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02B1248 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // r15d
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  void *v22; // rcx
  int v23; // ebx
  struct _KPROCESS *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _EPROCESS *v27; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  PEPROCESS Process[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+78h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v33 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_55;
  }
  else if ( !a3 )
  {
    goto LABEL_55;
  }
  if ( gUMPDSecurityLevel != 1
    || !v8
    || (Process[0] = 0LL,
        PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process),
        !(unsigned int)bIsProcessLocalSystem(Process[0]))
    || (v27 = (struct _EPROCESS *)PsGetCurrentProcess(a1, v25, v26), (unsigned int)bIsProcessLocalSystem(v27)) )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    if ( v10 )
    {
      if ( v6 )
      {
        Process[2] = 0LL;
        v16 = *(_DWORD *)(v8 + 424);
        v34 = v16;
        if ( a4 )
        {
          if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a4 = v16;
        }
        if ( v16 )
        {
          if ( !(unsigned int)bSandboxedCurrentProcess() )
          {
            v23 = *(_DWORD *)(v8 + 408);
            if ( v23 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && *(_QWORD *)(v10 + 40) == v10 + 40 )
            {
              v24 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
              Process[1] = v24;
              if ( v24 )
              {
                if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                *a3 = 0LL;
                if ( UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
                {
                  *(_QWORD *)v24 = *(_QWORD *)(v8 + 400);
                  *((_DWORD *)v24 + 2) = *(_DWORD *)(v8 + 408);
                  *(_QWORD *)(v10 + 72) = v24;
                  UMPDOBJ::vPushToCurrentThread((struct UMPDOBJ *)v8);
                  return 1LL;
                }
                Win32FreePool(v24);
              }
            }
          }
        }
        else
        {
          v17 = *(_QWORD *)(v10 + 40);
          v18 = v17 - 40;
          if ( v17 == v10 + 40 )
            v18 = 0LL;
          if ( v8 == v18 )
          {
            v15 = a3 + 1;
            if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || v15 <= a3 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a3 = 0LL;
            goto LABEL_25;
          }
        }
      }
      else
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v20 = *(_QWORD *)(v10 + 40);
        if ( v20 == v10 + 40 )
          v21 = 0LL;
        else
          v21 = v20 - 40;
        if ( v21 && *a3 == *(_QWORD *)v21 )
        {
          if ( !*(_DWORD *)(v21 + 424) )
          {
LABEL_25:
            if ( v8 )
            {
              DEC_SHARE_REF_CNT(v8, v15);
              if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)v8) )
                Win32FreePool((void *)v8);
            }
            return 1LL;
          }
          if ( *(_QWORD *)(v21 + 24) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            *(_BYTE *)(v21 + 32) |= 2u;
            UMPDOBJ::vRelease((struct UMPDOBJ *)v21, 1);
            v22 = *(void **)(v10 + 72);
            if ( v22 )
            {
              Win32FreePool(v22);
              *(_QWORD *)(v10 + 72) = 0LL;
            }
            goto LABEL_25;
          }
        }
      }
    }
  }
LABEL_55:
  UMPDREF::~UMPDREF((UMPDREF *)&v33);
  return 0LL;
}
