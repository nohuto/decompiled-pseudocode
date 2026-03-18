/*
 * XREFs of xxxMNStartMenuState @ 0x1C021C5F4
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C021AF28 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C021B890 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C021B978 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C021BAC0 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C021BD14 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C021BE1C (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  PSLIST_ENTRY v10; // rax
  struct tagMENUSTATE *v11; // rax
  __int64 v12; // rbx
  struct tagWND *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagMENUSTATE *v20; // rbx
  _QWORD *v22[2]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v25[2]; // [rsp+60h] [rbp+17h] BYREF
  __int128 v26; // [rsp+70h] [rbp+27h] BYREF
  __int64 v27; // [rsp+80h] [rbp+37h]
  struct tagMENUSTATE *v28; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, 0LL);
  v27 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
    goto LABEL_28;
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v6 + 30) & 8) != 0 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v6 = *((_QWORD *)a1 + 5);
    }
    while ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 120LL);
  }
  if ( !a1 )
    goto LABEL_28;
  v7 = safe_cast_fnid_to_PMENUWND((__int64)a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_28;
  }
  v8 = *((_QWORD *)a1 + 5);
  if ( ((*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 || !*((_QWORD *)a1 + 21)) && (*(_BYTE *)(v8 + 30) & 8) == 0 )
    goto LABEL_28;
  v9 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v9 + 608) )
    goto LABEL_28;
  if ( v9 != gptiCurrent )
  {
    PostTransformableMessage(a1, 0x112u, v3, a3, 1);
LABEL_28:
    v20 = 0LL;
    goto LABEL_29;
  }
  v10 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v22, (__int64)v10);
  if ( !*v22[0] )
    goto LABEL_28;
  v11 = (struct tagMENUSTATE *)MNAllocMenuState(v22);
  if ( !v11 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, *v22[0]);
    MNFreePopup(v25);
    if ( *(void *const *)v22[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v12 = *v22[0];
      NullifyLookasideRef(*(_QWORD *)(*v22[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v12);
    }
    goto LABEL_28;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v28, v11);
  **(_DWORD **)v22[0] |= 1u;
  **(_DWORD **)v22[0] |= 2u;
  v23[1] = a1;
  v23[0] = *v22[0] + 8LL;
  HMAssignmentLock(v23, 0LL);
  *(_DWORD *)(*v22[0] + 80LL) = -1;
  v24[1] = a1;
  v24[0] = *v22[0] + 16LL;
  HMAssignmentLock(v24, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, 0LL);
  MNMarkDelayedFreePopup(v22, v25);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
  *(_QWORD *)(*v22[0] + 64LL) = *v22[0];
  v13 = a1;
  v14 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v14 + 31) & 0xC0) == 0x40 )
  {
    do
      v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
    while ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL) & 0xC0) == 0x40 );
  }
  v15 = *((_QWORD *)v13 + 21);
  if ( v15 )
    **(_DWORD **)v22[0] ^= (**(_DWORD **)v22[0] ^ (*(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) << 17)) & 0x400000;
  else
    **(_DWORD **)v22[0] = **(_DWORD **)v22[0] & 0xFFBFFFFF | ((*(_BYTE *)(v14 + 25) & 0x20) << 17);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v26 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v26;
  *((_QWORD *)&v26 + 1) = a1;
  HMLockObject(a1);
  xxxSendMessage((ULONG_PTR)a1);
  ThreadUnlock1(v18, v17, v19);
  v20 = v28;
  if ( !v28 || (unsigned int)xxxUnlockMenuStateInternal(v28, 0) )
    goto LABEL_28;
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
  return v20;
}
