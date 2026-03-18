/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0
 * Callers:
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C010B548 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C014A160 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 *ThreadDesktopWindow; // r13
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned int v15; // eax
  _QWORD *v16; // r15
  _OWORD *v17; // rax
  void **v18; // r9
  unsigned int v19; // r8d
  WCHAR *v20; // rdx
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rcx
  ULONG64 v34; // rcx
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int64 v39; // rdi
  unsigned int v41; // eax
  CHAR *v42; // rdx
  void **v43; // r9
  struct _CAPTUREBUF *v44; // rcx
  unsigned int v45; // r8d
  int v46; // eax
  unsigned int v47; // r8d
  CHAR *v48; // rax
  int v49; // r8d
  char v50[8]; // [rsp+30h] [rbp-4E8h] BYREF
  unsigned __int8 *v51; // [rsp+38h] [rbp-4E0h]
  CHAR v52; // [rsp+40h] [rbp-4D8h]
  int v53; // [rsp+44h] [rbp-4D4h] BYREF
  int v54; // [rsp+48h] [rbp-4D0h] BYREF
  __int16 v55; // [rsp+4Ch] [rbp-4CCh]
  int v56; // [rsp+50h] [rbp-4C8h]
  __int64 v57; // [rsp+80h] [rbp-498h]
  unsigned __int64 v58[4]; // [rsp+88h] [rbp-490h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-470h]
  _QWORD *v60; // [rsp+B0h] [rbp-468h]
  __int64 v61; // [rsp+B8h] [rbp-460h]
  __int128 v62; // [rsp+C0h] [rbp-458h]
  __int64 v63; // [rsp+D0h] [rbp-448h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp-440h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-438h]
  __int64 v66; // [rsp+F0h] [rbp-428h]
  __int128 v67; // [rsp+F8h] [rbp-420h] BYREF
  __int64 v68; // [rsp+108h] [rbp-410h]
  __int128 v69; // [rsp+148h] [rbp-3D0h] BYREF
  __int64 v70; // [rsp+158h] [rbp-3C0h]
  _OWORD v71[8]; // [rsp+160h] [rbp-3B8h] BYREF
  __int128 v72; // [rsp+1E0h] [rbp-338h]
  __int64 v73; // [rsp+210h] [rbp-308h]
  _DWORD v74[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v75[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v56 = a1;
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  memset(v71, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
  memset(v74, 0, 0xA8uLL);
  v10 = (unsigned __int8 *)v74;
  v58[0] = 0LL;
  v54 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v62 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v57 = ThreadDesktopWindow[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v57 = 0LL;
  v12 = *a3;
  v13 = *(_QWORD *)(v12 + 56);
  if ( v13 && (*(_DWORD *)(v12 + 84) >> 31 != a5 || v13 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v41 = *(_DWORD *)(v12 + 80);
    v6 = v41 + 2;
    if ( (unsigned int)v6 < v41 )
      goto LABEL_55;
    if ( *(int *)(v12 + 84) < 0 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_55;
    }
    v8 = 1;
  }
  v14 = *(_QWORD *)(v12 + 64);
  if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v12 + 100) >> 31 != a5 || v14 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v15 = *(_DWORD *)(v12 + 96);
    v7 = v15 + 2;
    if ( (unsigned int)v7 < v15 )
      goto LABEL_55;
    if ( *(int *)(v12 + 100) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_55;
    }
    ++v8;
  }
  if ( (int)v7 + (int)v6 >= (unsigned int)v6 )
  {
    if ( v8 )
    {
      v10 = AllocCallbackMessage(168, v8, (unsigned int)(v7 + v6), v75, 1, 0x200uLL);
      v51 = v10;
      if ( !v10 )
        return 0LL;
    }
    else
    {
      v10 = (unsigned __int8 *)v74;
      v51 = (unsigned __int8 *)v74;
      memset(&v74[1], 0, 0xA4uLL);
      v74[0] = 168;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v67 = 0LL;
    v68 = 0LL;
    if ( v10 != (unsigned __int8 *)v74 && v10 != v75 )
      PushW32ThreadLock((__int64)v10, &v67, (__int64)Win32FreePool);
    *((_QWORD *)v10 + 5) = v57;
    *((_DWORD *)v10 + 12) = v56;
    *((_QWORD *)v10 + 7) = v59;
    v16 = v60;
    *(_DWORD *)(*v60 + 52LL) = 0;
    *(_DWORD *)(*v16 + 76LL) = 0;
    v17 = (_OWORD *)*v16;
    *((_OWORD *)v10 + 4) = *(_OWORD *)*v16;
    *((_OWORD *)v10 + 5) = v17[1];
    *((_OWORD *)v10 + 6) = v17[2];
    *((_OWORD *)v10 + 7) = v17[3];
    *((_OWORD *)v10 + 8) = v17[4];
    if ( !(_DWORD)v6 )
      goto LABEL_18;
    if ( *(int *)(v12 + 84) < 0 )
    {
      v48 = *(CHAR **)(v12 + 56);
      v52 = *v48;
      if ( v52 == -1 )
      {
        if ( a5 )
        {
          v47 = 3;
          v42 = v48;
        }
        else
        {
          v53 = 0;
          v53 = ((unsigned __int16)(*(_DWORD *)v48 >> 8) << 16) | 0xFFFF;
          v47 = 4;
          v42 = (CHAR *)&v53;
        }
        v43 = (void **)(v10 + 120);
        v44 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v43 = (void **)(v10 + 120);
        v49 = *(_DWORD *)(v12 + 80);
        v42 = *(CHAR **)(v12 + 88);
        v44 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v42, 2 * v49 + 2, v43) < 0 )
            goto LABEL_55;
          goto LABEL_18;
        }
        v47 = v49 + 1;
      }
    }
    else
    {
      v42 = *(CHAR **)(v12 + 56);
      v55 = *(_WORD *)v42;
      v43 = (void **)(v10 + 120);
      v44 = (struct _CAPTUREBUF *)v10;
      if ( v55 == -1 )
      {
        if ( a5 )
        {
          ++v42;
          v47 = 3;
        }
        else
        {
          v47 = 4;
        }
      }
      else
      {
        v45 = *(_DWORD *)(v12 + 80);
        v42 = *(CHAR **)(v12 + 88);
        if ( a5 )
        {
          v46 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v42, (v45 >> 1) + 1, v43);
          goto LABEL_54;
        }
        v47 = v45 + 2;
      }
    }
    v46 = CaptureCallbackData(v44, (unsigned __int64)v42, v47, v43);
LABEL_54:
    if ( v46 < 0 )
      goto LABEL_55;
LABEL_18:
    if ( !(_DWORD)v7 )
    {
LABEL_24:
      *((_QWORD *)v10 + 18) = v16[1];
      *((_QWORD *)v10 + 19) = v61;
      *((_DWORD *)v10 + 40) = a5;
      ThreadLock((__int64)ThreadDesktopWindow, (__int64 *)&v69);
      v23 = v62;
      v24 = *(_QWORD *)(v62 + 480);
      v62 = *(_OWORD *)(v24 + 64);
      v65 = v62;
      v66 = *(_QWORD *)(v24 + 80);
      *(_QWORD *)(v24 + 72) = v57;
      if ( ThreadDesktopWindow )
        v25 = *ThreadDesktopWindow;
      else
        v25 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v23 + 480) + 64LL) = v25;
      if ( ThreadDesktopWindow )
        v26 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
      else
        v26 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v23 + 480) + 80LL) = v26;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v50);
      EtwTraceBeginCallback(42LL);
      *((_QWORD *)v10 + 2) = 0LL;
      v27 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, v58, &v54);
      EtwTraceEndCallback(42LL);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v50);
      ThreadUnlock1(v29, v28, v30);
      v31 = *(_QWORD *)(v23 + 480);
      *(_OWORD *)(v31 + 64) = v62;
      *(_QWORD *)(v31 + 80) = v66;
      if ( v27 >= 0 && v54 == 24 )
      {
        v32 = (__int64 *)v58[0];
        if ( v58[0] + 8 < v58[0] || v58[0] + 8 > MmUserProbeAddress )
          v32 = (__int64 *)MmUserProbeAddress;
        v63 = *v32;
        v33 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
        if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_OWORD **)(v33 + 96) != v71 )
        {
          v34 = *(_QWORD *)(v58[0] + 16);
          if ( v34 + 88 < v34 || v34 + 88 > MmUserProbeAddress )
            v34 = MmUserProbeAddress;
          v35 = *(_OWORD *)v34;
          v36 = *(_OWORD *)(v34 + 16);
          v72 = *(_OWORD *)(v34 + 32);
          v37 = *(_OWORD *)(v34 + 48);
          v38 = *(_OWORD *)(v34 + 64);
          v73 = *(_QWORD *)(v34 + 80);
          v71[0] = v35;
          v71[1] = v36;
          v71[2] = v72;
          v71[3] = v37;
          v71[4] = v38;
          *(_QWORD *)&v71[5] = v73;
          v16[1] = v73;
          *(_OWORD *)(*v16 + 32LL) = v72;
          v39 = v63;
          goto LABEL_40;
        }
      }
      goto LABEL_55;
    }
    v18 = (void **)(v10 + 128);
    v19 = *(_DWORD *)(v12 + 96);
    v20 = *(WCHAR **)(v12 + 104);
    if ( *(int *)(v12 + 100) >= 0 )
    {
      if ( !a5 )
      {
        v21 = v19 + 2;
        goto LABEL_22;
      }
      v22 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, v20, (v19 >> 1) + 1, v18);
    }
    else
    {
      if ( a5 )
      {
        v21 = v19 + 1;
LABEL_22:
        v22 = CaptureCallbackData((struct _CAPTUREBUF *)v10, (unsigned __int64)v20, v21, v18);
        goto LABEL_23;
      }
      v22 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, (CHAR *)v20, 2 * v19 + 2, v18);
    }
LABEL_23:
    if ( v22 < 0 )
      goto LABEL_55;
    goto LABEL_24;
  }
LABEL_55:
  v39 = 0LL;
LABEL_40:
  if ( v10 != (unsigned __int8 *)v74 && v10 != v75 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v67);
  }
  return v39;
}
