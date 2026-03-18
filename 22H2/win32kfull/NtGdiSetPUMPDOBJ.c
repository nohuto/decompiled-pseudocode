/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C02CDAA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThread @ 0x1C011CF20 (W32GetCurrentThread.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C013F2A8 (-ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02891A0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C0299B9C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02BF1D8 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02C6F38 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(Gre::Base *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // r14d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _EPROCESS *CurrentProcess; // rax
  ULONG64 v13; // rcx
  __int64 ThreadWin32Thread; // rsi
  int v15; // edx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _EPROCESS *v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v25; // rdx
  struct UMPDOBJ *v26; // rbx
  void *v27; // rcx
  PEPROCESS Process[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h]

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
  v30 = v8;
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
        PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 424), Process);
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
      v15 = *(_DWORD *)(v8 + 440);
      v31 = v15;
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
        if ( *(_DWORD *)(v8 + 424) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
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
        *(_QWORD *)v16 = *(_QWORD *)(v8 + 416);
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v8 + 424);
        *(_QWORD *)(ThreadWin32Thread + 72) = v16;
        v20 = (struct _EPROCESS *)PsGetCurrentProcess(v18, v17, v19);
        UMPDOBJ::ReferenceServerProcess((UMPDOBJ *)v8, v20);
        v21 = (_QWORD *)(v8 + 40);
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40;
        v23 = *(_QWORD *)v22;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
          __fastfail(3u);
        *v21 = v23;
        v21[1] = v22;
        *(_QWORD *)(v23 + 8) = v21;
        *(_QWORD *)v22 = v21;
        v30 = 0LL;
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
      v26 = ThreadCurrentObj;
      if ( !ThreadCurrentObj || v25 != *(_QWORD *)ThreadCurrentObj )
        goto LABEL_48;
      if ( *((_DWORD *)ThreadCurrentObj + 110) )
      {
        if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetCurrentThread() )
          goto LABEL_48;
        *((_BYTE *)v26 + 32) |= 2u;
        UMPDOBJ::vRelease(v26, 1);
        v27 = *(void **)(ThreadWin32Thread + 72);
        if ( v27 )
        {
          Win32FreePool(v27);
          *(_QWORD *)(ThreadWin32Thread + 72) = 0LL;
        }
      }
    }
    UMPDREF::~UMPDREF((void **)&v30);
    return 1LL;
  }
  if ( a3 )
    goto LABEL_9;
LABEL_48:
  UMPDREF::~UMPDREF((void **)&v30);
  return 0LL;
}
