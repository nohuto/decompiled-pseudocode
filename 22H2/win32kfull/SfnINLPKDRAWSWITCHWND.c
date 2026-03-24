/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C022B720
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     GreSetTextColor @ 0x1C0044578 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044600 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(__int64 *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int8 *result; // rax
  struct tagWND *v17; // rax
  HDC DC; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  char v31; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-397h] BYREF
  int v33; // [rsp+34h] [rbp-394h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-390h]
  int v35; // [rsp+3Ch] [rbp-38Ch]
  int v36; // [rsp+40h] [rbp-388h]
  unsigned __int8 *v37; // [rsp+58h] [rbp-370h]
  _QWORD v38[3]; // [rsp+60h] [rbp-368h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int128 v40; // [rsp+80h] [rbp-348h] BYREF
  __int64 v41; // [rsp+90h] [rbp-338h]
  __int128 v42; // [rsp+98h] [rbp-330h]
  __int64 v43; // [rsp+A8h] [rbp-320h]
  __int128 v44; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-308h]
  __int64 v46; // [rsp+C8h] [rbp-300h]
  unsigned __int8 v47[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v48[512]; // [rsp+160h] [rbp-268h] BYREF

  memset(v47, 0, 0x68uLL);
  v10 = v47;
  v38[0] = 0LL;
  v33 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_30;
  v34 = v14 + 2;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_30;
    v34 = v15;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v15, v48, 1, 0x200uLL);
  v10 = result;
  v37 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v44 = 0LL;
  v45 = 0LL;
  if ( v10 != v47 && v10 != v48 )
    PushW32ThreadLock((__int64)v10, &v44, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(_QWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) >= 0 )
  {
    v17 = WindowFromDC(a3);
    DC = (HDC)_GetDC(v17);
    v36 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
    v35 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v19);
    v38[2] = GreSelectFont(DC);
    *((_QWORD *)v10 + 5) = v13;
    *((_DWORD *)v10 + 12) = a2;
    *((_QWORD *)v10 + 7) = DC;
    *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 8) = a5;
    *((_QWORD *)v10 + 9) = a6;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v40 = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = &v40;
    *((_QWORD *)&v40 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v21 = *(_QWORD *)(v12 + 480);
    v22 = *(_OWORD *)(v21 + 64);
    v42 = v22;
    v23 = *(_QWORD *)(v21 + 80);
    v43 = v23;
    *(_QWORD *)(v21 + 72) = v13;
    if ( a1 )
      v24 = *a1;
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v24;
    if ( a1 )
      v25 = *(_QWORD *)(a1[5] + 224);
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v25;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
    EtwTraceBeginCallback(97LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v26 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, v38, &v33);
    EtwTraceEndCallback(97LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
    ThreadUnlock1(v27);
    v28 = *(_QWORD *)(v12 + 480);
    *(_OWORD *)(v28 + 64) = v22;
    *(_QWORD *)(v28 + 80) = v23;
    GreSelectFont(DC);
    GreSetBkColor(DC, v35);
    GreSetTextColor(DC, v36);
    _ReleaseDC(DC);
    if ( v26 >= 0 && v33 == 24 )
    {
      v29 = (__int64 *)v38[0];
      if ( (unsigned __int64)(v38[0] + 8LL) < v38[0] || v38[0] + 8LL > MmUserProbeAddress )
        v29 = (__int64 *)MmUserProbeAddress;
      v30 = *v29;
      v46 = *v29;
      goto LABEL_31;
    }
  }
LABEL_30:
  v30 = 0LL;
LABEL_31:
  if ( v10 != v47 && v10 != v48 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
  }
  return (unsigned __int8 *)v30;
}
