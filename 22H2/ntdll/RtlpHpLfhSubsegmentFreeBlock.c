/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0
 * Callers:
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800070C0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800213F4 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpHpScheduleCompaction @ 0x180022DF8 (RtlpHpScheduleCompaction.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006F350 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180079C34 (RtlpHpLfhSubsegmentSetOwner.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapFailure @ 0x18010E03C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // r10d
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  signed __int64 v8; // r15
  unsigned int v9; // eax
  int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // r11
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  char v20; // cl
  unsigned int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // r11
  char *v24; // r9
  __int64 v25; // rbx
  char *v26; // rcx
  int v27; // edx
  signed __int16 v28; // ax
  int v29; // ebp
  int v30; // edi
  unsigned __int16 v31; // dx
  signed __int64 v33; // rbx
  _RTL_SRWLOCK *v34; // r12
  int v35; // r13d
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rdi
  char v42; // r15
  int EmptyUnits; // eax
  unsigned int v44; // ebp
  int v45; // r11d
  signed __int64 v46; // r9
  _QWORD *v47; // rdx
  __int64 *v48; // r8
  _QWORD *v49; // r10
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdi
  _RTL_SRWLOCK *v53; // rbx
  char v54; // r11
  unsigned int v55; // r11d
  int v56; // eax
  __int64 v57; // r10
  int v58; // r9d
  __int64 v59; // rdx
  unsigned __int64 v60; // r8
  __int16 *v61; // rcx
  __int16 v62; // ax
  __int64 v63; // r11
  bool v64; // zf
  _WORD *v65; // r11
  __int64 v66; // rax
  __int64 v67; // r11
  __int64 *v68; // rax
  char v69; // cl
  unsigned int v70; // edi
  int v71; // ebx
  unsigned int v72; // r8d
  __int64 v73; // rax
  signed __int64 v74; // rax
  __int16 *i; // rcx
  int v76; // [rsp+30h] [rbp-58h]
  unsigned __int16 v78; // [rsp+98h] [rbp+10h]
  unsigned int v79; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v80; // [rsp+A8h] [rbp+20h]

  v80 = a4;
  v4 = a3;
  LODWORD(v5) = 0;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v9 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v78 = WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  if ( !a3 )
    goto LABEL_16;
  v10 = (unsigned __int16)v9;
  v11 = a3 - HIWORD(v9) - a2;
  v12 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4]
                  + 128);
  v13 = *(_DWORD *)(v12 + 72);
  v14 = *(_BYTE *)(v12 + 76);
  if ( v13 )
  {
    v15 = (v11 * (unsigned __int64)v13) >> v14;
    v16 = v11 - v10 * v15;
  }
  else
  {
    LODWORD(v15) = v11 >> v14;
    v16 = ((1 << v14) - 1) & v11;
  }
  if ( v16 )
    return (unsigned int)v5;
  v17 = *(_WORD *)(v6 + 36);
  v18 = 2 * v15;
  if ( v17 >= (unsigned __int16)v15 )
    v17 = v15;
  *(_WORD *)(v6 + 36) = v17;
  v19 = v6 + 8 * ((unsigned __int64)v18 >> 6);
  _m_prefetchw((const void *)(v19 + 48));
  if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v19 + 48), ~(3LL << (v18 & 0x3F))) >> (v18 & 0x3F)) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)v7, v4, v6, (unsigned int)v15, 0LL);
    return (unsigned int)v5;
  }
  if ( *(_BYTE *)(v6 + 45) <= 1u )
    goto LABEL_16;
  v20 = *(_BYTE *)(v6 + 44);
  v21 = v4 - v6;
  v22 = v21 >> v20;
  v23 = 2 * v22;
  v24 = (char *)(2 * v22 + v6 + *(unsigned __int16 *)(v6 + 46));
  _m_prefetchw(v24);
  LODWORD(v25) = -1;
  v26 = &v24[2 * (((v21 + v78 - 1) >> v20) - (unsigned int)v22) + 2];
  v27 = 0;
  if ( v24 >= v26 )
    goto LABEL_16;
  do
  {
    v28 = _InterlockedDecrement16((volatile signed __int16 *)v24);
    if ( v28 )
    {
      if ( v28 == -1 )
        --v27;
    }
    else
    {
      ++v27;
      if ( (_DWORD)v25 == -1 )
        v25 = v23 >> 1;
    }
    v24 += 2;
    v23 += 2LL;
  }
  while ( v24 < v26 );
  if ( v27 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(v7 + 58) + v7 + 24),
      (v27 << *(_BYTE *)(v6 + 44)) / 4096);
  if ( (_DWORD)v25 == -1 )
    goto LABEL_16;
  v35 = 0;
  if ( (int)v25 < 0 )
  {
    LODWORD(v25) = 1;
    v36 = 1;
  }
  else
  {
    v36 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v36 )
  {
    v37 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 13LL) & 8) == 0 )
    {
      v38 = *(__int16 *)(v37 + 22);
      v39 = *(_QWORD *)(v38 + v37 + 8) >> *(_BYTE *)(v37 + 11);
      if ( v39 <= 8 )
        v39 = 8LL;
      v40 = *(_QWORD *)(v38 + v37 + 8) >> *(_BYTE *)(v37 + 12);
      if ( v40 <= 8 )
        v40 = 8LL;
      v41 = *(_QWORD *)(v38 + v37 + 16) + *(_QWORD *)(v38 + v37 + 24);
      if ( (v41 <= v39 || (int)RtlpHpScheduleCompaction() >= 0) && v41 <= v40 )
        goto LABEL_16;
      v7 = a1;
    }
  }
  if ( (unsigned int)v25 < *(unsigned __int8 *)(v6 + 45) )
  {
    v42 = v80;
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v25, &v79);
      v76 = EmptyUnits;
      if ( EmptyUnits == -1 )
        break;
      v44 = v79;
      if ( v79 >= 2 )
      {
        if ( v35 )
        {
          v69 = *(_BYTE *)(v6 + 44);
          v70 = EmptyUnits << v69;
          v71 = v79 << v69;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            v6 + (unsigned int)(EmptyUnits << v69),
            v79 << v69);
          v72 = v70;
          v7 = a1;
          RtlpHpLfhSubsegmentDecBlockCounts(a1, v6, v72, v71);
          if ( !v36 )
            break;
          LODWORD(v25) = v44 + v76;
        }
        else
        {
          LODWORD(v25) = EmptyUnits;
          if ( (v42 & 1) == 0 )
            RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v7 + 72));
          v35 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
        }
      }
      else
      {
        if ( !v36 )
          break;
        LODWORD(v25) = EmptyUnits + v79;
      }
    }
    while ( (unsigned int)v25 < *(unsigned __int8 *)(v6 + 45) );
    v8 = 0LL;
    if ( v35 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
      if ( (v80 & 1) == 0 )
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v7 + 72));
    }
  }
