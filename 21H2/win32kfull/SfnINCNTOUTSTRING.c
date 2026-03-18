/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C0223EE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00D4FCC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00D57F4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned __int8 *result; // rax
  __int16 v17; // dx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // rsi
  ULONG64 v29; // rcx
  __int64 v30; // xmm0_8
  __int64 v31; // rcx
  _WORD *v32; // rax
  _BYTE v33[4]; // [rsp+30h] [rbp-388h] BYREF
  int v34; // [rsp+34h] [rbp-384h]
  int v35; // [rsp+38h] [rbp-380h] BYREF
  int v36; // [rsp+3Ch] [rbp-37Ch]
  unsigned __int8 *v37; // [rsp+40h] [rbp-378h]
  unsigned __int64 v38; // [rsp+58h] [rbp-360h] BYREF
  __int64 v39; // [rsp+60h] [rbp-358h]
  __int128 v40; // [rsp+70h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-338h] BYREF
  __int128 v42; // [rsp+88h] [rbp-330h]
  __int64 v43; // [rsp+98h] [rbp-320h]
  __int128 v44; // [rsp+A0h] [rbp-318h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-308h]
  __int128 v46; // [rsp+B8h] [rbp-300h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-2F0h]
  __int128 v48; // [rsp+F8h] [rbp-2C0h] BYREF
  __int64 v49; // [rsp+108h] [rbp-2B0h]
  unsigned __int8 v50[112]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v51[512]; // [rsp+180h] [rbp-238h] BYREF

  *(_QWORD *)&v40 = a3;
  v34 = a2;
  v36 = a7 & 1;
  memset(v50, 0, 0x68uLL);
  v10 = v50;
  v38 = 0LL;
  v35 = 0;
  v39 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_41;
  if ( *(int *)(a4 + 4) < 0 && !v36 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_41;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v15, v51, 0, 0x200uLL);
  v10 = result;
  v37 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v46 = 0LL;
  v47 = 0LL;
  if ( v10 != v50 && v10 != v51 )
    PushW32ThreadLock((__int64)v10, &v46, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = v34;
  *((_QWORD *)v10 + 7) = v40;
  v17 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v17 = *(_WORD *)(a4 + 4);
  LOWORD(v34) = v17;
  v18 = -1;
  if ( v17 != -1 )
    v18 = v17;
  *((_WORD *)v10 + 40) = v18;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v15, (void **)v10 + 11) < 0 )
    goto LABEL_41;
  *((_DWORD *)v10 + 24) = v15;
  ThreadLock((__int64)a1, (__int64 *)&v48);
  v19 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v19 + 64);
  v42 = v40;
  v43 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  v20 = 0LL;
  if ( a1 )
    v20 = *a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v20;
  v21 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v21;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v22 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v38, &v35);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v26 + 64) = v40;
  *(_QWORD *)(v26 + 80) = v43;
  if ( v22 < 0 || v35 != 24 )
    goto LABEL_41;
  v27 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v39 = v28;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_42;
  if ( !v28 )
  {
    v32 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v32 = 0;
    else
      *(_BYTE *)v32 = 0;
    goto LABEL_42;
  }
  v29 = v38;
  if ( v38 + 24 < v38 || v38 + 24 > MmUserProbeAddress )
    v29 = MmUserProbeAddress;
  v30 = *(_QWORD *)(v29 + 16);
  v44 = *(_OWORD *)v29;
  v45 = v30;
  v31 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
  if ( v31 && (*(_DWORD *)(v31 + 84) & 1) != 0 && *(_QWORD *)(v31 + 96) == a4 )
  {
LABEL_41:
    v28 = 0LL;
  }
  else
  {
    v28 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v44, v28, *(_DWORD *)(a4 + 4) >> 31, v36);
    v39 = v28;
    CopyOutputString((volatile void **)&v44, (struct _LARGE_STRING *)a4, (unsigned __int16)v34, v36);
  }
LABEL_42:
  if ( v10 != v50 && v10 != v51 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46);
  }
  return (unsigned __int8 *)v28;
}
