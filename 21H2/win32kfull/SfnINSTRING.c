/*
 * XREFs of SfnINSTRING @ 0x1C011EEF0
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C011EE0C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0021A58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0023D74 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C0169A84 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
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
  unsigned __int8 *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rsi
  unsigned __int8 *result; // rax
  void **v26; // r9
  unsigned int v27; // r8d
  CHAR *v28; // rdx
  unsigned int v29; // r8d
  int v30; // eax
  char v31; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-367h] BYREF
  int v33; // [rsp+34h] [rbp-364h]
  int v34; // [rsp+38h] [rbp-360h] BYREF
  unsigned __int8 *v35; // [rsp+40h] [rbp-358h]
  unsigned int v36; // [rsp+48h] [rbp-350h]
  unsigned __int64 v37; // [rsp+60h] [rbp-338h] BYREF
  __int64 v38; // [rsp+70h] [rbp-328h]
  __int128 v39; // [rsp+78h] [rbp-320h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-310h] BYREF
  __int128 v41; // [rsp+90h] [rbp-308h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-2F8h]
  __int128 v43; // [rsp+A8h] [rbp-2F0h]
  __int64 v44; // [rsp+B8h] [rbp-2E0h]
  __int128 v45; // [rsp+C0h] [rbp-2D8h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-2C8h]
  __int64 v47; // [rsp+D8h] [rbp-2C0h]
  _DWORD v48[24]; // [rsp+100h] [rbp-298h] BYREF
  unsigned __int8 v49[512]; // [rsp+160h] [rbp-238h] BYREF

  v38 = a3;
  v36 = a2;
  memset(v48, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v48;
  v37 = 0LL;
  v34 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v39 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v11 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v12) = 0;
    v13 = 0;
LABEL_7:
    v33 = v12;
    goto LABEL_8;
  }
  v13 = 1;
  v12 = (unsigned int)(*a4 + 2);
  if ( (unsigned int)v12 < *a4 )
    goto LABEL_44;
  v33 = *a4 + 2;
  if ( a4[1] < 0 && (a7 & 1) == 0 )
  {
    v12 *= 2LL;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_44;
    goto LABEL_7;
  }
LABEL_8:
  if ( v13 )
  {
    result = AllocCallbackMessage(88, v13, (unsigned int)v12, v49, 1, 0x200uLL);
    v9 = result;
    v35 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v48;
    v35 = (unsigned __int8 *)v48;
    memset(&v48[1], 0, 0x54uLL);
    v48[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v45 = 0LL;
  v46 = 0LL;
  if ( v9 != (unsigned __int8 *)v48 && v9 != v49 )
    PushW32ThreadLock((__int64)v9, &v45, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v11;
  *((_DWORD *)v9 + 12) = v36;
  *((_QWORD *)v9 + 7) = v38;
  if ( v13 )
  {
    v26 = (void **)(v9 + 80);
    v27 = *a4;
    v28 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v29 = v27 + 1;
        goto LABEL_42;
      }
      v30 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v28, 2 * v27 + 2, v26);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v29 = v27 + 2;
LABEL_42:
        v30 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v28, v29, v26);
        goto LABEL_43;
      }
      v30 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v28, (PCWCH)((v27 >> 1) + 1), v26, 0);
    }
LABEL_43:
    if ( v30 < 0 )
      goto LABEL_44;
    goto LABEL_15;
  }
  if ( a4 )
    v14 = *((_QWORD *)a4 + 1);
  else
    v14 = 0LL;
  *((_QWORD *)v9 + 10) = v14;
LABEL_15:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v41 = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = &v41;
  *((_QWORD *)&v41 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = v39;
  v17 = *(_QWORD *)(v39 + 480);
  v39 = *(_OWORD *)(v17 + 64);
  v43 = v39;
  v44 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v20 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v37, &v34);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  ThreadUnlock1(v21);
  v22 = *(_QWORD *)(v16 + 480);
  *(_OWORD *)(v22 + 64) = v39;
  *(_QWORD *)(v22 + 80) = v44;
  if ( v20 >= 0 && v34 == 24 )
  {
    v23 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v47 = *v23;
    goto LABEL_30;
  }
LABEL_44:
  v24 = 0LL;
LABEL_30:
  if ( v9 != (unsigned __int8 *)v48 && v9 != v49 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v45);
  }
  return (unsigned __int8 *)v24;
}
