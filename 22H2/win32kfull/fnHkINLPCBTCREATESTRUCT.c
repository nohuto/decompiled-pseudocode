/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C001E5E0
 * Callers:
 *     xxxHkCallHook @ 0x1C005CA10 (xxxHkCallHook.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0023CD4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C01692B4 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(unsigned int a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r14d
  __int64 *ThreadDesktopWindow; // r15
  unsigned __int8 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  _OWORD *v17; // rax
  void **v18; // r9
  unsigned int v19; // r8d
  CHAR *v20; // rdx
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  ULONG64 v33; // rcx
  __int128 v34; // xmm4
  __int128 v35; // xmm5
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  int v39; // edx
  unsigned int v40; // eax
  CHAR *v41; // rdx
  void **v42; // r9
  struct _CAPTUREBUF *v43; // rcx
  unsigned int v44; // r8d
  int v45; // eax
  unsigned int v46; // r8d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  CHAR *v49; // rax
  int v50; // r8d
  char v51; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v52[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-4E4h]
  unsigned int v54; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-4D8h]
  CHAR v56; // [rsp+48h] [rbp-4D0h]
  int v57; // [rsp+4Ch] [rbp-4CCh] BYREF
  int v58; // [rsp+50h] [rbp-4C8h] BYREF
  __int16 v59; // [rsp+54h] [rbp-4C4h]
  unsigned int v60; // [rsp+58h] [rbp-4C0h]
  unsigned __int64 v61; // [rsp+88h] [rbp-490h] BYREF
  unsigned int v62; // [rsp+90h] [rbp-488h]
  __int64 v63; // [rsp+A8h] [rbp-470h]
  __int64 v64; // [rsp+B0h] [rbp-468h]
  __int128 v65; // [rsp+B8h] [rbp-460h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-450h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-448h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-438h]
  __int128 v69; // [rsp+E8h] [rbp-430h]
  __int64 v70; // [rsp+F8h] [rbp-420h]
  __int128 v71; // [rsp+100h] [rbp-418h] BYREF
  __int64 v72; // [rsp+110h] [rbp-408h]
  __int64 v73; // [rsp+130h] [rbp-3E8h]
  _OWORD v74[8]; // [rsp+160h] [rbp-3B8h] BYREF
  __int128 v75; // [rsp+1E0h] [rbp-338h]
  __int64 v76; // [rsp+210h] [rbp-308h]
  _DWORD v77[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v78[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v64 = a4;
  v63 = a2;
  v60 = a1;
  v53 = 0;
  v54 = 0;
  v6 = 0;
  memset(v74, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
  memset(v77, 0, 0xA8uLL);
  v8 = (unsigned __int8 *)v77;
  v61 = 0LL;
  v58 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v65 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v10 = ThreadDesktopWindow[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v10 = 0LL;
  v11 = *a3;
  v12 = *(_QWORD *)(*a3 + 56);
  if ( v12 )
  {
    v39 = *(_DWORD *)(v11 + 84) >> 31;
    if ( v39 != a5 || v12 >= (unsigned __int64)MmSystemRangeStart )
    {
      v40 = *(_DWORD *)(v11 + 80);
      if ( v40 + 2 < v40 )
        goto LABEL_60;
      v53 = v40 + 2;
      if ( v39 && !a5 )
      {
        v47 = 2LL * (v40 + 2);
        if ( v47 > 0xFFFFFFFF )
          goto LABEL_60;
        v53 = v47;
      }
      v6 = 1;
    }
  }
  v13 = *(_QWORD *)(v11 + 64);
  if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v14 = *(_DWORD *)(v11 + 100) >> 31;
    if ( v14 != a5 || v13 >= (unsigned __int64)MmSystemRangeStart )
    {
      v15 = *(_DWORD *)(v11 + 96);
      if ( v15 + 2 < v15 )
        goto LABEL_60;
      v54 = v15 + 2;
      if ( v14 && !a5 )
      {
        v48 = 2LL * (v15 + 2);
        if ( v48 > 0xFFFFFFFF )
          goto LABEL_60;
        v54 = v48;
      }
      ++v6;
    }
  }
  v16 = v53 + v54;
  if ( (unsigned int)v16 < v53 )
    goto LABEL_60;
  v62 = v53 + v54;
  if ( v6 )
  {
    v8 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v6, v16, v78, 1, 0x200uLL);
    v55 = v8;
    if ( !v8 )
      return 0LL;
  }
  else
  {
    v8 = (unsigned __int8 *)v77;
    v55 = (unsigned __int8 *)v77;
    memset(&v77[1], 0, 0xA4uLL);
    v77[0] = 168;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v71 = 0LL;
  v72 = 0LL;
  if ( v8 != (unsigned __int8 *)v77 && v8 != v78 )
    PushW32ThreadLock(v8, &v71, Win32FreePool);
  *((_QWORD *)v8 + 5) = v10;
  *((_DWORD *)v8 + 12) = v60;
  *((_QWORD *)v8 + 7) = v63;
  *(_DWORD *)(*a3 + 52) = 0;
  *(_DWORD *)(*a3 + 76) = 0;
  v17 = (_OWORD *)*a3;
  *((_OWORD *)v8 + 4) = *(_OWORD *)*a3;
  *((_OWORD *)v8 + 5) = v17[1];
  *((_OWORD *)v8 + 6) = v17[2];
  *((_OWORD *)v8 + 7) = v17[3];
  *((_OWORD *)v8 + 8) = v17[4];
  if ( v53 )
  {
    if ( *(int *)(v11 + 84) < 0 )
    {
      v49 = *(CHAR **)(v11 + 56);
      v56 = *v49;
      if ( v56 == -1 )
      {
        if ( a5 )
        {
          v46 = 3;
          v41 = v49;
        }
        else
        {
          v57 = 0;
          v57 = ((unsigned __int16)(*(_DWORD *)v49 >> 8) << 16) | 0xFFFF;
          v46 = 4;
          v41 = (CHAR *)&v57;
        }
        v42 = (void **)(v8 + 120);
        v43 = (struct _CAPTUREBUF *)v8;
      }
      else
      {
        v42 = (void **)(v8 + 120);
        v50 = *(_DWORD *)(v11 + 80);
        v41 = *(CHAR **)(v11 + 88);
        v43 = (struct _CAPTUREBUF *)v8;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v8, v41, 2 * v50 + 2, v42) < 0 )
            goto LABEL_60;
          goto LABEL_17;
        }
        v46 = v50 + 1;
      }
    }
    else
    {
      v41 = *(CHAR **)(v11 + 56);
      v59 = *(_WORD *)v41;
      v42 = (void **)(v8 + 120);
      v43 = (struct _CAPTUREBUF *)v8;
      if ( v59 == -1 )
      {
        if ( a5 )
        {
          ++v41;
          v46 = 3;
        }
        else
        {
          v46 = 4;
        }
      }
      else
      {
        v44 = *(_DWORD *)(v11 + 80);
        v41 = *(CHAR **)(v11 + 88);
        if ( a5 )
        {
          v45 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v8, (PCWCH)v41, (PCWCH)((v44 >> 1) + 1), v42, 0);
          goto LABEL_59;
        }
        v46 = v44 + 2;
      }
    }
    v45 = CaptureCallbackData(v43, v41, v46, v42);
LABEL_59:
    if ( v45 < 0 )
      goto LABEL_60;
  }
