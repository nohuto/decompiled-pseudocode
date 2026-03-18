/*
 * XREFs of SfnINSTRINGNULL @ 0x1C00EC7F0
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

__int64 __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned __int64 v14; // rdx
  void **v15; // r9
  unsigned int v16; // r8d
  CHAR *v17; // rdx
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 v31; // rax
  _BYTE v32[4]; // [rsp+30h] [rbp-358h] BYREF
  int v33; // [rsp+34h] [rbp-354h] BYREF
  unsigned __int8 *v34; // [rsp+38h] [rbp-350h]
  int v35; // [rsp+40h] [rbp-348h]
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
  v13 = 0;
  LODWORD(v14) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != (a7 & 1)) )
  {
    v13 = 1;
    v14 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v14 < *a4 )
      goto LABEL_43;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v14 *= 2LL;
      if ( v14 > 0xFFFFFFFF )
        goto LABEL_43;
    }
  }
  if ( v13 )
  {
    v9 = AllocCallbackMessage(88, v13, (unsigned int)v14, v47, 1, 0x200uLL);
    v34 = v9;
    if ( !v9 )
      return 0LL;
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
    v15 = (void **)(v9 + 80);
    v16 = *a4;
    v17 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v18 = v16 + 1;
        goto LABEL_16;
      }
      v19 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v17, 2 * v16 + 2, v15);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v18 = v16 + 2;
LABEL_16:
        v19 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v17, v18, v15);
        goto LABEL_17;
      }
      v19 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v17, (v16 >> 1) + 1, v15);
    }
LABEL_17:
    if ( v19 < 0 )
      goto LABEL_43;
    goto LABEL_18;
  }
  if ( a4 )
    v31 = *((_QWORD *)a4 + 1);
  else
    v31 = 0LL;
  *((_QWORD *)v9 + 10) = v31;
LABEL_18:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v44);
  v20 = *(_QWORD *)(v11 + 480);
  v37 = *(_OWORD *)(v20 + 64);
  v39 = v37;
  v40 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v12;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v22;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v23 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v36, &v33);
  EtwTraceEndCallback(27LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v27 + 64) = v37;
  *(_QWORD *)(v27 + 80) = v40;
  if ( v23 >= 0 && v33 == 24 )
  {
    v28 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v43 = *v28;
    goto LABEL_30;
  }
LABEL_43:
  v29 = 0LL;
LABEL_30:
  if ( v9 != (unsigned __int8 *)v46 && v9 != v47 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v41);
  }
  return v29;
}
