__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  __int64 v4; // r13
  __int16 v5; // dx
  int started; // ebx
  bool v7; // di
  unsigned int v8; // r15d
  __int64 Pool; // rax
  __int64 v10; // r14
  __int64 i; // rsi
  __int128 *v12; // rbx
  __int128 *v13; // r12
  signed __int64 *v14; // rbx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdi
  __int128 *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  signed __int64 *v22; // r13
  __int64 v23; // rbx
  __int64 v24; // r8
  signed __int64 *v25; // r13
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rsi
  __int128 *v29; // rax
  struct _PRIVILEGE_SET *Privileges; // [rsp+20h] [rbp-58h]
  __int128 v32; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v33[2]; // [rsp+40h] [rbp-38h]
  __int128 v34; // [rsp+50h] [rbp-28h] BYREF
  PPRIVILEGE_SET v35[2]; // [rsp+60h] [rbp-18h]
  __int128 *v36; // [rsp+C0h] [rbp+48h]
  __int64 KcbAtLayerHeight; // [rsp+D8h] [rbp+60h]

  v3 = *(_WORD *)(a1 + 2);
  v32 = 0LL;
  WORD1(v32) = -1;
  v34 = 0LL;
  WORD1(v34) = -1;
  *(_OWORD *)v33 = 0LL;
  *(_OWORD *)v35 = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
  v4 = KcbAtLayerHeight;
  started = CmpStartKcbStack((__int64)&v32, v5);
  if ( started < 0 )
    goto LABEL_47;
  started = CmpStartKcbStack((__int64)&v34, v3);
  if ( started < 0 )
    goto LABEL_47;
  v7 = 1;
  v8 = ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FF) + 1;
  Pool = CmpAllocatePool(256LL, 8LL * v8, 926305603LL);
  Privileges = (struct _PRIVILEGE_SET *)Pool;
  if ( !Pool )
  {
    started = -1073741670;
    goto LABEL_47;
  }
  LODWORD(v10) = v8;
  for ( i = KcbAtLayerHeight; !_bittest((const signed __int32 *)(i + 184), 0x12u); i = *(_QWORD *)(i + 72) )
  {
    v10 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
    *(_QWORD *)(Pool + 8 * v10) = i;
  }
  v12 = &v34;
  v36 = &v34;
  v13 = &v32;
  CmpPopulateKcbStack((__int64)&v34, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)&v34);
  if ( i != KcbAtLayerHeight )
  {
    while ( 1 )
    {
      if ( (unsigned int)v10 >= v8 )
      {
        v18 = v36;
        goto LABEL_39;
      }
      v19 = *((_QWORD *)&Privileges->PrivilegeCount + (unsigned int)v10);
      CmpPopulateKcbStack((__int64)v13, v19);
      CmpLockKcbStackTopExclusiveRestShared(v20);
      if ( CmpIsKeyStackDeleted((__int64)v13) )
      {
        v18 = v36;
        started = -1073741444;
LABEL_43:
        CmpUnlockKcbStack((__int64)v13);
LABEL_40:
        if ( v7 )
          goto LABEL_45;
        goto LABEL_46;
      }
      v21 = *(_DWORD *)(v19 + 40);
      if ( v19 == v4 )
      {
        if ( v21 != -1 && !a2 )
          goto LABEL_36;
        v25 = (signed __int64 *)(*(_QWORD *)(v19 + 32) + 72LL);
        v26 = KeAbPreAcquire((__int64)v25, 0LL);
        if ( _InterlockedCompareExchange64(v25, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v25, 0, v26, (__int64)v25);
        if ( v26 )
          *(_BYTE *)(v26 + 18) = 1;
        LOBYTE(v24) = a2;
      }
      else
      {
        if ( v21 != -1 )
          goto LABEL_36;
        v22 = (signed __int64 *)(*(_QWORD *)(v19 + 32) + 72LL);
        v23 = KeAbPreAcquire((__int64)v22, 0LL);
        if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v22, 0, v23, (__int64)v22);
        if ( v23 )
          *(_BYTE *)(v23 + 18) = 1;
        v24 = 0LL;
      }
      v18 = v36;
      v27 = CmpPromoteSingleKeyFromKcbStacks(v36, v13, v24);
      v28 = *(_QWORD *)(v19 + 32);
      started = v27;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v28 + 72));
      KeAbPostRelease(v28 + 72);
      if ( started < 0 )
        goto LABEL_43;
      v12 = v36;
      v4 = KcbAtLayerHeight;
LABEL_36:
      CmpUnlockKcbStack((__int64)v12);
      v29 = v13;
      LODWORD(v10) = v10 + 1;
      v13 = v12;
      v36 = v29;
      v12 = v29;
    }
  }
  if ( !a2 )
    goto LABEL_16;
  v14 = (signed __int64 *)(*(_QWORD *)(i + 32) + 72LL);
  v15 = KeAbPreAcquire((__int64)v14, 0LL);
  if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  v16 = CmpFullPromoteHiveRootFromKcbStack((__int64)&v34);
  v17 = *(_QWORD *)(i + 32);
  started = v16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
  KeAbPostRelease(v17 + 72);
  if ( started >= 0 )
  {
LABEL_16:
    v18 = &v34;
LABEL_39:
    started = 0;
    v7 = a3 == 0;
    goto LABEL_40;
  }
  v18 = &v34;
LABEL_45:
  CmpUnlockKcbStack((__int64)v18);
LABEL_46:
  CmSiFreeMemory(Privileges);
LABEL_47:
  if ( v33[1] )
    CmSiFreeMemory(v33[1]);
  if ( v35[1] )
    CmSiFreeMemory(v35[1]);
  return (unsigned int)started;
}
