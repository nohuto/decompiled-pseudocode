/*
 * XREFs of SfnOUTSTRING @ 0x1C007FE90
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

__int64 __fastcall SfnOUTSTRING(
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
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rsi
  _BYTE *v27; // rax
  __int64 v28; // rax
  ULONG64 v30; // rcx
  __int64 v31; // xmm0_8
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v34[4]; // [rsp+30h] [rbp-398h] BYREF
  int v35; // [rsp+34h] [rbp-394h]
  int v36; // [rsp+38h] [rbp-390h] BYREF
  int v37; // [rsp+3Ch] [rbp-38Ch]
  unsigned int v38[2]; // [rsp+40h] [rbp-388h]
  unsigned __int8 *v39; // [rsp+48h] [rbp-380h]
  __int64 v40; // [rsp+50h] [rbp-378h]
  int v41; // [rsp+58h] [rbp-370h]
  unsigned __int64 v42; // [rsp+70h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-348h] BYREF
  __int128 v44; // [rsp+88h] [rbp-340h]
  __int64 v45; // [rsp+98h] [rbp-330h]
  __int128 v46; // [rsp+A0h] [rbp-328h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-318h]
  __int128 v48; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-300h]
  __int128 v50; // [rsp+F8h] [rbp-2D0h]
  __int128 v51; // [rsp+108h] [rbp-2C0h] BYREF
  __int64 v52; // [rsp+118h] [rbp-2B0h]
  unsigned __int8 v53[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v54[512]; // [rsp+180h] [rbp-248h] BYREF

  *(_QWORD *)v38 = a3;
  v41 = a2;
  v35 = a7 & 1;
  v37 = 0;
  memset(v53, 0, sizeof(v53));
  v10 = v53;
  v42 = 0LL;
  v36 = 0;
  v40 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_53;
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x8000000) == 0
    && *(int *)(a4 + 4) < 0
    && !v35 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_53;
  }
  v10 = AllocCallbackMessage(96, 1u, (unsigned int)v15, v54, 0, 0x200uLL);
  v39 = v10;
  if ( !v10 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v48 = 0LL;
  v49 = 0LL;
  if ( v10 != v53 && v10 != v54 )
    PushW32ThreadLock((__int64)v10, &v48, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = v41;
  if ( v35 )
  {
    if ( *(int *)(a4 + 4) >= 0 )
    {
      *((_QWORD *)v10 + 7) = 2LL * *(_QWORD *)v38;
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_DWORD *)(v16 + 488) |= 0x8000000u;
      v37 = 1;
      goto LABEL_13;
    }
    goto LABEL_48;
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x8000000) == 0 )
  {
LABEL_48:
    *((_QWORD *)v10 + 7) = *(_QWORD *)v38;
    goto LABEL_13;
  }
  *((_QWORD *)v10 + 7) = *(_QWORD *)v38 >> 1;
  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_DWORD *)(v33 + 488) &= ~0x8000000u;
LABEL_13:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v10, v15, (void **)v10 + 10) >= 0 )
  {
    *((_DWORD *)v10 + 22) = v15;
    ThreadLock((__int64)a1, (__int64 *)&v51);
    v17 = *(_QWORD *)(v12 + 480);
    v50 = *(_OWORD *)(v17 + 64);
    v44 = v50;
    v45 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(v17 + 72) = v13;
    v18 = 0LL;
    if ( a1 )
      v18 = *a1;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
    v19 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v20 = KeUserModeCallback(35LL, v10, *(unsigned int *)v10, &v42, &v36);
    EtwTraceEndCallback(35LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
    ThreadUnlock1(v22, v21, v23);
    v24 = *(_QWORD *)(v12 + 480);
    *(_OWORD *)(v24 + 64) = v50;
    *(_QWORD *)(v24 + 80) = v45;
    if ( v20 >= 0 && v36 == 24 )
    {
      v25 = (__int64 *)v42;
      if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
        v25 = (__int64 *)MmUserProbeAddress;
      v26 = *v25;
      v40 = v26;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_31;
      if ( !v26 )
      {
        if ( *(_QWORD *)v38 )
        {
          v27 = *(_BYTE **)(a4 + 8);
          if ( *(int *)(a4 + 4) < 0 )
            *v27 = 0;
          else
            *(_WORD *)v27 = 0;
        }
        goto LABEL_31;
      }
      v30 = v42;
      if ( v42 + 24 < v42 || v42 + 24 > MmUserProbeAddress )
        v30 = MmUserProbeAddress;
      v31 = *(_QWORD *)(v30 + 16);
      v46 = *(_OWORD *)v30;
      v47 = v31;
      v32 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
      if ( !v32 || (*(_DWORD *)(v32 + 84) & 1) == 0 || *(_QWORD *)(v32 + 96) != a4 )
      {
        v26 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v46, v26, *(_DWORD *)(a4 + 4) >> 31, v35);
        v40 = v26;
        CopyOutputString((struct _CALLBACKSTATUS *)&v46, (struct _LARGE_STRING *)a4, v38[0], v35);
        goto LABEL_31;
      }
    }
  }
LABEL_53:
  v26 = 0LL;
  v40 = 0LL;
LABEL_31:
  if ( v10 != v53 && v10 != v54 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v48);
  }
  if ( v37 )
  {
    v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_DWORD *)(v28 + 488) &= ~0x8000000u;
    return v40;
  }
  return v26;
}
