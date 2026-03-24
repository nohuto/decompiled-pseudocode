/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00D6480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // edi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  struct _KTHREAD *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rcx
  bool v37; // di
  int v38; // r12d
  __int64 v39; // rcx
  struct _KTHREAD *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v54; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v56; // zf
  __int64 v57; // rax
  int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v67; // rax
  int v68; // edi
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // eax
  tagDomLock *v72; // rax
  _DWORD v73[6]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v75; // [rsp+58h] [rbp-C0h]
  __int64 v76; // [rsp+68h] [rbp-B0h]
  __int64 v77; // [rsp+70h] [rbp-A8h] BYREF
  int v78; // [rsp+78h] [rbp-A0h]
  int v79; // [rsp+7Ch] [rbp-9Ch]
  __int64 v80; // [rsp+80h] [rbp-98h]
  __int64 v81; // [rsp+88h] [rbp-90h]
  __int64 v82; // [rsp+90h] [rbp-88h]
  __int64 v83; // [rsp+98h] [rbp-80h]
  _QWORD v84[15]; // [rsp+A0h] [rbp-78h] BYREF
  char v86; // [rsp+130h] [rbp+18h]

  v10 = a2;
  v12 = 0LL;
  v79 = 0;
  v74 = 0LL;
  v73[0] = 0;
  v84[2] = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v54),
        v56 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v10 = a2,
        v56) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v20 = a1[5] - *(_QWORD *)(v14 + 472);
  else
    v20 = 0LL;
  v79 = 0;
  v77 = v20;
  v78 = v10;
  v80 = a3;
  v82 = a5;
  v83 = a6;
  v81 = *a4;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v57 = PsGetCurrentProcess(v24, v23, v25),
        v58 = PsGetProcessSessionIdEx(v57),
        v60 = PsGetCurrentThreadProcess(v59),
        v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v26 )
      v22 = *v26;
  }
  v84[0] = *(_QWORD *)(v22 + 416);
  *(_QWORD *)(v22 + 416) = v84;
  v84[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v27 = *(_QWORD *)(v14 + 480);
  v75 = *(_OWORD *)(v27 + 64);
  v76 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(v27 + 72) = v20;
  if ( a1 )
    v28 = *a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(a1[5] + 224);
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v29;
  if ( gdwInAtomicOperation )
  {
    v29 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v29)
    || (v61 = PsGetCurrentProcess(v33, v32, v34),
        v62 = PsGetProcessSessionIdEx(v61),
        v64 = PsGetCurrentThreadProcess(v63),
        v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  v86 = *(_BYTE *)(v31 + 1480);
  *(_BYTE *)(v31 + 1480) = 0;
  if ( (v86 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v31 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v37 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v36);
  EtwTraceBeginCallback(39LL);
  v38 = KeUserModeCallback(39LL, &v77, 48LL, &v74, v73);
  EtwTraceEndCallback(39LL);
  if ( v37 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v40 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v67 = PsGetCurrentProcess(v42, v41, v43),
        v68 = PsGetProcessSessionIdEx(v67),
        v70 = PsGetCurrentThreadProcess(v69),
        v68 == (unsigned int)PsGetProcessSessionIdEx(v70)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v44 )
      v12 = *v44;
  }
  if ( (v86 & 1) != 0 )
  {
    v71 = DLT_THREADINFO::getDLT();
    v72 = (tagDomLock *)GetDomainLockRef(v71);
    tagDomLock::LockShared(v72);
    tagObjLock::LockExclusive((tagObjLock *)(v12 + 392));
  }
  *(_BYTE *)(v12 + 1480) = v86;
  ThreadUnlock1(v45);
  v46 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v46 + 64) = v75;
  *(_QWORD *)(v46 + 80) = v76;
  if ( v38 >= 0 && v73[0] == 24 )
  {
    v47 = (__int64 *)v74;
    if ( v74 + 8 < v74 || v74 + 8 > MmUserProbeAddress )
      v47 = (__int64 *)MmUserProbeAddress;
    v48 = *v47;
    v84[3] = *v47;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v48;
    v49 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v49 || (*(_DWORD *)(v49 + 84) & 1) == 0 || *(__int64 **)(v49 + 96) != a4 )
    {
      v50 = *(__int64 **)(v74 + 16);
      if ( v50 + 1 < v50 || (unsigned __int64)(v50 + 1) > MmUserProbeAddress )
        v50 = (__int64 *)MmUserProbeAddress;
      *a4 = *v50;
      return v48;
    }
  }
  return 0LL;
}
