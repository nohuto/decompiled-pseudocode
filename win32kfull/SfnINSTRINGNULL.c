__int64 __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // r13d
  int *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int v15; // r12d
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  ULONG_PTR v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  void **v22; // r9
  unsigned int v23; // r8d
  CHAR *v24; // rdx
  unsigned int v25; // r8d
  int v26; // eax
  char v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r13
  int v45; // [rsp+34h] [rbp-364h] BYREF
  int *v46; // [rsp+38h] [rbp-360h]
  int v47; // [rsp+40h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR v49; // [rsp+60h] [rbp-338h] BYREF
  __int64 v50; // [rsp+68h] [rbp-330h]
  unsigned __int64 v51; // [rsp+70h] [rbp-328h] BYREF
  __int128 v52; // [rsp+78h] [rbp-320h]
  __int128 v53; // [rsp+90h] [rbp-308h]
  __int64 v54; // [rsp+A0h] [rbp-2F8h]
  __int128 v55; // [rsp+A8h] [rbp-2F0h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-2E0h]
  __int64 v57; // [rsp+C0h] [rbp-2D8h]
  __int128 v58; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-2A8h]
  int v60; // [rsp+100h] [rbp-298h] BYREF
  char v61[92]; // [rsp+104h] [rbp-294h] BYREF
  _BYTE v62[512]; // [rsp+160h] [rbp-238h] BYREF
  int v63; // [rsp+3D0h] [rbp+38h]

  v49 = a3;
  v47 = a2;
  v9 = a7 & 1;
  v63 = v9;
  memset_0(&v60, 0, 0x58uLL);
  v10 = &v60;
  v51 = 0LL;
  v45 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v12 = SGDGetUserSessionState(v11);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v13 = 0LL;
  *(_QWORD *)&v52 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v13 = *ThreadWin32Thread;
    *(_QWORD *)&v52 = *ThreadWin32Thread;
  }
  if ( a1 )
    v50 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v50 = 0LL;
  v15 = 0;
  LODWORD(v16) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != v9) )
  {
    v15 = 1;
    v16 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v16 < *a4 )
      goto LABEL_60;
    if ( a4[1] < 0 && !v9 )
    {
      v16 *= 2LL;
      if ( v16 > 0xFFFFFFFF )
        goto LABEL_60;
    }
  }
  if ( v15 )
  {
    v17 = 8 * v15 + 88;
    v18 = ((unsigned int)v16 + 7LL * v15) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v18;
    if ( v18 > 0x800 )
    {
      v43 = Win32AllocPoolWithQuotaZInit(8 * v15 + 88, 1667461973LL);
      v10 = (int *)v43;
      if ( v43 )
      {
        v44 = (_QWORD *)(v43 + 32);
        *(_QWORD *)(v43 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v43 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v10 + 2) = *v44;
          *v10 = v17;
          goto LABEL_16;
        }
        Win32FreePool(v10);
      }
    }
    else
    {
      if ( v18 + v17 <= 0x200 )
      {
        v10 = (int *)v62;
        memset_0(v62, 0, sizeof(v62));
LABEL_15:
        *((_QWORD *)v10 + 2) = (char *)v10 + v17;
        *((_QWORD *)v10 + 4) = 0LL;
        v19 = (unsigned int)(v17 + RegionSize);
        *v10 = v19;
LABEL_16:
        v10[1] = RegionSize;
        v10[2] = 0;
        v10[6] = 88;
        v46 = v10;
        goto LABEL_17;
      }
      v10 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v18 + v17), 1667461973LL);
      if ( v10 )
        goto LABEL_15;
    }
    return 0LL;
  }
  v10 = &v60;
  v46 = &v60;
  memset_0(v61, 0, 0x54uLL);
  v60 = 88;
LABEL_17:
  v20 = SGDGetUserSessionState(v19);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v55 = 0LL;
  v56 = 0LL;
  if ( v10 != &v60 && v10 != (int *)v62 )
    PushW32ThreadLock(v10, &v55, Win32FreePool);
  v21 = v50;
  *((_QWORD *)v10 + 5) = v50;
  v10[12] = v47;
  *((_QWORD *)v10 + 7) = v49;
  if ( v15 )
  {
    v22 = (void **)(v10 + 20);
    v23 = *a4;
    v24 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( !v63 )
      {
        v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v24, 2 * v23 + 2, v22);
LABEL_27:
        if ( v26 < 0 )
          goto LABEL_60;
        goto LABEL_28;
      }
      v25 = v23 + 1;
    }
    else
    {
      if ( v63 )
      {
        v27 = 1;
        if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v24, (v23 >> 1) + 1, v22) < 0 )
          goto LABEL_60;
        goto LABEL_29;
      }
      v25 = v23 + 2;
    }
    v26 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v24, v25, v22);
    goto LABEL_27;
  }
  if ( a4 )
    v42 = *((_QWORD *)a4 + 1);
  else
    v42 = 0LL;
  *((_QWORD *)v10 + 10) = v42;
LABEL_28:
  v27 = 1;
LABEL_29:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock(a1, &v58);
  v28 = v52;
  v29 = *(_QWORD *)(v52 + 480);
  v52 = *(_OWORD *)(v29 + 64);
  v53 = v52;
  v54 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v21;
  v30 = 0LL;
  if ( a1 )
    v30 = *a1;
  *(_QWORD *)(*(_QWORD *)(v28 + 480) + 64LL) = v30;
  if ( a1 )
    v31 = *(_QWORD *)(a1[5] + 224);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 480) + 80LL) = v31;
  v32 = SGDGetUserSessionState(v31);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v32 + 8)) == 1 || !IS_USERCRIT_OWNED_AT_ALL() )
    v27 = 0;
  UserSessionSwitchLeaveCrit(v33);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v34 = KeUserModeCallback(27LL, v10, (unsigned int)*v10, &v51, &v45);
  EtwTraceEndCallback(27LL);
  if ( v27 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v36, v35, v37);
  v38 = *(_QWORD *)(v28 + 480);
  *(_OWORD *)(v38 + 64) = v52;
  *(_QWORD *)(v38 + 80) = v54;
  if ( v34 >= 0 && v45 == 24 )
  {
    v39 = (__int64 *)v51;
    if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v57 = *v39;
    goto LABEL_44;
  }
LABEL_60:
  v40 = 0LL;
LABEL_44:
  if ( v10 != &v60 && v10 != (int *)v62 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      v49 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &v49, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v55);
  }
  return v40;
}
