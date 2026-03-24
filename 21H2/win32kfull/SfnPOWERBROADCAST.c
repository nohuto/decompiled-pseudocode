/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0022080
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0021A58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-354h]
  int v33; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v34; // [rsp+40h] [rbp-348h]
  int v35; // [rsp+48h] [rbp-340h]
  unsigned __int64 v36; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-318h] BYREF
  __int128 v38; // [rsp+78h] [rbp-310h] BYREF
  __int64 v39; // [rsp+88h] [rbp-300h]
  __int128 v40; // [rsp+90h] [rbp-2F8h]
  __int64 v41; // [rsp+A0h] [rbp-2E8h]
  __int128 v42; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-2D0h]
  __int64 v44; // [rsp+C0h] [rbp-2C8h]
  __int128 v45; // [rsp+E0h] [rbp-2A8h]
  _DWORD v46[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v47[512]; // [rsp+150h] [rbp-238h] BYREF

  v35 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  memset(v46, 0, 0x58uLL);
  v36 = 0LL;
  v33 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  LOBYTE(v12) = 1;
  if ( !HMValidateHandleNoSecure(v15, v12) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(a1[5] + 19) & 1) == 0 )
            return 0LL;
          v28 = 769LL;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v10 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0LL, a1, 769LL, 1LL);
          v28 = 770LL;
        }
        v29 = 0LL;
LABEL_48:
        SetOrClrWF(v29, a1, v28, 1LL);
        goto LABEL_14;
      }
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v28 = 770LL;
    }
    else
    {
      v28 = 769LL;
    }
    v29 = 1LL;
    goto LABEL_48;
  }
LABEL_14:
  v16 = 0;
  v32 = 0;
  if ( v9 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    v16 = *(_DWORD *)(a4 + 16) + 20;
    if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
      return 0LL;
    v32 = *(_DWORD *)(a4 + 16) + 20;
  }
  if ( !v10 )
  {
    v17 = (unsigned __int8 *)v46;
    v34 = (unsigned __int8 *)v46;
    memset(&v46[1], 0, 0x54uLL);
    v46[0] = 88;
    goto LABEL_21;
  }
  v17 = AllocCallbackMessage(88, v10, v16, v47, 1, 0x200uLL);
  v34 = v17;
  if ( !v17 )
    return 0LL;
LABEL_21:
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v42 = 0LL;
  v43 = 0LL;
  if ( v17 != (unsigned __int8 *)v46 && v17 != v47 )
    PushW32ThreadLock(v17, &v42, Win32FreePool);
  *((_QWORD *)v17 + 5) = v14;
  *((_DWORD *)v17 + 12) = v35;
  *((_QWORD *)v17 + 7) = a3;
  if ( v32 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, a4, v32, (void **)v17 + 10) < 0 )
      goto LABEL_58;
  }
  else
  {
    *((_QWORD *)v17 + 10) = a4;
  }
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v38 = *(_QWORD *)(v18 + 416);
  *(_QWORD *)(v18 + 416) = &v38;
  *((_QWORD *)&v38 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v13 + 480);
  v45 = *(_OWORD *)(v19 + 64);
  v40 = v45;
  v41 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v22 = KeUserModeCallback(29LL, v17, *(unsigned int *)v17, &v36, &v33);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  ThreadUnlock1(v23);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v45;
  *(_QWORD *)(v24 + 80) = v41;
  if ( v22 >= 0 && v33 == 24 )
  {
    v25 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v44 = *v25;
    goto LABEL_41;
  }
LABEL_58:
  v26 = 0LL;
LABEL_41:
  if ( v17 != (unsigned __int8 *)v46 && v17 != v47 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v42);
  }
  return v26;
}
