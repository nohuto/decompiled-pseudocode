/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C0020F50
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0023CD4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C01692B4 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1C0169610 (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     ?IsUtf8Process@@YAEPEAUtagWND@@@Z @ 0x1C0169664 (-IsUtf8Process@@YAEPEAUtagWND@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     _W32ExceptionHandler @ 0x1C025CF24 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r12d
  int v10; // r14d
  unsigned __int8 *v11; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  int v20; // r9d
  int v21; // ebx
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  unsigned __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // r8
  unsigned __int8 *result; // rax
  struct _KTHREAD *v34; // r12
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  CHAR *v38; // rdx
  void **v39; // r9
  struct _CAPTUREBUF *v40; // rcx
  unsigned int v41; // r8d
  unsigned int v42; // r8d
  int v43; // ebx
  CHAR *v44; // rax
  int v45; // r8d
  void **v46; // r9
  unsigned int v47; // r8d
  CHAR *v48; // rdx
  int v49; // eax
  unsigned int v50; // r8d
  struct _KTHREAD *v51; // r14
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rax
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  struct _KTHREAD *v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rax
  __int64 *v66; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v69; // rcx
  bool v70; // di
  int v71; // r12d
  struct _KTHREAD *v72; // r15
  __int64 v73; // r14
  __int64 v74; // rax
  int v75; // edi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 *v78; // rax
  unsigned int v79; // eax
  tagDomLock *v80; // rax
  __int64 v81; // rax
  __int64 *v82; // rcx
  __int64 v83; // rbx
  int v84; // [rsp+30h] [rbp-3B8h]
  char v85; // [rsp+34h] [rbp-3B4h]
  unsigned int v86; // [rsp+38h] [rbp-3B0h] BYREF
  unsigned int v87; // [rsp+3Ch] [rbp-3ACh] BYREF
  CHAR v88; // [rsp+40h] [rbp-3A8h]
  unsigned __int8 *v89; // [rsp+48h] [rbp-3A0h]
  int v90; // [rsp+50h] [rbp-398h] BYREF
  __int16 v91; // [rsp+54h] [rbp-394h]
  unsigned int v92; // [rsp+58h] [rbp-390h]
  int v93; // [rsp+5Ch] [rbp-38Ch] BYREF
  __int64 v94; // [rsp+60h] [rbp-388h]
  unsigned __int64 v95; // [rsp+68h] [rbp-380h] BYREF
  __int64 v96; // [rsp+70h] [rbp-378h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-370h] BYREF
  __int128 v98; // [rsp+80h] [rbp-368h] BYREF
  __int64 v99; // [rsp+90h] [rbp-358h]
  __int128 v100; // [rsp+98h] [rbp-350h]
  __int64 v101; // [rsp+A8h] [rbp-340h]
  __int128 v102; // [rsp+B0h] [rbp-338h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-328h]
  __int64 v104; // [rsp+C8h] [rbp-320h]
  __int128 v105; // [rsp+E0h] [rbp-308h] BYREF
  __int128 v106; // [rsp+F0h] [rbp-2F8h] BYREF
  _DWORD v107[44]; // [rsp+100h] [rbp-2E8h] BYREF
  unsigned __int8 v108[512]; // [rsp+1B0h] [rbp-238h] BYREF

  v96 = a3;
  v92 = a2;
  v86 = 0;
  v87 = 0;
  v9 = 0;
  v10 = a7 & 1;
  v84 = IsUtf8Process(a1);
  memset(v107, 0, 0xA8uLL);
  v11 = (unsigned __int8 *)v107;
  v95 = 0LL;
  v90 = 0;
  v98 = 0LL;
  v99 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v94 = 0LL;
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v17 = *ThreadWin32Thread;
    v94 = v17;
  }
  else
  {
    v17 = 0LL;
  }
  if ( a1 )
    v18 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v17 + 472);
  else
    v18 = 0LL;
  if ( a4 )
  {
    v19 = *(_QWORD *)(a4 + 56);
    if ( !v19
      || (v20 = *(_DWORD *)(a4 + 84), (unsigned int)v20 >> 31 == v10) && v19 < (unsigned __int64)MmSystemRangeStart )
    {
      v21 = v84;
    }
    else
    {
      v21 = v84;
      if ( (a7 & 1) != 0 && *(int *)(a4 + 84) >= 0 && v84 )
      {
        v105 = *(_OWORD *)(a4 + 80);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v105, &v86) )
          goto LABEL_129;
      }
      else
      {
        v22 = *(_DWORD *)(a4 + 80);
        v23 = -1;
        if ( v22 + 2 >= v22 )
          v23 = v22 + 2;
        v86 = v23;
        if ( v22 + 2 < v22 )
          goto LABEL_129;
        if ( v20 < 0 && (a7 & 1) == 0 )
        {
          v24 = 2LL * v23;
          v25 = -1;
          if ( v24 <= 0xFFFFFFFF )
            v25 = 2 * v23;
          v86 = v25;
          if ( v24 > 0xFFFFFFFF )
            goto LABEL_129;
        }
      }
      v9 = 1;
    }
    v26 = *(_QWORD *)(a4 + 64);
    if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v27 = *(_DWORD *)(a4 + 100) >> 31;
      if ( v27 != v10 || v26 >= (unsigned __int64)MmSystemRangeStart )
      {
        if ( (a7 & 1) != 0 && *(int *)(a4 + 100) >= 0 && v21 )
        {
          v106 = *(_OWORD *)(a4 + 96);
          if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v106, &v87) )
            goto LABEL_129;
        }
        else
        {
          v28 = *(_DWORD *)(a4 + 96);
          v29 = -1;
          if ( v28 + 2 >= v28 )
            v29 = v28 + 2;
          v87 = v29;
          if ( v28 + 2 < v28 )
            goto LABEL_129;
          if ( v27 && (a7 & 1) == 0 )
          {
            v30 = 2LL * v29;
            v31 = -1;
            if ( v30 <= 0xFFFFFFFF )
              v31 = 2 * v29;
            v87 = v31;
            if ( v30 > 0xFFFFFFFF )
              goto LABEL_129;
          }
        }
        ++v9;
      }
    }
  }
  v32 = v86 + v87;
  if ( (unsigned int)v32 < v86 || (unsigned int)v32 >= 0x7FFFFFFF )
    goto LABEL_129;
  if ( v9 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v9, v32, v108, 1, 0x200uLL);
    v11 = result;
    v89 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v107;
    v89 = (unsigned __int8 *)v107;
    memset(&v107[1], 0, 0xA4uLL);
    v107[0] = 168;
  }
  v34 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v35 = PsGetCurrentProcess(),
        v36 = PsGetProcessSessionIdEx(v35),
        v37 = PsGetCurrentThreadProcess(),
        v36 == (unsigned int)PsGetProcessSessionIdEx(v37)) )
  {
    PsGetThreadWin32Thread(v34);
  }
  v102 = 0LL;
  v103 = 0LL;
  if ( v11 != (unsigned __int8 *)v107 && v11 != v108 )
    PushW32ThreadLock(v11, &v102, Win32FreePool);
  *((_QWORD *)v11 + 5) = v18;
  *((_DWORD *)v11 + 12) = v92;
  *((_QWORD *)v11 + 7) = v96;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( !a4 )
    goto LABEL_89;
  *(_DWORD *)(a4 + 52) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_OWORD *)(v11 + 72) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 88) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v11 + 104) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v11 + 120) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v11 + 136) = *(_OWORD *)(a4 + 64);
  if ( !v86 )
    goto LABEL_78;
  if ( *(int *)(a4 + 84) < 0 )
  {
    v44 = *(CHAR **)(a4 + 56);
    v88 = *v44;
    if ( v88 == -1 )
    {
      if ( (a7 & 1) != 0 )
      {
        v41 = 3;
        v38 = v44;
      }
      else
      {
        v93 = ((unsigned __int16)(*(_DWORD *)v44 >> 8) << 16) | 0xFFFF;
        v41 = 4;
        v38 = (CHAR *)&v93;
      }
      v39 = (void **)(v11 + 128);
      v40 = (struct _CAPTUREBUF *)v11;
    }
    else
    {
      v39 = (void **)(v11 + 128);
      v45 = *(_DWORD *)(a4 + 80);
      v38 = *(CHAR **)(a4 + 88);
      v40 = (struct _CAPTUREBUF *)v11;
      if ( (a7 & 1) == 0 )
      {
        if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v38, 2 * v45 + 2, v39) < 0 )
          goto LABEL_129;
LABEL_78:
        v43 = v84;
        goto LABEL_79;
      }
      v41 = v45 + 1;
    }
