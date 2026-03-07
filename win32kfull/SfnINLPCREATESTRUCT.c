__int64 __fastcall SfnINLPCREATESTRUCT(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  int v11; // r13d
  int *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r13
  unsigned int v20; // r8d
  unsigned __int64 v21; // rcx
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r12d
  void **v29; // r9
  unsigned int v30; // r8d
  void *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  bool v37; // al
  bool v38; // bl
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rbx
  _WORD *v47; // rcx
  void **v48; // r9
  unsigned int v49; // r8d
  void *v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  int *v54; // rdx
  unsigned int v55; // r8d
  int *v56; // rax
  void **v57; // r9
  int v58; // r8d
  void *v59; // rdx
  unsigned int v60; // [rsp+30h] [rbp-3F8h]
  int v61; // [rsp+34h] [rbp-3F4h] BYREF
  char v62; // [rsp+38h] [rbp-3F0h]
  int *v63; // [rsp+40h] [rbp-3E8h]
  int v64; // [rsp+48h] [rbp-3E0h] BYREF
  __int128 v65; // [rsp+50h] [rbp-3D8h]
  __int16 v66; // [rsp+60h] [rbp-3C8h]
  int v67; // [rsp+64h] [rbp-3C4h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-398h] BYREF
  ULONG_PTR v69; // [rsp+98h] [rbp-390h] BYREF
  unsigned __int64 v70[4]; // [rsp+A0h] [rbp-388h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-368h]
  __int64 v72; // [rsp+D0h] [rbp-358h]
  __int128 v73; // [rsp+D8h] [rbp-350h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-340h]
  __int64 v75; // [rsp+108h] [rbp-320h]
  __int128 v76; // [rsp+128h] [rbp-300h] BYREF
  __int64 v77; // [rsp+138h] [rbp-2F0h]
  int v78; // [rsp+140h] [rbp-2E8h] BYREF
  char v79[172]; // [rsp+144h] [rbp-2E4h] BYREF
  _BYTE v80[512]; // [rsp+1F0h] [rbp-238h] BYREF
  int v81; // [rsp+460h] [rbp+38h]

  v69 = a3;
  v67 = a2;
  v9 = 0LL;
  LODWORD(v10) = 0;
  LODWORD(v65) = 0;
  v11 = a7 & 1;
  v81 = v11;
  memset_0(&v78, 0, 0xA8uLL);
  v12 = &v78;
  v70[0] = 0LL;
  v64 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v14 = SGDGetUserSessionState(v13);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  if ( a1 )
    v9 = a1[5] - *(_QWORD *)(v15 + 472);
  if ( !a4 )
  {
    v19 = 1LL;
    v20 = 0;
LABEL_61:
    LODWORD(v24) = v65;
    goto LABEL_21;
  }
  v17 = *(_QWORD *)(a4 + 56);
  if ( !v17 || *(_DWORD *)(a4 + 84) >> 31 == v11 && v17 < (unsigned __int64)MmSystemRangeStart )
  {
    v20 = 0;
    v19 = 1LL;
  }
  else
  {
    v18 = *(_DWORD *)(a4 + 80);
    v10 = v18 + 2;
    if ( (unsigned int)v10 < v18 )
      goto LABEL_66;
    if ( *(int *)(a4 + 84) < 0 && !v11 )
    {
      v10 *= 2LL;
      if ( v10 > 0xFFFFFFFF )
        goto LABEL_66;
    }
    v19 = 1LL;
    v20 = 1;
  }
  v21 = *(_QWORD *)(a4 + 64);
  if ( (v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_61;
  v22 = *(_DWORD *)(a4 + 100) >> 31;
  if ( v22 == v81 && v21 < (unsigned __int64)MmSystemRangeStart )
    goto LABEL_61;
  v23 = *(_DWORD *)(a4 + 96);
  v24 = v23 + 2;
  *(_QWORD *)&v65 = v24;
  if ( (unsigned int)v24 < v23 )
    goto LABEL_66;
  if ( v22 && !v81 )
  {
    v52 = 2LL * (unsigned int)v65;
    *(_QWORD *)&v65 = v52;
    if ( v52 > 0xFFFFFFFF )
      goto LABEL_66;
    LODWORD(v24) = v52;
  }
  ++v20;
LABEL_21:
  if ( (int)v24 + (int)v10 < (unsigned int)v10 )
    goto LABEL_66;
  if ( v20 )
  {
    v60 = 8 * v20 + 168;
    v25 = ((unsigned int)(v24 + v10) + 7LL * v20) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v25;
    if ( v25 > 0x800 )
    {
      v53 = Win32AllocPoolWithQuotaZInit(8 * v20 + 168, 1667461973LL);
      v12 = (int *)v53;
      if ( v53 )
      {
        *(_QWORD *)(v53 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v53 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v12 + 2) = *((_QWORD *)v12 + 4);
          v26 = v60;
          goto LABEL_27;
        }
        Win32FreePool(v12);
      }
    }
    else
    {
      if ( v25 + 8 * v20 + 168 <= 0x200 )
      {
        v12 = (int *)v80;
        memset_0(v80, 0, sizeof(v80));
LABEL_26:
        *((_QWORD *)v12 + 2) = (char *)v12 + v60;
        *((_QWORD *)v12 + 4) = 0LL;
        v26 = (unsigned int)RegionSize + v60;
LABEL_27:
        *v12 = v26;
        *(_QWORD *)(v12 + 1) = (unsigned int)RegionSize;
        v12[6] = 168;
        v63 = v12;
        goto LABEL_28;
      }
      v12 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)v25 + 8 * v20 + 168, 1667461973LL);
      if ( v12 )
        goto LABEL_26;
    }
    return 0LL;
  }
  v12 = &v78;
  v63 = &v78;
  memset_0(v79, 0, 0xA4uLL);
  v78 = 168;
