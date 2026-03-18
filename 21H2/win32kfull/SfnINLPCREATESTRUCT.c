/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C006ACD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C010B548 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C014A160 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned int v11; // r12d
  int v12; // r14d
  unsigned __int8 *v13; // rdi
  _QWORD *ThreadWin32Thread; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r12
  void **v20; // r9
  unsigned int v21; // r8d
  CHAR *v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v25; // rbx
  __int64 *v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  bool v31; // bl
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rbx
  CHAR *v41; // rdx
  void **v42; // r9
  struct _CAPTUREBUF *v43; // rcx
  unsigned int v44; // r8d
  unsigned int v45; // r8d
  int v46; // eax
  _DWORD *v47; // rax
  int v48; // r8d
  int v49; // [rsp+40h] [rbp-3E8h] BYREF
  int v50; // [rsp+44h] [rbp-3E4h] BYREF
  __int16 v51; // [rsp+48h] [rbp-3E0h]
  int v52; // [rsp+4Ch] [rbp-3DCh]
  _QWORD *v53; // [rsp+78h] [rbp-3B0h]
  unsigned __int64 v54; // [rsp+80h] [rbp-3A8h] BYREF
  __int64 v55; // [rsp+88h] [rbp-3A0h]
  __int128 v56; // [rsp+A8h] [rbp-380h]
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp-370h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-358h]
  __int128 v60; // [rsp+D8h] [rbp-350h]
  __int64 v61; // [rsp+E8h] [rbp-340h]
  __int128 v62; // [rsp+F0h] [rbp-338h] BYREF
  __int64 v63; // [rsp+100h] [rbp-328h]
  __int64 v64; // [rsp+120h] [rbp-308h]
  _DWORD v65[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v66[512]; // [rsp+1F0h] [rbp-238h] BYREF

  *(_QWORD *)&v56 = a3;
  v52 = a2;
  LODWORD(v9) = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  v12 = a7 & 1;
  memset(v65, 0, 0xA8uLL);
  v13 = (unsigned __int8 *)v65;
  v54 = 0LL;
  v50 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v53 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    ThreadWin32Thread = (_QWORD *)*ThreadWin32Thread;
    v53 = ThreadWin32Thread;
  }
  if ( a1 )
    v55 = a1[5] - ThreadWin32Thread[59];
  else
    v55 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 56);
    if ( v15 && (*(_DWORD *)(a4 + 84) >> 31 != v12 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v16 = *(_DWORD *)(a4 + 80);
      v9 = v16 + 2;
      if ( (unsigned int)v9 < v16 )
        goto LABEL_59;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v9 *= 2LL;
        if ( v9 > 0xFFFFFFFF )
          goto LABEL_59;
      }
      v11 = 1;
    }
    v17 = *(_QWORD *)(a4 + 64);
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v12 || v17 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v18 = *(_DWORD *)(a4 + 96);
      v10 = v18 + 2;
      if ( (unsigned int)v10 < v18 )
        goto LABEL_59;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v10 *= 2LL;
        if ( v10 > 0xFFFFFFFF )
          goto LABEL_59;
      }
      ++v11;
    }
  }
  if ( (int)v9 + (int)v10 >= (unsigned int)v9 )
  {
    if ( v11 )
    {
      v13 = AllocCallbackMessage(168, v11, (unsigned int)(v9 + v10), v66, 1, 0x200uLL);
      if ( !v13 )
        return 0LL;
    }
    else
    {
      v13 = (unsigned __int8 *)v65;
      memset(&v65[1], 0, 0xA4uLL);
      v65[0] = 168;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v62 = 0LL;
    v63 = 0LL;
    if ( v13 != (unsigned __int8 *)v65 && v13 != v66 )
      PushW32ThreadLock(v13, &v62, Win32FreePool);
    v19 = v55;
    *((_QWORD *)v13 + 5) = v55;
    *((_DWORD *)v13 + 12) = v52;
    *((_QWORD *)v13 + 7) = v56;
    *((_QWORD *)v13 + 8) = a4 != 0;
    if ( !a4 )
      goto LABEL_32;
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *(_OWORD *)(v13 + 88) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v13 + 104) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v13 + 120) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v13 + 136) = *(_OWORD *)(a4 + 64);
    if ( !(_DWORD)v9 )
    {
LABEL_26:
      if ( (_DWORD)v10 )
      {
        v20 = (void **)(v13 + 136);
        v21 = *(_DWORD *)(a4 + 96);
        v22 = *(CHAR **)(a4 + 104);
        if ( *(int *)(a4 + 100) < 0 )
        {
          if ( (a7 & 1) != 0 )
          {
            v23 = v21 + 1;
            goto LABEL_30;
          }
          v24 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v13, v22, 2 * v21 + 2, v20);
        }
        else
        {
          if ( (a7 & 1) == 0 )
          {
            v23 = v21 + 2;
LABEL_30:
            v24 = CaptureCallbackData((struct _CAPTUREBUF *)v13, v22, v23, v20);
            goto LABEL_31;
          }
          v24 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v13, (PCWCH)v22, (v21 >> 1) + 1, v20);
        }