LABEL_63:
    if ( CaptureCallbackData(v40, v38, v41, v39) < 0 )
      goto LABEL_129;
    goto LABEL_78;
  }
  v38 = *(CHAR **)(a4 + 56);
  v91 = *(_WORD *)v38;
  v39 = (void **)(v11 + 128);
  v40 = (struct _CAPTUREBUF *)v11;
  if ( v91 == -1 )
  {
    if ( (a7 & 1) != 0 )
    {
      ++v38;
      v41 = 3;
    }
    else
    {
      v41 = 4;
    }
    goto LABEL_63;
  }
  v42 = *(_DWORD *)(a4 + 80);
  v38 = *(CHAR **)(a4 + 88);
  if ( (a7 & 1) == 0 )
  {
    v41 = v42 + 2;
    goto LABEL_63;
  }
  v43 = v84;
  if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v38, (PCWCH)((v42 >> 1) + 1), v39, v84) < 0 )
    goto LABEL_129;
LABEL_79:
  if ( v87 )
  {
    v46 = (void **)(v11 + 136);
    v47 = *(_DWORD *)(a4 + 96);
    v48 = *(CHAR **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v49 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v48, 2 * v47 + 2, v46);
LABEL_88:
        if ( v49 < 0 )
          goto LABEL_129;
        goto LABEL_89;
      }
      v50 = v47 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v49 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v48, (PCWCH)((v47 >> 1) + 1), v46, v43);
        goto LABEL_88;
      }
      v50 = v47 + 2;
    }
    v49 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v48, v50, v46);
    goto LABEL_88;
  }
