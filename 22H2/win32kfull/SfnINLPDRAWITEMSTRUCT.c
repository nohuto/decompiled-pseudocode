/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C0154F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  HDC v26; // rcx
  struct tagWND *v27; // rax
  char v28; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-137h] BYREF
  int v30; // [rsp+34h] [rbp-134h] BYREF
  int v31; // [rsp+38h] [rbp-130h]
  unsigned __int64 v32; // [rsp+50h] [rbp-118h] BYREF
  __int128 v33; // [rsp+60h] [rbp-108h]
  __int64 v34; // [rsp+70h] [rbp-F8h]
  _QWORD v35[7]; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-B8h]
  __int64 v37; // [rsp+C0h] [rbp-A8h] BYREF
  int v38; // [rsp+C8h] [rbp-A0h]
  int v39; // [rsp+CCh] [rbp-9Ch]
  __int64 v40; // [rsp+D0h] [rbp-98h]
  __int128 v41; // [rsp+D8h] [rbp-90h]
  __int128 v42; // [rsp+E8h] [rbp-80h]
  __int128 v43; // [rsp+F8h] [rbp-70h]
  __int128 v44; // [rsp+108h] [rbp-60h]
  __int64 v45; // [rsp+118h] [rbp-50h]
  __int64 v46; // [rsp+120h] [rbp-48h]

  v31 = a2;
  v32 = 0LL;
  v30 = 0;
  v35[2] = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v39 = 0;
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*((_QWORD *)a4 + 4), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v26 = (HDC)*((_QWORD *)a4 + 4);
    if ( v26 )
    {
      v27 = WindowFromDC(v26);
      if ( v27 )
      {
        v14 = *((_QWORD *)a4 + 4);
        *((_QWORD *)a4 + 4) = _GetDC(v27);
      }
    }
  }
  v37 = v13;
  v38 = v31;
  v40 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v41 = *a4;
  v42 = a4[1];
  v43 = a4[2];
  v44 = a4[3];
  v45 = a5;
  v46 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 480);
  v36 = *(_OWORD *)(v17 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(12LL);
  v20 = KeUserModeCallback(12LL, &v37, 104LL, &v32, &v30);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  ThreadUnlock1(v21);
  v22 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v22 + 64) = v36;
  *(_QWORD *)(v22 + 80) = v34;
  if ( v20 < 0 || v30 != 24 )
    return 0LL;
  v23 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v35[3] = *v23;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*((_QWORD *)a4 + 4));
    *((_QWORD *)a4 + 4) = v14;
  }
  return v24;
}
