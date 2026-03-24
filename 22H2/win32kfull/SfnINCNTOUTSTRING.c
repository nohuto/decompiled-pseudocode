/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C0229BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00232F8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00233D0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C002452C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
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
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int8 *result; // rax
  unsigned __int16 v18; // r12
  __int16 v19; // ax
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 v29; // rsi
  ULONG64 v30; // rcx
  __int64 v31; // xmm0_8
  __int64 v32; // rdx
  _WORD *v33; // rax
  char v34; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-394h]
  int v37; // [rsp+38h] [rbp-390h] BYREF
  int v38; // [rsp+3Ch] [rbp-38Ch]
  unsigned __int8 *v39; // [rsp+40h] [rbp-388h]
  int v40; // [rsp+48h] [rbp-380h]
  unsigned __int64 v41; // [rsp+60h] [rbp-368h] BYREF
  __int64 v42; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int128 v44; // [rsp+80h] [rbp-348h] BYREF
  __int64 v45; // [rsp+90h] [rbp-338h]
  __int128 v46; // [rsp+98h] [rbp-330h]
  __int64 v47; // [rsp+A8h] [rbp-320h]
  __int128 v48; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-308h]
  __int128 v50; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-2F0h]
  __int128 v52; // [rsp+108h] [rbp-2C0h]
  unsigned __int8 v53[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v54[512]; // [rsp+190h] [rbp-238h] BYREF

  v40 = a2;
  v38 = a7 & 1;
  memset(v53, 0, 0x68uLL);
  v11 = v53;
  v41 = 0LL;
  v37 = 0;
  v42 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4);
  v16 = (v15 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v16 < (v15 & 0x7FFFFFFFu) )
    goto LABEL_47;
  v36 = (v15 & 0x7FFFFFFF) + 2;
  if ( v15 < 0 && !v38 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_47;
    v36 = v16;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v16, v54, 0, 0x200uLL);
  v11 = result;
  v39 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v50 = 0LL;
  v51 = 0LL;
  if ( v11 != v53 && v11 != v54 )
    PushW32ThreadLock((__int64)v11, &v50, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v40;
  *((_QWORD *)v11 + 7) = a3;
  v18 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v18 = *(_WORD *)(a4 + 4);
  v19 = -1;
  if ( v18 != 0xFFFF )
    v19 = v18;
  *((_WORD *)v11 + 40) = v19;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v36, (void **)v11 + 11) >= 0 )
  {
    *((_DWORD *)v11 + 24) = v20;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v44 = *(_QWORD *)(v21 + 416);
    *(_QWORD *)(v21 + 416) = &v44;
    *((_QWORD *)&v44 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v22 = *(_QWORD *)(v13 + 480);
    v52 = *(_OWORD *)(v22 + 64);
    v46 = v52;
    v47 = *(_QWORD *)(v22 + 80);
    *(_QWORD *)(v22 + 72) = v14;
    v23 = 0LL;
    if ( a1 )
      v23 = *a1;
    *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v23;
    if ( a1 )
      v24 = *(_QWORD *)(a1[5] + 224);
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v24;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v35);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    EtwTraceBeginCallback(7LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v25 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v41, &v37);
    EtwTraceEndCallback(7LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v35);
    ThreadUnlock1(v26);
    v27 = *(_QWORD *)(v13 + 480);
    *(_OWORD *)(v27 + 64) = v52;
    *(_QWORD *)(v27 + 80) = v47;
    if ( v25 >= 0 && v37 == 24 )
    {
      v28 = (__int64 *)v41;
      if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
        v28 = (__int64 *)MmUserProbeAddress;
      v29 = *v28;
      v42 = v29;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_48;
      if ( !v29 )
      {
        v33 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v33 = 0;
        else
          *(_BYTE *)v33 = 0;
        goto LABEL_48;
      }
      v30 = v41;
      if ( v41 + 24 < v41 || v41 + 24 > MmUserProbeAddress )
        v30 = MmUserProbeAddress;
      v31 = *(_QWORD *)(v30 + 16);
      v48 = *(_OWORD *)v30;
      v49 = v31;
      v32 = *(_QWORD *)(gptiCurrent + 512LL);
      if ( !v32 || (*(_DWORD *)(v32 + 84) & 1) == 0 || *(_QWORD *)(v32 + 96) != a4 )
      {
        v29 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v48, v29, *(_DWORD *)(a4 + 4) >> 31, v38);
        v42 = v29;
        CopyOutputString((volatile void **)&v48, (struct _LARGE_STRING *)a4, v18, v38);
        goto LABEL_48;
      }
    }
  }
LABEL_47:
  v29 = 0LL;
LABEL_48:
  if ( v11 != v53 && v11 != v54 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v50);
  }
  return (unsigned __int8 *)v29;
}
