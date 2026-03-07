// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(_QWORD *a1, unsigned int a2, __int128 *a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  PVOID v11; // rax
  struct tagMENUSTATE *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagMENUSTATE *v20; // rbx
  _QWORD *v21[2]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v24[2]; // [rsp+60h] [rbp+17h] BYREF
  __int128 v25; // [rsp+70h] [rbp+27h] BYREF
  __int64 v26; // [rsp+80h] [rbp+37h]
  struct tagMENUSTATE *v27; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v26 = 0LL;
  v25 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
    goto LABEL_16;
  v6 = a1[5];
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v6 + 30) & 8) != 0 )
        break;
      a1 = (_QWORD *)a1[13];
      v6 = a1[5];
    }
    while ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD **)(*(_QWORD *)(a1[2] + 432LL) + 128LL);
  }
  if ( !a1 )
    goto LABEL_16;
  v7 = safe_cast_fnid_to_PMENUWND((__int64)a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_16;
  }
  v8 = a1[5];
  if ( ((*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 || !a1[21]) && (*(_BYTE *)(v8 + 30) & 8) == 0 )
    goto LABEL_16;
  v9 = a1[2];
  if ( *(_QWORD *)(v9 + 608) )
    goto LABEL_16;
  if ( v9 != gptiCurrent )
  {
    PostTransformableMessage((unsigned __int64)a1, 0x112u, v3, a3, 1);
LABEL_16:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v21);
    return 0LL;
  }
  v11 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, (__int64)v11);
  if ( !*v21[0] )
    goto LABEL_16;
  v12 = (struct tagMENUSTATE *)MNAllocMenuState(v21);
  if ( !v12 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *v21[0]);
    MNFreePopup(v24);
    if ( *(void *const *)v21[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v13 = *v21[0];
      NullifyLookasideRef(*(_QWORD *)(*v21[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v13);
    }
    goto LABEL_16;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v27, v12);
  **(_DWORD **)v21[0] |= 1u;
  **(_DWORD **)v21[0] |= 2u;
  v22[1] = a1;
  v22[0] = *v21[0] + 8LL;
  HMAssignmentLock(v22, 0LL);
  *(_DWORD *)(*v21[0] + 80LL) = -1;
  v23[1] = a1;
  v23[0] = *v21[0] + 16LL;
  HMAssignmentLock(v23, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, 0LL);
  MNMarkDelayedFreePopup(v21, v24);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v24);
  *(_QWORD *)(*v21[0] + 64LL) = *v21[0];
  v14 = a1;
  v15 = a1[5];
  if ( (*(_BYTE *)(v15 + 31) & 0xC0) == 0x40 )
  {
    do
      v14 = (_QWORD *)v14[13];
    while ( (*(_BYTE *)(v14[5] + 31LL) & 0xC0) == 0x40 );
  }
  v16 = v14[21];
  if ( v16 )
    **(_DWORD **)v21[0] ^= (**(_DWORD **)v21[0] ^ (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 40LL) << 17)) & 0x400000;
  else
    **(_DWORD **)v21[0] = **(_DWORD **)v21[0] & 0xFFBFFFFF | ((*(_BYTE *)(v15 + 25) & 0x20) << 17);
  ThreadLockAlways(a1, &v25);
  xxxSendMessage((struct tagWND *)a1, 0x211u);
  ThreadUnlock1(v18, v17, v19);
  v20 = v27;
  if ( !v27 || (unsigned int)xxxUnlockMenuState(v27) )
    v20 = 0LL;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v21);
  return v20;
}
