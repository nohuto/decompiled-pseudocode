__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r15d
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // r13d
  char *PoolWithTag; // r12
  char *v12; // r14
  __int64 v14; // rax
  char *v15; // rcx
  char *v16; // rdx
  __int64 v17; // r9
  char **v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // esi
  int v22; // ecx
  unsigned int v23; // ebp
  char **i; // rdx
  char *v25; // r8
  KIRQL v26; // al
  _QWORD *v27; // r14
  __int64 v28; // r8
  _QWORD *v29; // rax
  _QWORD *VacbLevel; // rax
  _DWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD v33[3]; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+38h] [rbp-30h]
  int v35; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v36; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v35 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v33[2] = 0LL;
  v34 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v33[1] = v33;
  v33[0] = v33;
  if ( a2 <= v5 )
    goto LABEL_30;
  if ( v5 >= 0x2000000 )
    goto LABEL_29;
  v5 = a2;
  if ( a2 >= 0x2000000 )
    v5 = 0x2000000LL;
  v6 = -1;
  if ( HIDWORD(v5) )
  {
    v7 = -1;
  }
  else if ( (unsigned int)v5 <= 0x100000 )
  {
    v7 = 32;
  }
  else
  {
    v7 = 8 * ((unsigned int)v5 >> 18);
  }
  v36 = v7;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v8 = *(_DWORD *)(a1 + 32);
    if ( v8 <= 0x100000 )
      v6 = 32;
    else
      v6 = 8 * (v8 >> 18);
  }
  if ( v7 <= v6 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 32) = v5;
LABEL_29:
    if ( a2 <= v5 )
    {
LABEL_30:
      CcFreeUnusedVacbLevels((__int64)v33);
      return 0LL;
    }
    v21 = 1;
    v22 = 25;
    if ( v5 > 0x2000000 )
    {
      do
      {
        v22 += 7;
        ++v21;
      }
      while ( v5 > 1LL << v22 );
    }
    v23 = v21;
    if ( !((a2 - 1) >> v22) )
      goto LABEL_46;
    do
    {
      v22 += 7;
      ++v23;
    }
    while ( (a2 - 1) >> v22 );
    if ( v23 <= v21 )
    {
LABEL_46:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_30;
    }
    v26 = KeAcquireQueuedSpinLock(4uLL);
    if ( v23 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v23 + 1;
    KeReleaseQueuedSpinLock(4uLL, v26);
    if ( CcAllocateVacbLevels(v23 - v21, 0, (__int64)v33) )
    {
      CcAcquireBcbLockAndVacbLock(v2, a1);
      if ( v21 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
      v27 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v27, v21 - 1) )
      {
        do
        {
          ++v21;
          VacbLevel = CcAllocateVacbLevel((__int64)v33, 0);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v31 = (_DWORD *)VacbLevelReference(a1, (__int64)VacbLevel, v21);
          ++*v31;
          *(_QWORD *)(a1 + 88) = v32;
        }
        while ( v21 < v23 );
      }
      else if ( v21 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel((__int64)v33, 0);
        v28 = v27[128];
        v29 = (_QWORD *)v27[255];
        *(_QWORD *)(v28 + 8) = v29;
        *v29 = v28;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v27);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v2, a1);
      goto LABEL_46;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v7 += (v7 + 15) & 0xFFFFFFF0;
  v9 = v7 + 8;
  if ( a2 < 0x2000000 )
    v9 = v7;
  v10 = v9;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v2, a1);
    v12 = *(char **)(a1 + 88);
    if ( v12 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v6);
    else
      v6 = 0;
    memset(&PoolWithTag[v6], 0, v36 - v6);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v10 - 8] = 0LL;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = &PoolWithTag[v36];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v12 )
      {
        v16 = &v12[v6];
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = (char **)*((_QWORD *)v16 + 1);
          if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
            break;
          if ( *v18 != v16 )
            break;
          *v18 = (char *)v17;
          *(_QWORD *)(v17 + 8) = v18;
          if ( *v18 != (char *)v17 )
            break;
          *(_QWORD *)v15 = v17;
          v14 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v36 - (unsigned __int64)v6 - (_QWORD)v12 + 8 + (_QWORD)v16] = v18;
          v16 += 16;
          *v18 = v15;
          *(_QWORD *)(v17 + 8) = v15;
          v15 += 16;
          if ( v14 >= *(_QWORD *)(a1 + 32) )
          {
            v19 = a1 + 16;
            goto LABEL_40;
          }
        }
LABEL_72:
        __fastfail(3u);
      }
      for ( i = *(char ***)(a1 + 24); ; i = (char **)i[1] )
      {
        v19 = a1 + 16;
        if ( i == (char **)(a1 + 16) )
          break;
        while ( v14 <= (__int64)*(i - 1) )
        {
          v25 = *i;
          if ( *((char ***)*i + 1) != i )
            goto LABEL_72;
          *(_QWORD *)v15 = v25;
          v14 += 0x80000LL;
          *((_QWORD *)v15 + 1) = i;
          *((_QWORD *)v25 + 1) = v15;
          *i = v15;
          v15 += 16;
        }
      }
LABEL_40:
      while ( v14 < v5 )
      {
        v20 = *(_QWORD *)v19;
        if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
          goto LABEL_72;
        *(_QWORD *)v15 = v20;
        v14 += 0x80000LL;
        *((_QWORD *)v15 + 1) = v19;
        *(_QWORD *)(v20 + 8) = v15;
        *(_QWORD *)v19 = v15;
        v15 += 16;
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v5;
    CcReleaseBcbLockAndVacbLock(v2, a1);
    if ( v12 != (char *)(a1 + 56) && v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_28;
  }
  return 3221225626LL;
}
