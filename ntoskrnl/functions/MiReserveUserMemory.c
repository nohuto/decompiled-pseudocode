__int64 __fastcall MiReserveUserMemory(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  unsigned int v5; // r15d
  int v7; // ebp
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  _QWORD *Pool; // rax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // r13d
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  bool v23; // zf
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r15d
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // rcx
  unsigned __int64 v32; // r12
  PVOID v33; // r15
  struct _KTHREAD *v34; // rbx
  int v35; // eax
  __int64 result; // rax
  int v37; // eax
  int v38; // r8d
  int v39; // r9d
  unsigned __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rdx
  int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 *v46; // rbp
  __int64 ProcessPartition; // rax
  struct _KTHREAD *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rbx
  volatile signed __int64 *v51; // rsi
  PVOID v52; // rbx
  int LargePageVad; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  unsigned __int64 v55; // [rsp+60h] [rbp-58h] BYREF
  PVOID P; // [rsp+68h] [rbp-50h]
  __int64 v57; // [rsp+70h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-40h]
  __int64 *v59; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+D0h] [rbp+18h]
  unsigned __int64 *v61; // [rsp+D8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v5 = a3;
  LargePageVad = 0;
  P = 0LL;
  if ( a2 == (__int64 *)1 )
    return 3221225485LL;
  v7 = 8;
  v8 = *(_QWORD *)(a1[11] + 1680LL) + 48LL;
  if ( a1[1] - *a1 + 1LL != a1[3] )
    v7 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (a1[8] & 0x20000000) != 0 && (MiFlags & 0x80000) == 0
    || (a3 & 2) == 0
    || (result = MiArbitraryCodeBlocked(a1[12]), LargePageVad = result, (int)result >= 0) )
  {
    v9 = ((a1[3] & 0xFFFLL) != 0) + (a1[3] >> 12);
    Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
    v11 = (__int64)Pool;
    if ( !Pool )
      return 3221225626LL;
    *Pool = -2LL;
    Pool[1] = -2LL;
    Pool[2] = -2LL;
    BugCheckParameter2 = (ULONG_PTR)(Pool + 5);
    Pool[5] = 0LL;
    v12 = *((_DWORD *)a1 + 13);
    v13 = *(_DWORD *)(v11 + 48) ^ (*(_DWORD *)(v11 + 48) ^ (v12 << 12)) & 0x7F000;
    *(_DWORD *)(v11 + 48) = v13;
    if ( v12 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1680LL) + 340LL) = 1;
      v13 = *(_DWORD *)(v11 + 48);
    }
    v14 = *((_DWORD *)a1 + 10);
    if ( (v14 & 0x1000) != 0 )
    {
      *(_DWORD *)(v11 + 52) |= 0x80000000;
      v15 = v9;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v5 << 7)) & 0xF80;
    v17 = *((_DWORD *)a1 + 16);
    v18 = v16 | 0x200000;
    *(_DWORD *)(v11 + 48) = v18;
    if ( (v17 & 0x40000000) != 0 )
      *(_DWORD *)(v11 + 48) = v18 | 0x8000000;
    if ( (v17 & 1) != 0 )
    {
      v15 = 0x7FFFFFFFELL;
    }
    else if ( (v17 & 0x8000000) != 0 )
    {
      v15 = 0x7FFFFFFFDLL;
    }
    v19 = 0;
    *(_DWORD *)(v11 + 52) ^= (*(_DWORD *)(v11 + 52) ^ v15) & 0x7FFFFFFF;
    *(_BYTE *)(v11 + 34) = v15 >> 31;
    CurrentThread = KeGetCurrentThread();
    v20 = v14 & 0x20400000;
    if ( (v14 & 0x20400000) == 0x20000000 )
    {
      v21 = v7 | 0x10;
      v19 = (*((_DWORD *)a1 + 28) >> 4) & 1 | 2;
      goto LABEL_21;
    }
    if ( v20 == 541065216 )
    {
      v19 = 1;
      v21 = v7 | 0x10;
      if ( (a1[14] & 2) == 0 )
        v21 = v7;
LABEL_21:
      if ( v21 >= 0x10 )
      {
        v45 = a1[14];
        if ( (v45 & 4) != 0 )
        {
          if ( (v45 & 0x1A) == 0
            || ((v46 = v59) == 0LL ? (ProcessPartition = MiGetProcessPartition(a1[11])) : (ProcessPartition = *v59),
                (*(_DWORD *)(ProcessPartition + 4) & 0x20) == 0) )
          {
            v28 = -1073741811;
            goto LABEL_123;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *((_BYTE *)a1 + 57)) )
          {
            v28 = -1073741727;
            goto LABEL_123;
          }
          *(_DWORD *)(v11 + 48) |= 0x1000000u;
        }
        else
        {
          v46 = v59;
        }
        LargePageVad = MiCreateLargePageVad(a1[11], v11, v46, 0LL);
        v28 = LargePageVad;
        if ( LargePageVad < 0 )
          goto LABEL_123;
        if ( v46 )
          *a5 = *(_WORD *)*v46;
        v5 = v60;
        if ( (a1[14] & 0x1A) != 0 )
          *(_DWORD *)(v11 + 48) |= 0x800000u;
      }
      v22 = *(_DWORD *)(v11 + 48) & 0xFFE7FFFF | (v19 << 19);
      v23 = (a1[5] & 0x200000) == 0;
      *(_DWORD *)(v11 + 48) = v22;
      if ( !v23 )
      {
        LargePageVad = MiCreateWriteWatchView(a1[11], v11);
        v28 = LargePageVad;
        if ( LargePageVad < 0 )
          goto LABEL_123;
        *(_DWORD *)(v11 + 48) |= 0x400000u;
        v22 = *(_DWORD *)(v11 + 48);
        v5 = v60;
      }
      if ( (a1[14] & 1) != 0 )
      {
        if ( (a1[5] & 0x20400000) != 0x400000 && (v22 & 0xA00000) != 0xA00000 )
        {
          v28 = -1073741637;
          goto LABEL_123;
        }
        if ( !*((_DWORD *)a1 + 12) )
        {
          v28 = -1073741755;
          goto LABEL_123;
        }
      }
      else if ( *((_DWORD *)a1 + 12) )
      {
        v28 = -1073741755;
        goto LABEL_123;
      }
      v23 = (a1[8] & 0x4000000) == 0;
      v24 = 0LL;
      v55 = 0LL;
      if ( !v23 )
      {
        LargePageVad = MiCreatePlaceholderStorage(v11);
        v28 = LargePageVad;
        if ( LargePageVad < 0 )
          goto LABEL_120;
        v5 = v60;
        LOBYTE(v21) = v21 | 4;
      }
      v25 = a1[11];
      LOBYTE(v21) = v21 | 2;
      v57 = 0LL;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v25);
      v26 = a1[11];
      if ( (*(_DWORD *)(v26 + 1124) & 0x20) != 0 )
      {
        v28 = -1073741558;
        goto LABEL_120;
      }
      v27 = *((_DWORD *)a1 + 16);
      if ( (v21 & 8) != 0 )
      {
        if ( (v27 & 0x4000000) != 0 )
        {
          P = (PVOID)MiFindPlaceholderVadToReplace(*a1, a1[1], *((_BYTE *)a1 + 57), &LargePageVad);
          if ( !P )
          {
            v28 = LargePageVad;
            goto LABEL_120;
          }
        }
        else if ( !(unsigned int)MiIsVaRangeAvailable(v26, *a1, a1[3], *a1, a1[1]) )
        {
          v28 = -1073741800;
          goto LABEL_120;
        }
        v24 = *a1;
        v29 = a1[1];
        v55 = *a1;
      }
      else
      {
        v28 = MiSelectUserAddress(
                *((_DWORD *)a1 + 10),
                *a1,
                a1[1],
                a1[3],
                a1[2],
                0LL,
                v5,
                v27,
                (__int64)&v57,
                (__int64)&v55);
        if ( v28 < 0 )
        {
          MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
          v24 = v55;
          goto LABEL_120;
        }
        v24 = v55;
        v29 = a1[3] + v55 - 1;
      }
      v30 = v24 >> 12;
      MiUpdateVadStartVpn(v11, v24 >> 12);
      v32 = v29 >> 12;
      *(_DWORD *)(v11 + 28) = v32;
      v23 = (a1[14] & 1) == 0;
      *(_BYTE *)(v11 + 33) = BYTE4(v32);
      if ( v23 )
      {
        LargePageVad = MiInsertVadCharges(v31, a1[11]);
        v28 = LargePageVad;
        if ( LargePageVad >= 0 )
        {
          v33 = P;
          if ( P )
          {
            MiPreparePlaceholderVadReplacement(P, a1[11], v8);
            v49 = KeAbPreAcquire(v11 + 40, 0LL);
            v50 = v49;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 40), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 40), v49, v11 + 40);
            v24 = v55;
            if ( v50 )
              *(_BYTE *)(v50 + 18) = 1;
            v34 = CurrentThread;
          }
          else
          {
            v34 = CurrentThread;
            MiLockVad((__int64)CurrentThread, v11);
          }
          MiInsertVad(v11, a1[11], 0);
          if ( v57 )
            MiAdvanceVadHint(v30, v32);
          if ( !*((_DWORD *)a1 + 30) )
          {
            v35 = *(_DWORD *)(v11 + 48);
            if ( ((v35 & 0x200000) == 0 || (v35 & 0x800000) == 0 && (v35 & 0x180000u) < 0x100000) && !a1[9] )
            {
              if ( !v33 )
              {
                MiUnlockVad((__int64)v34, v11);
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v34, a1[11]);
LABEL_43:
                *v61 = v24;
                return 0LL;
              }
              v51 = (volatile signed __int64 *)BugCheckParameter2;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v51);
              KeAbPostRelease((ULONG_PTR)v51);
              UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v34, a1[11]);
              v24 = v55;
              goto LABEL_147;
            }
          }
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v34, a1[11]);
          MiReferenceVad(v11);
          v37 = *(_DWORD *)(v11 + 48);
          if ( (v37 & 0x200000) != 0
            && ((v37 & 0x800000) != 0 || (v37 & 0x180000u) >= 0x100000)
            && *(int *)(v11 + 52) < 0 )
          {
            v28 = MiMapUserLargePages(v11, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), v59);
            if ( v28 < 0 )
              goto LABEL_144;
            v33 = P;
          }
          v38 = *((_DWORD *)a1 + 30);
          if ( v38 )
          {
            v28 = MiCommitVadMetadataBits(v11, 0LL, v38);
            if ( v28 < 0 )
              goto LABEL_144;
            v33 = P;
          }
          if ( !a1[9] )
          {
LABEL_55:
            if ( !v33 )
            {
              MiUnlockAndDereferenceVad((PVOID)v11);
              goto LABEL_43;
            }
            MiUnlockAndDereferenceNestedVad((PVOID)v11);
LABEL_147:
            MiFinishPlaceholderVadReplacement(v33);
            goto LABEL_43;
          }
          v23 = (a1[8] & 0x40000000) == 0;
          v39 = *((_DWORD *)a1 + 17);
          v59 = 0LL;
          if ( v23 )
          {
            if ( (unsigned int)(v39 - 1) > 1 && v39 != 4 && v39 != -2147483647 )
            {
              v28 = -1073741755;
LABEL_144:
              v52 = P;
              MiDeleteVad((unsigned int *)v11, (__int64)P, 0);
              if ( v52 )
                MiFinishPlaceholderVadReplacement(v52);
              return (unsigned int)v28;
            }
            v28 = MiSecureVad(v11, v24, a1[3], v39, 0, (__int64 *)&v59);
            if ( v28 < 0 )
              goto LABEL_144;
            v40 = (unsigned __int64)v59;
          }
          else
          {
            v40 = (unsigned __int64)MiAddSecureEntry(
                                      v11,
                                      (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) << 12,
                                      ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF,
                                      v39,
                                      1);
            if ( !v40 )
            {
              v28 = -1073741670;
              goto LABEL_144;
            }
          }
          v33 = P;
          *(_QWORD *)a1[9] = qword_140C656C0 ^ a1[11] ^ v40;
          goto LABEL_55;
        }
      }
      else
      {
        MiStoreGraphicsProtectionInVad(v31, *((unsigned int *)a1 + 12));
        v28 = -1073741637;
      }
