/*
 * XREFs of SfnINSTRING @ 0x1C0228520
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C023CB6C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C010B548 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C014A160 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned __int64 v14; // rcx
  unsigned __int8 *result; // rax
  void **v16; // r9
  unsigned int v17; // r8d
  CHAR *v18; // rdx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  _BYTE v32[4]; // [rsp+30h] [rbp-358h] BYREF
  int v33; // [rsp+34h] [rbp-354h] BYREF
  unsigned __int8 *v34; // [rsp+38h] [rbp-350h]
  unsigned int v35; // [rsp+40h] [rbp-348h]
  unsigned __int64 v36; // [rsp+58h] [rbp-330h] BYREF
  __int128 v37; // [rsp+68h] [rbp-320h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int128 v39; // [rsp+80h] [rbp-308h]
  __int64 v40; // [rsp+90h] [rbp-2F8h]
  __int128 v41; // [rsp+98h] [rbp-2F0h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-2E0h]
  __int64 v43; // [rsp+B0h] [rbp-2D8h]
  __int128 v44; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-2A8h]
  _DWORD v46[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v47[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v37 = a3;
  v35 = a2;
  memset(v46, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v46;
  v36 = 0LL;
  v33 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v14) = 0;
    v13 = 0;
  }
  else
  {
    v13 = 1;
    v14 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v14 < *a4 )
      goto LABEL_47;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v14 *= 2LL;
      if ( v14 > 0xFFFFFFFF )
        goto LABEL_47;
    }
  }
  if ( v13 )
  {
    result = AllocCallbackMessage(88, v13, (unsigned int)v14, v47, 1, 0x200uLL);
    v9 = result;
    v34 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v46;
    v34 = (unsigned __int8 *)v46;
    memset(&v46[1], 0, 0x54uLL);
    v46[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v41 = 0LL;
  v42 = 0LL;
  if ( v9 != (unsigned __int8 *)v46 && v9 != v47 )
    PushW32ThreadLock((__int64)v9, &v41, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v35;
  *((_QWORD *)v9 + 7) = v37;
  if ( v13 )
  {
    v16 = (void **)(v9 + 80);
    v17 = *a4;
    v18 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v19 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v18, 2 * v17 + 2, v16);
LABEL_29:
        if ( v19 < 0 )
          goto LABEL_47;
        goto LABEL_35;
      }
      v20 = v17 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v19 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v18, (v17 >> 1) + 1, v16);
        goto LABEL_29;
      }
      v20 = v17 + 2;
    }
    v19 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v18, v20, v16);
    goto LABEL_29;
  }
  if ( a4 )
    v21 = *((_QWORD *)a4 + 1);
  else
    v21 = 0LL;
  *((_QWORD *)v9 + 10) = v21;
LABEL_35:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v44);
  v22 = *(_QWORD *)(v11 + 480);
  v37 = *(_OWORD *)(v22 + 64);
  v39 = v37;
  v40 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v12;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v24;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v25 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v36, &v33);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v29 + 64) = v37;
  *(_QWORD *)(v29 + 80) = v40;
  if ( v25 >= 0 && v33 == 24 )
  {
    v30 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v31 = *v30;
    v43 = *v30;
    goto LABEL_48;
  }
LABEL_47:
  v31 = 0LL;
LABEL_48:
  if ( v9 != (unsigned __int8 *)v46 && v9 != v47 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v41);
  }
  return (unsigned __int8 *)v31;
}
