/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C02CFA80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C028BA40 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C029C37C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02C18B8 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02C96FC (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(Gre::Base *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // esi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _EPROCESS *CurrentProcess; // rax
  ULONG64 v13; // rcx
  __int64 ThreadWin32Thread; // r14
  int v15; // edx
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v21; // rdx
  struct UMPDOBJ *v22; // rbx
  void *v23; // rcx
  PEPROCESS Process[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h]

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
  v26 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_48;
LABEL_9:
    if ( *((_DWORD *)Gre::Base::Globals(a1) + 1628) == 1 )
    {
      if ( v8 )
      {
        Process[0] = 0LL;
        PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process);
        if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
        {
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9, v11);
          if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
            goto LABEL_48;
        }
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !ThreadWin32Thread )
      goto LABEL_48;
    if ( v6 )
    {
      Process[2] = 0LL;
      v15 = *(_DWORD *)(v8 + 424);
      v27 = v15;
      if ( a4 )
      {
        v13 = (ULONG64)(a4 + 1);
        if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || v13 <= (unsigned __int64)a4 )
        {
          v13 = MmUserProbeAddress;
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        *a4 = v15;
      }
      if ( v15 )
      {
        if ( (unsigned int)bSandboxedCurrentProcess(v13) )
          goto LABEL_48;
        if ( *(_DWORD *)(v8 + 408) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_48;
        if ( *(_QWORD *)(ThreadWin32Thread + 40) != ThreadWin32Thread + 40 )
          goto LABEL_48;
        v16 = Win32AllocPoolZInit(16LL, 1684631623LL);
        Process[1] = (PEPROCESS)v16;
        if ( !v16 )
          goto LABEL_48;
        if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = 0LL;
        if ( !UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
        {
          Win32FreePool((void *)v16);
          goto LABEL_48;
        }
        *(_QWORD *)v16 = *(_QWORD *)(v8 + 400);
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v8 + 408);
        *(_QWORD *)(ThreadWin32Thread + 72) = v16;
        v17 = (_QWORD *)(v8 + 40);
        v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40;
        v19 = *(_QWORD *)v18;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
          __fastfail(3u);
        *v17 = v19;
        v17[1] = v18;
        *(_QWORD *)(v19 + 8) = v17;
        *(_QWORD *)v18 = v17;
        v26 = 0LL;
      }
      else
      {
        if ( (struct UMPDOBJ *)v8 != UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread) )
          goto LABEL_48;
        if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = 0LL;
      }
    }
    else
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread);
      v22 = ThreadCurrentObj;
      if ( !ThreadCurrentObj || v21 != *(_QWORD *)ThreadCurrentObj )
        goto LABEL_48;
      if ( *((_DWORD *)ThreadCurrentObj + 106) )
      {
        if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          goto LABEL_48;
        *((_BYTE *)v22 + 32) |= 2u;
        UMPDOBJ::vRelease(v22, 1);
        v23 = *(void **)(ThreadWin32Thread + 72);
        if ( v23 )
        {
          Win32FreePool(v23);
          *(_QWORD *)(ThreadWin32Thread + 72) = 0LL;
        }
      }
    }
    UMPDREF::~UMPDREF((void **)&v26);
    return 1LL;
  }
  if ( a3 )
    goto LABEL_9;
LABEL_48:
  UMPDREF::~UMPDREF((void **)&v26);
  return 0LL;
}
