/*
 * XREFs of MiProbeAndLockPrepare @ 0x14026B160
 * Callers:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14065ACBC (MmStoreProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2AA04 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x140222030 (MiGetSystemCacheReverseMap.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        signed __int32 a5,
        signed __int32 a6,
        char a7)
{
  char v7; // r15
  __int64 v9; // r9
  __int16 v12; // cx
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  int v24; // esi
  char *AnyMultiplexedVm; // rdi
  unsigned int v26; // edx
  int v27; // edx
  unsigned __int8 v28; // al
  volatile __int32 *v29; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v31; // dl
  int v32; // ecx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // edx
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v38; // rcx
  _DWORD *v39; // r10
  char *SessionVm; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned int v47; // esi
  unsigned int v48; // edx
  unsigned int v49; // edx
  __int64 v50; // rdx
  _DWORD *SchedulerAssist; // r9
  int v52; // [rsp+50h] [rbp+8h] BYREF

  v7 = a7;
  v9 = (unsigned int)a6;
  *(_QWORD *)(a1 + 80) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a3;
  v12 = a3;
  v52 = 0;
  if ( (v7 & 2) != 0 )
    v13 = 64;
  else
    v13 = 0;
  v14 = *(_DWORD *)(a1 + 72) & 0xFFFFFFBF;
  *(_QWORD *)(a1 + 16) = a3 + a4;
  v15 = v13 | v14;
  *(_DWORD *)(a1 + 72) = v15;
  if ( (_BYTE)a5 )
  {
    if ( !a4 || (v16 = a4 + a3 - 1, v16 < a3) || v16 > 0x7FFFFFFEFFFFLL )
    {
      ++dword_140C67B70;
      return 3221225477LL;
    }
  }
  v17 = a3 + a4 - 1;
  if ( (v15 & 0x40) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = a2 + 48;
    a4 = (v12 & 0xFFF) + *(unsigned int *)(a2 + 40) + 4095LL;
  }
  v19 = a4 >> 12;
  *(_QWORD *)(a1 + 56) = v18;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 32) = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 144) = 0x3FFFFFFFFFLL;
  v21 = *(unsigned __int16 *)(a2 + 10);
  v20 = v21 | 0x80;
  LOWORD(v21) = v21 & 0xFF7F;
  if ( (_DWORD)v9 )
    LOWORD(v21) = v20;
  LOWORD(v21) = v21 | 2;
  *(_WORD *)(a2 + 10) = v21;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( *(_QWORD *)(a1 + 8) > 0x7FFFFFFEFFFFuLL )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 184LL);
    *(_QWORD *)(a1 + 88) = v21;
    *(_QWORD *)(a2 + 16) = v21;
    if ( (_DWORD)v9 == 3 )
    {
      v41 = MiObtainReferencedVadEx(*(_QWORD *)(a1 + 8), 0LL, &v52);
      v42 = v41;
      if ( !v41 )
        return (unsigned int)v52;
      if ( (unsigned int)MiVadPureReserve(v41)
        || (v43 = *(unsigned int *)(v42 + 52),
            LODWORD(v43) = v43 & 0x7FFFFFFF,
            (v43 | ((unsigned __int64)*(unsigned __int8 *)(v42 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v44 = *(_DWORD *)(v42 + 48), (v44 & 0x70) == 0x10)
        || (v44 & 0x200000) == 0 && (v44 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v42);
        return 3221225477LL;
      }
      v45 = (*(unsigned int *)(v42 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v42 + 32) << 32)) << 12;
      if ( a3 < v45
        || (v46 = ((*(unsigned int *)(v42 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v42 + 33) << 32)) << 12) | 0xFFF,
            a3 > v46)
        || v17 < v45
        || v17 > v46 )
      {
        MiUnlockAndDereferenceVad((PVOID)v42);
        return 3221225496LL;
      }
      v52 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 88), v19);
      v47 = v52;
      if ( v52 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v42);
        return v47;
      }
      *(_QWORD *)(a1 + 128) = v42;
      *(_QWORD *)(a1 + 120) = v19;
    }
    if ( (v7 & 1) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL), v19);
  }
  v22 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  LODWORD(v23) = 4;
  if ( v22 >= 0xFFFF800000000000uLL )
  {
    v21 = ((v22 >> 39) & 0x1FF) - 256;
    v24 = byte_140C6A058[v21];
  }
  else
  {
    v24 = 0;
    if ( v22 <= 0x7FFFFFFEFFFFLL )
    {
      AnyMultiplexedVm = (char *)(*(_QWORD *)(a1 + 88) + 1664LL);
      v26 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF1;
      *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
      v27 = v26 | 1;
      goto LABEL_18;
    }
  }
  switch ( v24 )
  {
    case 1:
      v50 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 8;
      *(_DWORD *)(a1 + 72) = v50;
      SessionVm = (char *)MiGetSessionVm(v21, v50, 4LL, v9);
      goto LABEL_56;
    case 6:
      AnyMultiplexedVm = (char *)&unk_140C69900;
      v34 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF3;
      *(_QWORD *)(a1 + 104) = &unk_140C69900;
      v27 = v34 | 3;
      break;
    case 8:
      AnyMultiplexedVm = (char *)&unk_140C6F480;
      v36 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF2;
      *(_QWORD *)(a1 + 104) = &unk_140C6F480;
      v27 = v36 | 2;
      break;
    case 5:
    case 15:
      SessionVm = MiGetAnyMultiplexedVm(5);
      v27 = v23 | *(_DWORD *)(a1 + 72) & 0xFFFFFFF4;
LABEL_56:
      *(_QWORD *)(a1 + 104) = SessionVm;
      AnyMultiplexedVm = SessionVm;
      break;
    case 12:
      AnyMultiplexedVm = (char *)&unk_140C697C0;
      v35 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF6;
      *(_QWORD *)(a1 + 104) = &unk_140C697C0;
      v27 = v35 | 6;
      break;
    default:
      if ( ((v24 - 14) & 0xFFFFFFFD) != 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
        v49 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF5;
        *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
        v27 = v49 | 5;
      }
      else
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
        v48 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF7;
        *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
        v27 = v48 | 7;
      }
      break;
  }
LABEL_18:
  *(_DWORD *)(a1 + 72) = v27 & 0xFFFFFFCF;
  v28 = AnyMultiplexedVm[184] & 7;
  if ( v28 <= (unsigned __int8)v23 )
  {
    if ( v28 == 2 )
    {
      v29 = (volatile __int32 *)&unk_140C69E00;
LABEL_21:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
          v23 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v23;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v29, CurrentIrql);
      }
      else
      {
        _m_prefetchw((const void *)v29);
        a5 = *v29 & 0x7FFFFFFF;
        a6 = a5 + 1;
        a6 = _InterlockedCompareExchange(v29, a5 + 1, a5);
        if ( a6 != a5 )
        {
          while ( a6 >= 0 )
          {
            a5 = a6++;
            a6 = _InterlockedCompareExchange(v29, a6, a5);
            if ( a6 == a5 )
              goto LABEL_24;
          }
          ExpWaitForSpinLockSharedAndAcquire(v29, CurrentIrql);
        }
      }
LABEL_24:
      if ( *((_DWORD *)v29 + 1) )
        _InterlockedExchange(v29 + 1, 0);
      v31 = CurrentIrql;
      goto LABEL_27;
    }
LABEL_20:
    v29 = (volatile __int32 *)(AnyMultiplexedVm + 192);
    goto LABEL_21;
  }
  if ( v28 == 5 )
    goto LABEL_20;
  v31 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
  {
    v39 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v31 != 2 )
      v23 = (-1LL << (v31 + 1)) & 4;
    v39[5] |= v23;
  }
LABEL_27:
  v32 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = v31;
  if ( (v32 & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1264LL) )
    *(_DWORD *)(a1 + 72) = v32 | 0x10;
  if ( v24 == 8 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(v22);
    v38 = *(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
      v38 = *(_QWORD *)(SystemCacheReverseMap + 24);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v38 + 60LL) & 0x3FF)) + 17344LL;
  }
  return 0LL;
}
