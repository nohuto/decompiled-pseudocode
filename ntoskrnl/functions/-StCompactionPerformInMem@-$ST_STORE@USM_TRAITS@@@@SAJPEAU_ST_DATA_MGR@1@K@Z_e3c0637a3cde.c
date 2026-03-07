__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r9d
  __int64 v6; // rbp
  unsigned int Emptiest; // eax
  unsigned int v8; // r12d
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // r13d
  _WORD **v14; // r12
  __int64 v15; // rax
  unsigned int v18; // [rsp+34h] [rbp-164h]
  _WORD *v19; // [rsp+38h] [rbp-160h]
  _OWORD v20[2]; // [rsp+40h] [rbp-158h] BYREF
  char v21[256]; // [rsp+60h] [rbp-138h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1;
  LODWORD(v6) = -1;
  memset(v20, 0, sizeof(v20));
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(a1, v21, 0x20u, v5);
  v8 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v21, Emptiest, v20);
  v9 = (__int64)(*(_QWORD *)&v20[0] - *(_QWORD *)(a1 + 1032)) >> 1;
  v18 = v8;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v9) )
    return (unsigned int)-1073740024;
  v11 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v9, 0LL, 32LL);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741739;
  if ( v11 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v10 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v11, v9, v11, v9, a2);
    if ( v10 < 0 )
      goto LABEL_24;
    v13 = 1;
    if ( v8 <= 1 )
    {
LABEL_21:
      v10 = 0;
LABEL_22:
      v4 = 0LL;
    }
    else
    {
      v14 = (_WORD **)v20 + 1;
      while ( 1 )
      {
        v19 = *v14;
        v6 = ((__int64)*v14 - *(_QWORD *)(a1 + 1032)) >> 1;
        if ( _bittest((const signed __int32 *)(a1 + 776), 0x12u)
          && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v6) )
        {
LABEL_28:
          v10 = -1073740024;
          goto LABEL_22;
        }
        v15 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v6, 0LL, 32LL);
        v4 = v15;
        if ( !v15 )
          break;
        if ( v15 == -1 )
          goto LABEL_28;
        if ( _bittest((const signed __int32 *)(a1 + 776), 0x12u)
          && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v9) )
        {
          v10 = -1073740024;
          goto LABEL_23;
        }
        v10 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v4, v6, v12, v9, a2);
        if ( (*v19 & 0x1FFF) != 0 )
        {
          ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v9);
          v12 = v4;
          LODWORD(v9) = v6;
          v4 = 0LL;
        }
        else
        {
          ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
          v4 = 0LL;
          ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
        }
        if ( v10 < 0 )
          goto LABEL_23;
        ++v13;
        ++v14;
        if ( v13 >= v18 )
          goto LABEL_21;
      }
      v10 = -1073741739;
    }
LABEL_23:
    if ( v12 )
LABEL_24:
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v9);
    if ( v4 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
  }
  return (unsigned int)v10;
}
