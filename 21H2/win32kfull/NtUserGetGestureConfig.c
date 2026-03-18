/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01F4080
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0221144 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  int v7; // r12d
  __int64 v9; // rdx
  struct tagWND *v10; // rsi
  __int64 v11; // r8
  int GestureConfigSettings; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  size_t v21; // r15
  __int64 v22; // rcx
  void *v23; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v25; // rcx
  _BYTE v27[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-74h]
  void *v29; // [rsp+38h] [rbp-70h]
  __int128 v30; // [rsp+68h] [rbp-40h] BYREF
  __int64 v31; // [rsp+78h] [rbp-30h]

  v7 = a3;
  v29 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v31 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v27);
  v10 = (struct tagWND *)ValidateHwnd(a1);
  if ( v10 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v30 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v30;
    *((_QWORD *)&v30 + 1) = v10;
    HMLockObject(v10);
    if ( a6 == 12 )
    {
      if ( (v7 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v14);
        GestureConfigSettings = 0;
LABEL_21:
        ThreadUnlock1(v17, v16, v18);
        goto LABEL_22;
      }
      v19 = *((_QWORD *)v10 + 5);
      if ( *(char *)(v19 + 20) < 0 || *(char *)(v19 + 19) < 0 )
      {
        v15 = 1400LL;
        goto LABEL_20;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v28 = *a4;
        v20 = v28;
        if ( v28 - 1 <= 0xFF )
        {
          v21 = 12 * v28;
          v23 = (void *)Win32AllocPoolWithQuotaZInit(v21, 1667724117LL);
          v29 = v23;
          if ( v23 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22);
            ProbeForWrite(Address, 12 * v20, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v23, (const void *)Address, v21);
            GestureConfigSettings = GetGestureConfigSettings(v10, (__int64)v23);
            if ( GestureConfigSettings )
              memmove((void *)Address, v23, v21);
            if ( v23 )
              Win32FreePool(v23);
            goto LABEL_21;
          }
          v15 = 8LL;
          goto LABEL_20;
        }
      }
    }
    v15 = 87LL;
LABEL_20:
    GestureConfigSettings = 0;
    UserSetLastError(v15, v14);
    goto LABEL_21;
  }
  GestureConfigSettings = 0;
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27, v9, v11);
  UserSessionSwitchLeaveCrit(v25);
  return GestureConfigSettings;
}
