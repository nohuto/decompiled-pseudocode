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
  __int64 v19; // rcx
  bool v20; // r14
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rsi
  __int64 v32; // rax
  _QWORD *v33; // r13
  unsigned int v34; // [rsp+40h] [rbp-358h]
  int v35; // [rsp+44h] [rbp-354h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR v38; // [rsp+68h] [rbp-330h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-328h] BYREF
  __int128 v40; // [rsp+80h] [rbp-318h]
  __int64 v41; // [rsp+90h] [rbp-308h]
  __int128 v42; // [rsp+98h] [rbp-300h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-2F0h]
  __int64 v44; // [rsp+B0h] [rbp-2E8h]
  __int128 v45; // [rsp+D0h] [rbp-2C8h]
  __int128 v46; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-2A8h]
  _BYTE v48[96]; // [rsp+100h] [rbp-298h] BYREF
  _BYTE v49[512]; // [rsp+160h] [rbp-238h] BYREF
  int v50; // [rsp+3D0h] [rbp+38h]

  v38 = a3;
  v36 = a2;
  v50 = a7 & 1;
  v9 = (unsigned __int16)a3 & 0x8000;
  memset_0(v48, 0, sizeof(v48));
  v39 = 0LL;
  v35 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v10 + 472);
  else
    v12 = 0LL;
  v13 = 0LL;
  v34 = 0;
  if ( v9 && a4 && a4 >= MmSystemRangeStart )
  {
    v13 = *(unsigned int *)a4;
    v34 = *(_DWORD *)a4;
  }
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v14;
  if ( v14 > 0x800 )
  {
    v32 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v15 = (unsigned int *)v32;
    if ( v32 )
    {
      v33 = (_QWORD *)(v32 + 32);
      *(_QWORD *)(v32 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v32 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        *((_QWORD *)v15 + 2) = *v33;
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
      v15 = (unsigned int *)v49;
      memset_0(v49, 0, sizeof(v49));
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v42 = 0LL;
  v43 = 0LL;
  if ( v15 != (unsigned int *)v48 && v15 != (unsigned int *)v49 )
    PushW32ThreadLock(v15, &v42, Win32FreePool);
  *((_QWORD *)v15 + 5) = v12;
  v15[12] = v36;
  *((_QWORD *)v15 + 7) = v38;
  if ( v34 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *(_DWORD *)a4, (void **)v15 + 10) < 0 )
      goto LABEL_43;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  v15[22] = v50;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  ThreadLock(a1, &v46);
  v16 = *(_QWORD *)(v10 + 480);
  v45 = *(_OWORD *)(v16 + 64);
  v40 = v45;
  v41 = *(_QWORD *)(v16 + 80);
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
  v20 = !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v19);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v21 = KeUserModeCallback(28LL, v15, *v15, &v39, &v35);
  EtwTraceEndCallback(28LL);
  if ( v20 )
    EnterSharedCrit(v23, v22, v24);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v28 + 64) = v45;
  *(_QWORD *)(v28 + 80) = v41;
  if ( v21 >= 0 && v35 == 24 )
  {
    v29 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v44 = *v29;
    goto LABEL_36;
  }
LABEL_43:
  v30 = 0LL;
LABEL_36:
  if ( v15 != (unsigned int *)v48 && v15 != (unsigned int *)v49 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      v38 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &v38, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v42);
  }
  return v30;
}
