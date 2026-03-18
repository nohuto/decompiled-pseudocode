/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0097D70
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        unsigned int a2,
        ULONG_PTR a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // r12
  __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // r14
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rsi
  __int64 v35; // rax
  _QWORD *v36; // r13
  unsigned int v37; // [rsp+40h] [rbp-358h]
  int v38; // [rsp+44h] [rbp-354h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR v41; // [rsp+68h] [rbp-330h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-328h] BYREF
  __int128 v43; // [rsp+80h] [rbp-318h]
  __int64 v44; // [rsp+90h] [rbp-308h]
  __int128 v45; // [rsp+98h] [rbp-300h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-2F0h]
  __int64 v47; // [rsp+B0h] [rbp-2E8h]
  __int128 v48; // [rsp+D0h] [rbp-2C8h]
  __int128 v49; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-2A8h]
  _BYTE v51[96]; // [rsp+100h] [rbp-298h] BYREF
  _BYTE v52[512]; // [rsp+160h] [rbp-238h] BYREF
  int v53; // [rsp+3D0h] [rbp+38h]

  v41 = a3;
  v39 = a2;
  v53 = a7 & 1;
  v9 = (unsigned __int16)a3 & 0x8000;
  memset_0(v51, 0, sizeof(v51));
  v42 = 0LL;
  v38 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v10 + 472);
  else
    v12 = 0LL;
  v13 = 0LL;
  v37 = 0;
  if ( v9 && a4 && a4 >= MmSystemRangeStart )
  {
    v13 = *(unsigned int *)a4;
    v37 = *(_DWORD *)a4;
  }
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v14;
  if ( v14 > 0x800 )
  {
    v35 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v15 = (unsigned int *)v35;
    if ( v35 )
    {
      v36 = (_QWORD *)(v35 + 32);
      *(_QWORD *)(v35 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v35 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        *((_QWORD *)v15 + 2) = *v36;
        *v15 = 104;
        goto LABEL_12;
      }
      Win32FreePool(v15);
    }
  }
  else
  {
    if ( v14 + 104 <= 0x200 )
    {
      v15 = (unsigned int *)v52;
      memset_0(v52, 0, sizeof(v52));
LABEL_11:
      *((_QWORD *)v15 + 2) = v15 + 26;
      *((_QWORD *)v15 + 4) = 0LL;
      *v15 = RegionSize + 104;
LABEL_12:
      v15[1] = RegionSize;
      v15[2] = 0;
      v15[6] = 96;
      goto LABEL_13;
    }
    v15 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v14 + 104), 1667461973LL);
    if ( v15 )
      goto LABEL_11;
  }
  v15 = 0LL;
LABEL_13:
  if ( !v15 )
    return 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v45 = 0LL;
  v46 = 0LL;
  if ( v15 != (unsigned int *)v51 && v15 != (unsigned int *)v52 )
    PushW32ThreadLock((__int64)v15, &v45, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v12;
  v15[12] = v39;
  *((_QWORD *)v15 + 7) = v41;
  if ( v37 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *(_DWORD *)a4, (void **)v15 + 10) < 0 )
      goto LABEL_43;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  v15[22] = v53;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  ThreadLock(a1, &v49);
  v16 = *(_QWORD *)(v10 + 480);
  v48 = *(_OWORD *)(v16 + 64);
  v43 = v48;
  v44 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  v17 = 0LL;
  if ( a1 )
    v17 = *a1;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v18;
  v23 = !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v24 = KeUserModeCallback(28LL, v15, *v15, &v42, &v38);
  EtwTraceEndCallback(28LL);
  if ( v23 )
    EnterSharedCrit(v26, v25, v27);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v31 + 64) = v48;
  *(_QWORD *)(v31 + 80) = v44;
  if ( v24 >= 0 && v38 == 24 )
  {
    v32 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v47 = *v32;
    goto LABEL_36;
  }
LABEL_43:
  v33 = 0LL;
LABEL_36:
  if ( v15 != (unsigned int *)v51 && v15 != (unsigned int *)v52 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      v41 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &v41, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v45);
  }
  return v33;
}
