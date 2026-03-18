/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C0225FB0
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned int v10; // r15d
  int v11; // r12d
  unsigned __int8 *v12; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *result; // rax
  void **v18; // r9
  unsigned int v19; // r8d
  CHAR *v20; // rdx
  int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  CHAR *v24; // rdx
  void **v25; // r9
  int v26; // eax
  unsigned int v27; // r8d
  __int64 *v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rsi
  _BYTE v40[4]; // [rsp+30h] [rbp-398h] BYREF
  int v41; // [rsp+34h] [rbp-394h] BYREF
  unsigned __int8 *v42; // [rsp+38h] [rbp-390h]
  unsigned int v43; // [rsp+40h] [rbp-388h]
  __int64 v44; // [rsp+58h] [rbp-370h]
  __int64 *v45; // [rsp+60h] [rbp-368h]
  unsigned __int64 v46; // [rsp+68h] [rbp-360h] BYREF
  __int64 v47; // [rsp+78h] [rbp-350h]
  __int128 v48; // [rsp+80h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int128 v50; // [rsp+98h] [rbp-330h]
  __int64 v51; // [rsp+A8h] [rbp-320h]
  __int128 v52; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-308h]
  __int64 v54; // [rsp+C8h] [rbp-300h]
  __int128 v55; // [rsp+E8h] [rbp-2E0h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-2D0h]
  _DWORD v57[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v58[512]; // [rsp+190h] [rbp-238h] BYREF

  v47 = a3;
  v43 = a2;
  v45 = (__int64 *)a1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = a7 & 1;
  memset(v57, 0, sizeof(v57));
  v12 = (unsigned __int8 *)v57;
  v46 = 0LL;
  v41 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v48 = ThreadWin32Thread;
  if ( v45 )
    v44 = v45[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v44 = 0LL;
  v14 = *(_QWORD *)(a4 + 8);
  if ( v14 && (v14 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v15 = *(_DWORD *)(a4 + 56);
    v8 = v15 + 2;
    if ( (unsigned int)v8 < v15 )
      goto LABEL_60;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v8 *= 2LL;
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v16 = *(_DWORD *)(a4 + 72);
    v9 = v16 + 2;
    if ( (unsigned int)v9 < v16 )
      goto LABEL_60;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    ++v10;
  }
  if ( (int)v8 + (int)v9 >= (unsigned int)v8 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v8 + v9), v58, 1, 0x200uLL);
      v12 = result;
      v42 = result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = (unsigned __int8 *)v57;
      v42 = (unsigned __int8 *)v57;
      memset(&v57[1], 0, 0x8CuLL);
      v57[0] = 144;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v52 = 0LL;
    v53 = 0LL;
    if ( v12 != (unsigned __int8 *)v57 && v12 != v58 )
      PushW32ThreadLock((__int64)v12, &v52, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v44;
    *((_DWORD *)v12 + 12) = v43;
    *((_QWORD *)v12 + 7) = v47;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    v18 = (void **)(v12 + 72);
    v19 = *(_DWORD *)(a4 + 56);
    v20 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v21 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v20, 2 * v19 + 2, v18);
LABEL_37:
        if ( v21 < 0 )
          goto LABEL_60;
LABEL_38:
        if ( !(_DWORD)v9 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v28 = v45;
          ThreadLock((__int64)v45, (__int64 *)&v55);
          v29 = v48;
          v30 = *(_QWORD *)(v48 + 480);
          v48 = *(_OWORD *)(v30 + 64);
          v50 = v48;
          v51 = *(_QWORD *)(v30 + 80);
          *(_QWORD *)(v30 + 72) = v44;
          if ( v28 )
            v31 = *v28;
          else
            v31 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v29 + 480) + 64LL) = v31;
          if ( v28 )
            v32 = *(_QWORD *)(v28[5] + 224);
          else
            v32 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v29 + 480) + 80LL) = v32;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v40);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v33 = KeUserModeCallback(15LL, v12, *(unsigned int *)v12, &v46, &v41);
          EtwTraceEndCallback(15LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v40);
          ThreadUnlock1(v35, v34, v36);
          v37 = *(_QWORD *)(v29 + 480);
          *(_OWORD *)(v37 + 64) = v48;
          *(_QWORD *)(v37 + 80) = v51;
          if ( v33 >= 0 && v41 == 24 )
          {
            v38 = (__int64 *)v46;
            if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
              v38 = (__int64 *)MmUserProbeAddress;
            v39 = *v38;
            v54 = *v38;
            goto LABEL_61;
          }
          goto LABEL_60;
        }
        v23 = *(_DWORD *)(a4 + 72);
        v24 = *(CHAR **)(a4 + 80);
        v25 = (void **)(v12 + 64);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v24, 2 * v23 + 2, v25);
LABEL_47:
            if ( v26 < 0 )
              goto LABEL_60;
            goto LABEL_48;
          }
          v27 = v23 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v24, (v23 >> 1) + 1, v25);
            goto LABEL_47;
          }
          v27 = v23 + 2;
        }
        v26 = CaptureCallbackData((struct _CAPTUREBUF *)v12, (unsigned __int64)v24, v27, v25);
        goto LABEL_47;
      }
      v22 = v19 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v21 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v20, (v19 >> 1) + 1, v18);
        goto LABEL_37;
      }
      v22 = v19 + 2;
    }
    v21 = CaptureCallbackData((struct _CAPTUREBUF *)v12, (unsigned __int64)v20, v22, v18);
    goto LABEL_37;
  }
LABEL_60:
  v39 = 0LL;
LABEL_61:
  if ( v12 != (unsigned __int8 *)v57 && v12 != v58 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v52);
  }
  return (unsigned __int8 *)v39;
}
