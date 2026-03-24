/*
 * XREFs of SfnDWORD @ 0x1C006B320
 * Callers:
 *     xxxSendMessageCallback @ 0x1C0040544 (xxxSendMessageCallback.c)
 *     xxxDefWindowProc @ 0x1C00484E0 (xxxDefWindowProc.c)
 *     xxxReceiveMessage @ 0x1C0058F60 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059E70 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C005CA10 (xxxHkCallHook.c)
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C011EA8C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C015EE10 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // edi
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  struct _KTHREAD *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  bool v35; // di
  int v36; // r12d
  __int64 v37; // rcx
  struct _KTHREAD *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v49; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v51; // zf
  __int64 v52; // rax
  int v53; // edi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // eax
  tagDomLock *v67; // rax
  unsigned __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  int v72; // [rsp+70h] [rbp-98h]
  int v73; // [rsp+74h] [rbp-94h]
  __int64 v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+90h] [rbp-78h]
  _QWORD v78[14]; // [rsp+98h] [rbp-70h] BYREF
  char v80; // [rsp+120h] [rbp+18h]
  int v81; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  v10 = 0LL;
  v73 = 0;
  v68 = 0LL;
  v81 = 0;
  v78[2] = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v49),
        v51 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v8 = a2,
        v51) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v12 + 472);
  else
    v18 = 0LL;
  v73 = 0;
  v71 = v18;
  v72 = v8;
  v74 = a3;
  v75 = a4;
  v76 = a5;
  v77 = a6;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (v52 = PsGetCurrentProcess(v22, v21, v23),
        v53 = PsGetProcessSessionIdEx(v52),
        v55 = PsGetCurrentThreadProcess(v54),
        v53 == (unsigned int)PsGetProcessSessionIdEx(v55)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v24 )
      v20 = *v24;
  }
  v78[0] = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = v78;
  v78[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v25 = *(_QWORD *)(v12 + 480);
  v69 = *(_OWORD *)(v25 + 64);
  v70 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v18;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v27;
  if ( gdwInAtomicOperation )
  {
    v27 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v27)
    || (v56 = PsGetCurrentProcess(v31, v30, v32),
        v57 = PsGetProcessSessionIdEx(v56),
        v59 = PsGetCurrentThreadProcess(v58),
        v57 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v33 )
      v29 = *v33;
  }
  v80 = *(_BYTE *)(v29 + 1480);
  *(_BYTE *)(v29 + 1480) = 0;
  if ( (v80 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v29 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v35 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v34);
  EtwTraceBeginCallback(2LL);
  v36 = KeUserModeCallback(2LL, &v71, 48LL, &v68, &v81);
  EtwTraceEndCallback(2LL);
  if ( v35 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v38 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v37)
    || (v62 = PsGetCurrentProcess(v40, v39, v41),
        v63 = PsGetProcessSessionIdEx(v62),
        v65 = PsGetCurrentThreadProcess(v64),
        v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v42 )
      v10 = *v42;
  }
  if ( (v80 & 1) != 0 )
  {
    v66 = DLT_THREADINFO::getDLT();
    v67 = (tagDomLock *)GetDomainLockRef(v66);
    tagDomLock::LockShared(v67);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 392));
  }
  *(_BYTE *)(v10 + 1480) = v80;
  ThreadUnlock1(v43);
  v44 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v44 + 64) = v69;
  *(_QWORD *)(v44 + 80) = v70;
  if ( v36 < 0 || v81 != 24 )
    return 0LL;
  v45 = (__int64 *)v68;
  if ( v68 + 8 < v68 || v68 + 8 > MmUserProbeAddress )
    v45 = (__int64 *)MmUserProbeAddress;
  result = *v45;
  v78[3] = result;
  return result;
}