LABEL_31:
        if ( v24 < 0 )
          goto LABEL_59;
      }
LABEL_32:
      *((_QWORD *)v13 + 19) = a5;
      *((_QWORD *)v13 + 20) = a6;
      v25 = 0LL;
      v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v26 )
        v25 = *v26;
      *(_QWORD *)&v58 = *(_QWORD *)(v25 + 416);
      *(_QWORD *)(v25 + 416) = &v58;
      *((_QWORD *)&v58 + 1) = a1;
      if ( a1 )
        HMLockObject(a1);
      v27 = v53;
      v28 = v53[60];
      v56 = *(_OWORD *)(v28 + 64);
      v60 = v56;
      v61 = *(_QWORD *)(v28 + 80);
      *(_QWORD *)(v28 + 72) = v19;
      if ( a1 )
        v29 = *a1;
      else
        v29 = 0LL;
      *(_QWORD *)(v27[60] + 64LL) = v29;
      if ( a1 )
        v30 = *(_QWORD *)(a1[5] + 224);
      else
        v30 = 0LL;
      *(_QWORD *)(v27[60] + 80LL) = v30;
      v31 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
      UserSessionSwitchLeaveCrit(v32);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v13 + 2) = 0LL;
      v33 = KeUserModeCallback(10LL, v13, *(unsigned int *)v13, &v54, &v50);
      EtwTraceEndCallback(10LL);
      if ( v31 )
        EnterSharedCrit();
      else
        EnterCrit(0LL, 0LL);
      ThreadUnlock1(v35, v34, v36);
      v37 = v27[60];
      *(_OWORD *)(v37 + 64) = v56;
      *(_QWORD *)(v37 + 80) = v61;
      if ( v33 >= 0 && v50 == 24 )
      {
        v38 = (__int64 *)v54;
        if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
          v38 = (__int64 *)MmUserProbeAddress;
        v39 = *v38;
        v64 = *v38;
        goto LABEL_50;
      }
      goto LABEL_59;
    }
    if ( *(int *)(a4 + 84) < 0 )
    {
      v47 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v47 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v45 = 3;
          v41 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v49 = 0;
          v49 = ((unsigned __int16)(*v47 >> 8) << 16) | 0xFFFF;
          v45 = 4;
          v41 = (CHAR *)&v49;
        }
        v42 = (void **)(v13 + 128);
        v43 = (struct _CAPTUREBUF *)v13;
      }
      else
      {
        v42 = (void **)(v13 + 128);
        v48 = *(_DWORD *)(a4 + 80);
        v41 = *(CHAR **)(a4 + 88);
        v43 = (struct _CAPTUREBUF *)v13;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v13, v41, 2 * v48 + 2, v42) < 0 )
            goto LABEL_59;
          goto LABEL_26;
        }
        v45 = v48 + 1;
      }
    }
    else
    {
      v41 = *(CHAR **)(a4 + 56);
      v51 = *(_WORD *)v41;
      v42 = (void **)(v13 + 128);
      v43 = (struct _CAPTUREBUF *)v13;
      if ( v51 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v41;
          v45 = 3;
        }
        else
        {
          v45 = 4;
        }
      }
      else
      {
        v44 = *(_DWORD *)(a4 + 80);
        v41 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v46 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v13, (PCWCH)v41, (v44 >> 1) + 1, v42);
LABEL_58:
          if ( v46 < 0 )
            goto LABEL_59;
          goto LABEL_26;
        }
        v45 = v44 + 2;
      }
    }
    v46 = CaptureCallbackData(v43, v41, v45, v42);
    goto LABEL_58;
  }
LABEL_59:
  v39 = 0LL;
LABEL_50:
  if ( v13 != (unsigned __int8 *)v65 && v13 != v66 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v62);
  }
  return v39;
}
