/*
 * XREFs of xxxMNStartMenuState @ 0x1C02224D0
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C003F8B8 (_PostTransformableMessage.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01690B8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     NullifyLookasideRef @ 0x1C0221190 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C0221278 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C02213C8 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C02217B8 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C02219A4 (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  void *v8; // rdx
  __int64 v9; // rax
  void *v10; // rax
  struct tagMENUSTATE *v11; // rax
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  struct tagMENUSTATE *v30; // rdi
  struct _KTHREAD *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rax
  _QWORD *v41; // rcx
  _QWORD *v43[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v44[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp+7h] BYREF
  void *const *v47[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v48; // [rsp+80h] [rbp+27h] BYREF
  __int64 v49; // [rsp+90h] [rbp+37h]
  struct tagMENUSTATE *v50; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v43, 0LL);
  v49 = 0LL;
  v48 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
    goto LABEL_38;
  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v6 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
      v6 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
    a1 = *(_QWORD *)(v6 + 120);
  }
  if ( !a1 )
    goto LABEL_38;
  v7 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_38;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 168)) && (*(_BYTE *)(v6 + 30) & 8) == 0 )
    goto LABEL_38;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v9 + 608) )
    goto LABEL_38;
  if ( v9 != gptiCurrent )
  {
    PostTransformableMessage((struct tagWND *)a1, 0x112u, v3, a3, 1);
LABEL_38:
    v30 = 0LL;
    goto LABEL_39;
  }
  v10 = MNAllocPopup(0, v8);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v43, (__int64)v10);
  if ( !*v43[0] )
    goto LABEL_38;
  v11 = (struct tagMENUSTATE *)MNAllocMenuState(v43);
  if ( !v11 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, *v43[0]);
    MNFreePopup(v47);
    if ( *(void *const *)v43[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v12 = *v43[0];
      NullifyLookasideRef(*(_QWORD *)(*v43[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v12);
    }
    goto LABEL_38;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v50, v11);
  **(_DWORD **)v43[0] |= 1u;
  **(_DWORD **)v43[0] |= 2u;
  v45[1] = a1;
  v45[0] = *v43[0] + 8LL;
  HMAssignmentLock(v45);
  *(_DWORD *)(*v43[0] + 80LL) = -1;
  v46[1] = a1;
  v46[0] = *v43[0] + 16LL;
  HMAssignmentLock(v46);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v44, 0LL);
  MNMarkDelayedFreePopup(v43, v44);
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( v44[0] != gSmartObjNullRef && !--*(_DWORD *)(v44[0] + 8) )
  {
    if ( *(_BYTE *)(v44[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v44[0]);
  }
  v24 = *(_QWORD **)(v14 + 1472);
  if ( v24 )
    *(_QWORD *)(v14 + 1472) = *v24;
  *(_QWORD *)(*v43[0] + 64LL) = *v43[0];
  v25 = (_QWORD *)a1;
  v26 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v26 + 31) & 0xC0) == 0x40 )
  {
    do
      v25 = (_QWORD *)v25[13];
    while ( (*(_BYTE *)(v25[5] + 31LL) & 0xC0) == 0x40 );
  }
  v27 = v25[21];
  if ( v27 )
    **(_DWORD **)v43[0] ^= (**(_DWORD **)v43[0] ^ (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 40LL) << 17)) & 0x400000;
  else
    **(_DWORD **)v43[0] = **(_DWORD **)v43[0] & 0xFFBFFFFF | ((*(_BYTE *)(v26 + 25) & 0x20) << 17);
  v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v48 = *(_QWORD *)(v28 + 416);
  *(_QWORD *)(v28 + 416) = &v48;
  *((_QWORD *)&v48 + 1) = a1;
  HMLockObject(a1);
  xxxSendMessage(a1, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v29);
  v30 = v50;
  if ( !v50 || (unsigned int)xxxUnlockMenuStateInternal(v50, 0) )
    goto LABEL_38;
LABEL_39:
  v31 = KeGetCurrentThread();
  v32 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (v36 = PsGetCurrentProcess(v34, v33, v35),
        v37 = PsGetProcessSessionIdEx(v36),
        v39 = PsGetCurrentThreadProcess(v38),
        v37 == (unsigned int)PsGetProcessSessionIdEx(v39)) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v31);
    if ( v40 )
      v32 = *v40;
  }
  if ( v43[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v43[0] + 2) )
  {
    if ( *((_BYTE *)v43[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v43[0]);
  }
  v41 = *(_QWORD **)(v32 + 1472);
  if ( v41 )
    *(_QWORD *)(v32 + 1472) = *v41;
  return v30;
}