LABEL_28:
  v27 = SGDGetUserSessionState(v26);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v73 = 0LL;
  v74 = 0LL;
  if ( v12 != &v78 && v12 != (int *)v80 )
    PushW32ThreadLock(v12, &v73, Win32FreePool);
  *((_QWORD *)v12 + 5) = v9;
  v12[12] = v67;
  *((_QWORD *)v12 + 7) = v69;
  if ( !a4 )
    v19 = 0LL;
  *((_QWORD *)v12 + 8) = v19;
  if ( !a4 )
    goto LABEL_42;
  *(_DWORD *)(a4 + 52) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_OWORD *)(v12 + 18) = *(_OWORD *)a4;
  *(_OWORD *)(v12 + 22) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v12 + 26) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v12 + 30) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v12 + 34) = *(_OWORD *)(a4 + 64);
  if ( !(_DWORD)v10 )
  {
    v28 = v81;
    goto LABEL_38;
  }
  if ( *(int *)(a4 + 84) < 0 )
  {
    v56 = *(int **)(a4 + 56);
    v62 = *(_BYTE *)v56;
    v28 = v81;
    if ( v62 != -1 )
    {
      v57 = (void **)(v12 + 32);
      v58 = *(_DWORD *)(a4 + 80);
      v59 = *(void **)(a4 + 88);
      if ( v81 )
      {
        if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, v59, v58 + 1, v57) < 0 )
          goto LABEL_66;
      }
      else if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, (CHAR *)v59, 2 * v58 + 2, v57) < 0 )
      {
        goto LABEL_66;
      }
      goto LABEL_38;
    }
    if ( v81 )
    {
      v48 = (void **)(v12 + 32);
      v55 = 3;
      v54 = v56;
      goto LABEL_92;
    }
    v61 = 0;
    v61 = ((unsigned __int16)((unsigned int)*v56 >> 8) << 16) | 0xFFFF;
    v48 = (void **)(v12 + 32);
    v54 = &v61;
LABEL_91:
    v55 = 4;
    goto LABEL_92;
  }
  v47 = *(_WORD **)(a4 + 56);
  v66 = *v47;
  v48 = (void **)(v12 + 32);
  v28 = v81;
  if ( v66 == -1 )
  {
    if ( v81 )
    {
      v54 = (int *)((char *)v47 + 1);
      v55 = 3;
LABEL_92:
      v51 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v54, v55, v48);
      goto LABEL_69;
    }
    v54 = (int *)v47;
    goto LABEL_91;
  }
  v49 = *(_DWORD *)(a4 + 80);
  v50 = *(void **)(a4 + 88);
  if ( !v81 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, v50, v49 + 2, v48) < 0 )
      goto LABEL_66;
LABEL_38:
    if ( !(_DWORD)v65 )
      goto LABEL_42;
    v29 = (void **)(v12 + 34);
    v30 = *(_DWORD *)(a4 + 96);
    v31 = *(void **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( v28 )
      {
        if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, v31, v30 + 1, v29) < 0 )
          goto LABEL_66;
      }
      else if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, (CHAR *)v31, 2 * v30 + 2, v29) < 0 )
      {
        goto LABEL_66;
      }
    }
    else
    {
      if ( !v28 )
      {
        if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, v31, v30 + 2, v29) >= 0 )
          goto LABEL_42;
LABEL_66:
        v45 = 0LL;
        goto LABEL_58;
      }
      if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v31, (v30 >> 1) + 1, v29) < 0 )
        goto LABEL_66;
    }
LABEL_42:
    *((_QWORD *)v12 + 19) = a5;
    *((_QWORD *)v12 + 20) = a6;
    ThreadLock(a1, &v76);
    v32 = *(_QWORD *)(v15 + 480);
    v65 = *(_OWORD *)(v32 + 64);
    v71 = v65;
    v72 = *(_QWORD *)(v32 + 80);
    *(_QWORD *)(v32 + 72) = v9;
    if ( a1 )
      v33 = *a1;
    else
      v33 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v15 + 480) + 64LL) = v33;
    if ( a1 )
      v34 = *(_QWORD *)(a1[5] + 224);
    else
      v34 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v15 + 480) + 80LL) = v34;
    v35 = SGDGetUserSessionState(v34);
    v37 = ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v35 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL();
    v38 = v37;
    UserSessionSwitchLeaveCrit(v36);
    EtwTraceBeginCallback(10LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v39 = KeUserModeCallback(10LL, v12, (unsigned int)*v12, v70, &v64);
    EtwTraceEndCallback(10LL);
    if ( v38 )
      EnterSharedCrit();
    else
      EnterCrit(0LL, 0LL);
    ThreadUnlock1(v41, v40, v42);
    v43 = *(_QWORD *)(v15 + 480);
    *(_OWORD *)(v43 + 64) = v65;
    *(_QWORD *)(v43 + 80) = v72;
    if ( v39 >= 0 && v64 == 24 )
    {
      v44 = (__int64 *)v70[0];
      if ( v70[0] + 8 < v70[0] || v70[0] + 8 > MmUserProbeAddress )
        v44 = (__int64 *)MmUserProbeAddress;
      v45 = *v44;
      v75 = *v44;
      goto LABEL_58;
    }
    goto LABEL_66;
  }
  v51 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v50, (v49 >> 1) + 1, v48);
LABEL_69:
  if ( v51 >= 0 )
    goto LABEL_38;
  v45 = 0LL;
LABEL_58:
  if ( v12 != &v78 && v12 != (int *)v80 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      v69 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &v69, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v73);
  }
  return v45;
}