LABEL_16:
  v29 = *(unsigned __int16 *)(v6 + 34);
  LOWORD(v30) = *(_WORD *)(v6 + 32);
  do
  {
    if ( !v8 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
    {
      v33 = *(_QWORD *)(v6 + 16);
      do
      {
        while ( 1 )
        {
          while ( !v33 )
          {
            v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
            if ( !v33 )
            {
              v8 = 0LL;
              goto LABEL_23;
            }
          }
          if ( (v33 & 1) != 0 )
            break;
          v34 = (_RTL_SRWLOCK *)(v33 + 16);
          v8 = v33;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v33 + 16));
          v33 = *(_QWORD *)(v6 + 16);
          if ( v8 == v33 )
            goto LABEL_31;
          RtlReleaseSRWLockExclusive(v34);
        }
        v74 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 16),
                v33 & 1 | (v33 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                v33);
        v64 = v33 == v74;
        v33 = v74;
      }
      while ( !v64 );
      v8 = 0LL;
LABEL_31:
      if ( !v8 )
        goto LABEL_23;
    }
    v31 = v30 + 1;
    v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v30 + 1, v30);
  }
  while ( v31 != v30 + 1 );
  if ( (_WORD)v30 )
  {
    if ( v30 != v29 - 1 )
      goto LABEL_23;
    v45 = 2;
  }
  else
  {
    v45 = 0;
  }
  switch ( *(_BYTE *)(v6 + 38) )
  {
    case 0:
      v46 = v8 + 24;
      v47 = (_QWORD *)(v8 + 8);
      goto LABEL_61;
    case 1:
      v46 = v8 + 40;
      v47 = 0LL;
      goto LABEL_61;
    case 2:
      v46 = 0LL;
      v47 = 0LL;
LABEL_61:
      if ( v45 )
      {
        v48 = 0LL;
        v49 = 0LL;
      }
      else
      {
        v48 = (__int64 *)(v8 + 24);
        v49 = (_QWORD *)(v8 + 8);
      }
      if ( v46 )
      {
        v50 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
          goto LABEL_118;
        v51 = *(_QWORD **)(v6 + 8);
        if ( *v51 != v6 )
          goto LABEL_118;
        *v51 = v50;
        *(_QWORD *)(v50 + 8) = v51;
        if ( v47 )
          --*v47;
      }
      *(_BYTE *)(v6 + 38) = v45;
      if ( v48 )
      {
        v68 = (__int64 *)v48[1];
        if ( (__int64 *)*v68 != v48 )
          goto LABEL_118;
        *(_QWORD *)v6 = v48;
        *(_QWORD *)(v6 + 8) = v68;
        *v68 = v6;
        v48[1] = v6;
        if ( v49 )
          ++*v49;
        v6 = 0LL;
      }
      if ( (*(_BYTE *)v8 & 1) != 0 || *(_QWORD *)(v8 + 8) <= 8uLL )
      {
LABEL_71:
        if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
          *(_QWORD *)(v6 + 16) = 0LL;
        break;
      }
      v6 = *v48;
      if ( *(__int64 **)(*v48 + 8) == v48 )
      {
        v73 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
        {
          *v48 = v73;
          *(_QWORD *)(v73 + 8) = v48;
          --*v49;
          *(_BYTE *)(v6 + 38) = 2;
          goto LABEL_71;
        }
      }
LABEL_118:
      __fastfail(3u);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
  v8 = 0LL;
  if ( !v6 )
    goto LABEL_23;
  v52 = a1;
  v53 = *(_RTL_SRWLOCK **)(a1 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v78 + 15) >> 4] + 128);
  if ( *(_WORD *)(v6 + 32) != *(_WORD *)(v6 + 34) )
  {
    RtlAcquireSRWLockExclusive(v53 + 2);
    RtlpHpLfhSubsegmentSetOwner(v6, v53);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(v53, v6, 0LL);
    RtlReleaseSRWLockExclusive(v53 + 2);
    v52 = a1;
  }
  if ( !v6 )
    goto LABEL_23;
  v54 = v80;
  _InterlockedDecrement64((volatile signed __int64 *)&v53[8]);
  v55 = v54 & 1;
  v56 = -*(__int16 *)(v6 + 34);
  v80 = v55;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v53[7], v56);
  v57 = *(unsigned __int8 *)(v6 + 45);
  v58 = 0;
  if ( !*(_BYTE *)(v6 + 45) )
    goto LABEL_91;
  v59 = v6 + *(unsigned __int16 *)(v6 + 46);
  v60 = v59 + 2 * v57;
  while ( 1 )
  {
    v61 = (__int16 *)(v59 + 2LL * (unsigned int)v5);
    v62 = *v61;
    if ( !*v61 )
    {
      for ( i = v61 - 1; !*i; --i )
        ;
      v61 = i + 1;
      goto LABEL_86;
    }
    if ( (unsigned __int64)v61 >= v60 )
      break;
    while ( v62 )
    {
      if ( (unsigned __int64)++v61 >= v60 )
        goto LABEL_90;
      v62 = *v61;
    }
    if ( (unsigned __int64)v61 >= v60 )
      break;
    v5 = ((__int64)v61 - v59) >> 1;
LABEL_86:
    v63 = (unsigned int)v5 + 1LL;
    v64 = *(_WORD *)(v59 + 2 * v63) == 0;
    v65 = (_WORD *)(v59 + 2 * v63);
    if ( v64 )
    {
      do
      {
        if ( (unsigned __int64)v65 >= v60 )
          break;
        ++v65;
      }
      while ( !*v65 );
    }
    v66 = ((__int64)v61 - v59) >> 1;
    v67 = v65 - v61;
    if ( (_DWORD)v66 != -1 )
    {
      v58 += v67;
      LODWORD(v5) = v66 + v67;
      if ( (int)v66 + (int)v67 < (unsigned int)v57 )
        continue;
    }
    break;
  }
LABEL_90:
  v55 = v80;
  if ( v58 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(v52 + 58) + v52 + 24),
      -(__int64)((unsigned __int64)(unsigned int)(v58 << *(_BYTE *)(v6 + 44)) >> 12));
LABEL_91:
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(v52 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v52 + 16)))(
    *(_QWORD *)v52,
    v6,
    *(unsigned __int8 *)(v6 + 45) << *(_BYTE *)(v6 + 44),
    v55);
LABEL_23:
  LODWORD(v5) = 1;
  if ( v8 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
  return (unsigned int)v5;
}