LABEL_17:
  if ( v54 )
  {
    v18 = (void **)(v8 + 128);
    v19 = *(_DWORD *)(v11 + 96);
    v20 = *(CHAR **)(v11 + 104);
    if ( *(int *)(v11 + 100) < 0 )
    {
      if ( a5 )
      {
        v21 = v19 + 1;
        goto LABEL_21;
      }
      v22 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v8, v20, 2 * v19 + 2, v18);
    }
    else
    {
      if ( !a5 )
      {
        v21 = v19 + 2;
LABEL_21:
        v22 = CaptureCallbackData((struct _CAPTUREBUF *)v8, v20, v21, v18);
        goto LABEL_22;
      }
      v22 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v8, (PCWCH)v20, (PCWCH)((v19 >> 1) + 1), v18, 0);
    }
LABEL_22:
    if ( v22 < 0 )
      goto LABEL_60;
  }
  *((_QWORD *)v8 + 18) = a3[1];
  *((_QWORD *)v8 + 19) = v64;
  *((_DWORD *)v8 + 40) = a5;
  v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v67 = *(_QWORD *)(v23 + 416);
  *(_QWORD *)(v23 + 416) = &v67;
  *((_QWORD *)&v67 + 1) = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    HMLockObject(ThreadDesktopWindow);
  v24 = v65;
  v25 = *(_QWORD *)(v65 + 480);
  v65 = *(_OWORD *)(v25 + 64);
  v69 = v65;
  v70 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v10;
  if ( ThreadDesktopWindow )
    v26 = *ThreadDesktopWindow;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 480) + 64LL) = v26;
  if ( ThreadDesktopWindow )
    v27 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 480) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v52);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v28 = KeUserModeCallback(42LL, v8, *(unsigned int *)v8, &v61, &v58);
  EtwTraceEndCallback(42LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v52);
  ThreadUnlock1();
  v29 = *(_QWORD *)(v24 + 480);
  *(_OWORD *)(v29 + 64) = v65;
  *(_QWORD *)(v29 + 80) = v70;
  if ( v28 >= 0 && v58 == 24 )
  {
    v30 = (__int64 *)v61;
    if ( v61 + 8 < v61 || v61 + 8 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v31 = *v30;
    v73 = *v30;
    v32 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v32 || (*(_DWORD *)(v32 + 84) & 1) == 0 || *(_OWORD **)(v32 + 96) != v74 )
    {
      v33 = *(_QWORD *)(v61 + 16);
      if ( v33 + 88 < v33 || v33 + 88 > MmUserProbeAddress )
        v33 = MmUserProbeAddress;
      v34 = *(_OWORD *)v33;
      v35 = *(_OWORD *)(v33 + 16);
      v75 = *(_OWORD *)(v33 + 32);
      v36 = *(_OWORD *)(v33 + 48);
      v37 = *(_OWORD *)(v33 + 64);
      v76 = *(_QWORD *)(v33 + 80);
      v74[0] = v34;
      v74[1] = v35;
      v74[2] = v75;
      v74[3] = v36;
      v74[4] = v37;
      *(_QWORD *)&v74[5] = v76;
      a3[1] = v76;
      *(_OWORD *)(*a3 + 32) = v75;
      goto LABEL_42;
    }
  }
LABEL_60:
  v31 = 0LL;
LABEL_42:
  if ( v8 != (unsigned __int8 *)v77 && v8 != v78 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v71);
  }
  return v31;
}