LABEL_89:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v53 = PsGetCurrentProcess(),
        v54 = PsGetProcessSessionIdEx(v53),
        v55 = PsGetCurrentThreadProcess(),
        v54 == (unsigned int)PsGetProcessSessionIdEx(v55)) )
  {
    v56 = (__int64 *)PsGetThreadWin32Thread(v51);
    if ( v56 )
      v52 = *v56;
  }
  *(_QWORD *)&v98 = *(_QWORD *)(v52 + 416);
  *(_QWORD *)(v52 + 416) = &v98;
  *((_QWORD *)&v98 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v57 = v94;
  v58 = *(_QWORD *)(v94 + 480);
  v100 = *(_OWORD *)(v58 + 64);
  v101 = *(_QWORD *)(v58 + 80);
  *(_QWORD *)(v58 + 72) = v18;
  if ( a1 )
    v59 = *(_QWORD *)a1;
  else
    v59 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v57 + 480) + 64LL) = v59;
  if ( a1 )
    v60 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v60 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v57 + 480) + 80LL) = v60;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v61 = KeGetCurrentThread();
  v62 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v63 = PsGetCurrentProcess(),
        v64 = PsGetProcessSessionIdEx(v63),
        v65 = PsGetCurrentThreadProcess(),
        v64 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
  {
    v66 = (__int64 *)PsGetThreadWin32Thread(v61);
    if ( v66 )
      v62 = *v66;
  }
  v85 = *(_BYTE *)(v62 + 1480);
  *(_BYTE *)(v62 + 1480) = 0;
  if ( (v85 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v62 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v70 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v69);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v71 = KeUserModeCallback(10LL, v11, *(unsigned int *)v11, &v95, &v90);
  EtwTraceEndCallback(10LL);
  if ( v70 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v72 = KeGetCurrentThread();
  v73 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v74 = PsGetCurrentProcess(),
        v75 = PsGetProcessSessionIdEx(v74),
        v76 = PsGetCurrentThreadProcess(),
        v75 == (unsigned int)PsGetProcessSessionIdEx(v76)) )
  {
    v78 = (__int64 *)PsGetThreadWin32Thread(v72);
    if ( v78 )
      v73 = *v78;
  }
  if ( (v85 & 1) != 0 )
  {
    v79 = DLT_THREADINFO::getDLT();
    v80 = (tagDomLock *)GetDomainLockRef(v79);
    tagDomLock::LockShared(v80);
    tagObjLock::LockExclusive((tagObjLock *)(v73 + 392));
  }
  *(_BYTE *)(v73 + 1480) = v85;
  ThreadUnlock1(v77);
  v81 = *(_QWORD *)(v94 + 480);
  *(_OWORD *)(v81 + 64) = v100;
  *(_QWORD *)(v81 + 80) = v101;
  if ( v71 >= 0 && v90 == 24 )
  {
    v82 = (__int64 *)v95;
    if ( v95 + 8 < v95 || v95 + 8 > MmUserProbeAddress )
      v82 = (__int64 *)MmUserProbeAddress;
    v83 = *v82;
    v104 = *v82;
    goto LABEL_130;
  }
LABEL_129:
  v83 = 0LL;
LABEL_130:
  if ( v11 != (unsigned __int8 *)v107 && v11 != v108 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v102);
  }
  return (unsigned __int8 *)v83;
}