LABEL_120:
      *v61 = v24;
      if ( P )
      {
        v48 = CurrentThread;
        MiUnlockVad((__int64)CurrentThread, (__int64)P);
LABEL_124:
        if ( (v21 & 2) != 0 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v48, a1[11]);
        MiReleaseVadEventBlocks(v11, 0);
        ExFreePoolWithTag((PVOID)v11, 0);
        return (unsigned int)v28;
      }
LABEL_123:
      v48 = CurrentThread;
      goto LABEL_124;
    }
    if ( v20 != 0x400000 )
    {
      v21 = v7;
      if ( (v14 & 0x800000) == 0 )
        goto LABEL_21;
      if ( (unsigned int)MiCreateRotateView(v11) )
      {
        v44 = *(_DWORD *)(v11 + 48) & 0xFFFFFF8F | 0x40;
        goto LABEL_89;
      }
      goto LABEL_122;
    }
    v41 = v5 & 7;
    if ( (v5 & 0xFFFFFFF8) != 0x10 && (v41 == 4 || v41 == 1) )
    {
      v42 = v5;
      if ( (a1[14] & 1) == 0 )
        goto LABEL_84;
      if ( a1[13] )
      {
        v43 = *((_DWORD *)a1 + 12);
        v42 = v5 | 2;
        if ( (v43 & 0x1C000) == 0 )
          v42 = v5;
        if ( (v43 & 0x12000) != 0 )
          v42 = v42 & 0xFFFFFFFA | 4;
LABEL_84:
        LargePageVad = MiCreateUserPhysicalView(v11, v42, a1, a5);
        v21 = v7;
        if ( LargePageVad >= 0 )
        {
          v44 = *(_DWORD *)(v11 + 48) & 0xFBFFFF8F | 0x30;
LABEL_89:
          *(_DWORD *)(v11 + 48) = v44;
          goto LABEL_21;
        }
LABEL_122:
        v28 = -1073741670;
        goto LABEL_123;
      }
    }
    v28 = -1073741755;
    LOBYTE(v21) = v7;
    goto LABEL_123;
  }
  return result;
}
