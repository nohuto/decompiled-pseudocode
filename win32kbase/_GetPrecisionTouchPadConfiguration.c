__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 i; // rcx
  int v18; // edx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // xmm0_8

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry();
  v6 = SGDGetUserSessionState(v3, v2, v4, v5);
  v7 = (_DWORD *)(v6 + 16800);
  *(_DWORD *)(v6 + 16812) &= 0xFFFFFFAE;
  *(_DWORD *)(v6 + 16820) &= ~0x80u;
  v12 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 16840) + 1320LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v12, 0LL);
  for ( i = **(_QWORD **)(*(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 16840) + 1328LL);
        i;
        i = *(_QWORD *)(v20 + 56) )
  {
    v18 = v7[3];
    if ( (v18 & 0x10) != 0 && (v18 & 0x40) != 0 )
      break;
    if ( (unsigned int)IsLegacyTouchPad() )
    {
      v7[3] = v19 | 0x10;
    }
    else if ( (*(_DWORD *)(v20 + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(v20 + 472) + 24LL) == 7 )
    {
      v7[3] = v19 | 0x40;
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 472) + 768LL) >= 5u )
        v7[5] |= 0x20u;
      if ( (*(_DWORD *)(v20 + 200) & 0x400) != 0 )
        v7[5] |= 0x80u;
    }
  }
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 520) )
    v7[3] |= 1u;
  if ( a1 )
  {
    v30 = SGDGetUserSessionState(v26, v25, v27, v28);
    v31 = *(_QWORD *)(v30 + 16816);
    *(_OWORD *)a1 = *(_OWORD *)(v30 + 16800);
    *(_QWORD *)(a1 + 16) = v31;
    if ( v7[2] == 4 )
    {
      v26 = (unsigned int)v7[3];
      if ( (v26 & 0x10) != 0 && (v26 & 0x40) == 0 )
        *(_DWORD *)(a1 + 8) = 3;
    }
  }
  UpdateTPCurrentActiveState(v26, v25, v27, v28);
  return 1LL;
}
