/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00F9CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0136788 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  struct _KTHREAD *v20; // r12
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm6
  __int64 v28; // xmm7_8
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ebx
  LeaveEnterCrit *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdi
  ULONG64 v37; // rcx
  __int128 *v38; // xmm0_8
  __int128 *v39; // rbx
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v45; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rax
  _BYTE v51[4]; // [rsp+30h] [rbp-1C8h] BYREF
  _DWORD v52[7]; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-1A0h]
  __int64 v55; // [rsp+70h] [rbp-188h]
  _QWORD v56[3]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v57; // [rsp+90h] [rbp-168h]
  __int64 v58; // [rsp+A0h] [rbp-158h]
  __int64 v59; // [rsp+A8h] [rbp-150h]
  __int64 v60; // [rsp+B0h] [rbp-148h]
  __int128 v61; // [rsp+D8h] [rbp-120h]
  volatile void *Address; // [rsp+E8h] [rbp-110h]
  __int128 v63; // [rsp+F0h] [rbp-108h]
  __int128 *v64; // [rsp+100h] [rbp-F8h]
  _OWORD v65[9]; // [rsp+110h] [rbp-E8h] BYREF

  v55 = a3;
  v53 = 0LL;
  v52[0] = 0;
  v56[2] = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v45),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v18 = 0LL;
  v54 = 136LL;
  memset(v65, 0, 0x88uLL);
  *(_QWORD *)&v65[0] = v18;
  DWORD2(v65[0]) = a2;
  *(_QWORD *)&v65[1] = a3;
  *((_QWORD *)&v65[1] + 1) = a5;
  *(_QWORD *)&v65[2] = a6;
  *(_OWORD *)((char *)&v65[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v65[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v65[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v65[5] + 1) = *(_QWORD *)(a4 + 48);
    v19 = 0LL;
    *(_DWORD *)(*((_QWORD *)&v65[5] + 1) + 36LL) = 0;
    v65[6] = **((_OWORD **)&v65[5] + 1);
    v65[7] = *(_OWORD *)(*((_QWORD *)&v65[5] + 1) + 16LL);
    *(_QWORD *)&v65[8] = *(_QWORD *)(*((_QWORD *)&v65[5] + 1) + 32LL);
    *((_QWORD *)&v65[5] + 1) = 0LL;
  }
  else
  {
    LODWORD(v54) = 56;
  }
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v47 = PsGetCurrentProcess(v23, v22, v24),
        v48 = PsGetProcessSessionIdEx(v47),
        v50 = PsGetCurrentThreadProcess(v49),
        v48 == (unsigned int)PsGetProcessSessionIdEx(v50)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v25 )
      v21 = *v25;
  }
  v56[0] = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = v56;
  v56[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 480);
  v27 = *(_OWORD *)(v26 + 64);
  v57 = v27;
  v28 = *(_QWORD *)(v26 + 80);
  v58 = v28;
  *(_QWORD *)(v26 + 72) = v18;
  if ( a1 )
    v29 = *a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(a1[5] + 224);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v51);
  EtwTraceBeginCallback(21LL);
  v31 = KeUserModeCallback(21LL, v65, (unsigned int)v54, &v53, v52);
  EtwTraceEndCallback(21LL);
  LeaveEnterCrit::~LeaveEnterCrit(v32);
  ThreadUnlock1(v33);
  v34 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v34 + 64) = v27;
  *(_QWORD *)(v34 + 80) = v28;
  if ( v31 < 0 || v52[0] != 24 )
    return 0LL;
  v35 = (__int64 *)v53;
  if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  v36 = *v35;
  v59 = *v35;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v37 = v53;
    if ( v53 + 24 < v53 || v53 + 24 > MmUserProbeAddress )
      v37 = MmUserProbeAddress;
    v61 = *(_OWORD *)v37;
    v38 = *(__int128 **)(v37 + 16);
    Address = v38;
    v63 = v61;
    v64 = v38;
    v39 = v38;
    ProbeForRead(v38, 0x60uLL, 4u);
    v40 = *v38;
    if ( v55 )
    {
      v60 = *(_QWORD *)(a4 + 48);
      v41 = v60;
      *(_OWORD *)a4 = v40;
      *(_OWORD *)(a4 + 16) = v39[1];
      *(_OWORD *)(a4 + 32) = v39[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v39 + 6);
      *(_OWORD *)v41 = *(__int128 *)((char *)v39 + 56);
      *(_OWORD *)(v41 + 16) = *(__int128 *)((char *)v39 + 72);
      *(_QWORD *)(v41 + 32) = *((_QWORD *)v39 + 11);
      *(_QWORD *)(a4 + 48) = v41;
    }
    else
    {
      *(_OWORD *)a4 = v40;
    }
  }
  return v36;
}
