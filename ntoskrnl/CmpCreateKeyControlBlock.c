/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1407AFAA0
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406B6158 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14074B840 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpCreateLayerLink @ 0x14074BAE4 (CmpCreateLayerLink.c)
 *     CmpFreeKeyControlBlock @ 0x14074C060 (CmpFreeKeyControlBlock.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpTryToLockKcbExclusive @ 0x140790CD8 (CmpTryToLockKcbExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1407B00A0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1407B01F0 (CmpGetNameControlBlock.c)
 *     CmpKeyFullNameLength @ 0x1407B0580 (CmpKeyFullNameLength.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpEtwDumpKcb @ 0x1408A6EE6 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmLockHiveSecurityShared @ 0x140AF2590 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AF25F0 (CmUnlockHiveSecurity.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, ULONG_PTR a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  int v9; // ebx
  unsigned __int16 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  PVOID v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r15
  __int64 NameControlBlock; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  __int64 CellFlat; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ecx
  ULONG_PTR v26; // rax
  int v27; // r14d
  __int64 v28; // rbx
  ULONG_PTR v29; // r14
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // ecx
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rdx
  __int64 result; // rax
  signed __int64 *v36; // rbx
  __int64 v37; // r14
  ULONG_PTR v38; // rcx
  __int64 CellPaged; // rax
  __int64 v40; // r14
  int LayerLink; // r12d
  __int64 v42; // rcx
  void *v43; // rcx
  _QWORD v44[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h]
  __int64 v48; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  __int64 v50; // [rsp+B8h] [rbp+40h]
  __int64 *v51; // [rsp+C0h] [rbp+48h]
  va_list va1; // [rsp+C8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v48 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, __int64 *);
  BugCheckParameter2 = a4;
  v44[0] = 0LL;
  HvpGetCellContextReinitialize(v44);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return 3221225524LL;
  v9 = v50;
  v10 = a6;
  v45 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027
                                                                  * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) >> 9)))
                  + 16);
  if ( !v11 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_DWORD *)v11 != v9 )
      goto LABEL_4;
    v12 = v11 - 16;
    if ( *(_QWORD *)(v11 + 56) != a3 )
      goto LABEL_4;
    v13 = *(_QWORD *)(v12 + 80);
    v14 = *(_WORD *)(v13 + 24);
    if ( (*(_DWORD *)v13 & 1) == 0 )
      break;
    if ( !(unsigned int)CmpCompareCompressedName((__int64)v10, (unsigned __int8 *)(v13 + 26), v14, 2) )
      goto LABEL_9;
LABEL_4:
    v11 = *(_QWORD *)(v11 + 8);
    if ( !v11 )
      goto LABEL_10;
  }
  *((_QWORD *)&v45 + 1) = v13 + 26;
  LOWORD(v45) = v14;
  WORD1(v45) = v14;
  if ( (unsigned int)CmpCompareUnicodeString((__int64)v10, (__int64)&v45, 2) )
    goto LABEL_4;
LABEL_9:
  if ( v11 == 16 )
  {
LABEL_10:
    if ( *v10 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    {
      return 3221225485LL;
    }
    else
    {
      _InterlockedIncrement64(&CmPerfCounters);
      v15 = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
      v16 = (__int64)v15;
      if ( v15 )
      {
        _InterlockedIncrement64(qword_140D55300);
        memset(v15, 0, 0x138uLL);
        *(_QWORD *)(v16 + 128) = v16 + 120;
        *(_QWORD *)(v16 + 120) = v16 + 120;
        *(_QWORD *)(v16 + 136) = 0LL;
        *(_QWORD *)(v16 + 144) = 0LL;
        *(_QWORD *)(v16 + 152) = 0LL;
        *(_QWORD *)(v16 + 160) = 0LL;
        *(_DWORD *)(v16 + 40) = a2;
        v17 = (_DWORD *)(v16 + 16);
        *(_DWORD *)(v16 + 16) = v9;
        *(_QWORD *)v16 = 1LL;
        *(_QWORD *)(v16 + 32) = a1;
        *(_QWORD *)(v16 + 48) = 0LL;
        *(_QWORD *)(v16 + 216) = v16 + 208;
        *(_QWORD *)(v16 + 208) = v16 + 208;
        *(_QWORD *)(v16 + 232) = v16 + 224;
        *(_QWORD *)(v16 + 224) = v16 + 224;
        *(_QWORD *)(v16 + 240) = 0LL;
        *(_DWORD *)(v16 + 248) = 0;
        *(_QWORD *)(v16 + 256) = 0LL;
        *(_DWORD *)(v16 + 264) = 0;
        *(_QWORD *)(v16 + 272) = 0LL;
        *(_DWORD *)(v16 + 280) = 0;
        *(_DWORD *)(v16 + 284) = -1;
        *(_QWORD *)(v16 + 288) = 0LL;
        NameControlBlock = CmpGetNameControlBlock(v10, (__int64 *)va);
        *(_QWORD *)(v16 + 80) = NameControlBlock;
        if ( !NameControlBlock )
        {
          LayerLink = -1073741670;
          v29 = v16;
          goto LABEL_63;
        }
        v19 = *(unsigned int *)(v16 + 40);
        if ( (_DWORD)v19 == -1 )
        {
          if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
            *(_BYTE *)(v16 + 65) = 1;
          v29 = v16;
          if ( (a5 & 1) != 0 )
            *(_WORD *)(v16 + 186) |= 4u;
          goto LABEL_27;
        }
        v20 = *(_QWORD *)(v16 + 32);
        if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v20, v19);
        else
          CellFlat = HvpGetCellPaged(v20);
        v22 = *(_QWORD *)(v16 + 32);
        v23 = CellFlat;
        if ( (*(_DWORD *)(v22 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
        {
          if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v22, v44);
          else
            HvpReleaseCellPaged(v22, v44);
          v36 = (signed __int64 *)(*(_QWORD *)(v16 + 32) + 72LL);
          v37 = KeAbPreAcquire((__int64)v36, 0LL);
          if ( _InterlockedCompareExchange64(v36, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v36, 0, v37, (__int64)v36);
          if ( v37 )
            *(_BYTE *)(v37 + 18) = 1;
          v38 = *(_QWORD *)(v16 + 32);
          if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v38, *(unsigned int *)(v16 + 40));
          else
            CellPaged = HvpGetCellPaged(v38);
          v23 = CellPaged;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v16 + 32), CellPaged, *(_DWORD *)(v16 + 40));
          v40 = *(_QWORD *)(v16 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v40 + 72));
          KeAbPostRelease(v40 + 72);
        }
        *(_BYTE *)(v16 + 65) = *(_BYTE *)(v23 + 13) & 3;
        v24 = *(_DWORD *)(v23 + 36);
        *(_DWORD *)(v16 + 100) = *(_DWORD *)(v23 + 40);
        *(_DWORD *)(v16 + 96) = v24;
        *(_WORD *)(v16 + 186) = *(_WORD *)(v23 + 2);
        *(_DWORD *)(v16 + 112) = *(_DWORD *)(v23 + 20) + *(_DWORD *)(v23 + 24);
        *(_QWORD *)(v16 + 168) = *(_QWORD *)(v23 + 4);
        *(_WORD *)(v16 + 176) = *(_WORD *)(v23 + 52);
        *(_WORD *)(v16 + 178) = *(_WORD *)(v23 + 60);
        *(_DWORD *)(v16 + 180) = *(_DWORD *)(v23 + 64);
        v25 = *(_DWORD *)(v16 + 184) ^ (*(_DWORD *)(v16 + 184) ^ *(unsigned __int16 *)(v23 + 54)) & 0xF;
        *(_DWORD *)(v16 + 184) = v25;
        *(_DWORD *)(v16 + 184) = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)*(_WORD *)(v23 + 54)) & 0xF0;
        *(_BYTE *)(v16 + 185) = *(_BYTE *)(v23 + 55);
        v26 = KeAbPreAcquire(v16 + 48, 0LL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
        {
          if ( v26 )
            KeAbPostReleaseEx(v16 + 48, v26);
        }
        else
        {
          if ( v26 )
            *(_BYTE *)(v26 + 18) = 1;
          *(_QWORD *)(v16 + 56) = KeGetCurrentThread();
        }
        v27 = *(_DWORD *)(v23 + 44);
        v46 = 0;
        if ( v27 == -1 )
        {
          *(_QWORD *)(v16 + 88) = 0LL;
          goto LABEL_25;
        }
        v28 = *(_QWORD *)(v16 + 32);
        CmLockHiveSecurityShared(v28);
        if ( !CmpFindSecurityCellCacheIndex(v28, v27, &v46) )
        {
          *(_QWORD *)(v16 + 88) = 0LL;
          CmUnlockHiveSecurity(v28);
          CmpUnlockKcb(v16);
          LayerLink = -1073741670;
          if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a1, v44);
          else
            HvpReleaseCellPaged(a1, v44);
          v29 = v16;
          goto LABEL_63;
        }
        *(_QWORD *)(v16 + 88) = *(_QWORD *)(*(_QWORD *)(v28 + 1888) + 16LL * v46 + 8);
        CmUnlockHiveSecurity(v28);
LABEL_25:
        v29 = v16;
        CmpUnlockKcb(v16);
        v30 = *(_QWORD *)(v16 + 32);
        if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v30, v44);
        else
          HvpReleaseCellPaged(v30, v44);
LABEL_27:
        if ( a3 )
        {
          CmpReferenceKeyControlBlockUnsafe(a3);
          v31 = (*(_DWORD *)(v16 + 184) & 0x40000) == 0;
          *(_QWORD *)(v16 + 72) = a3;
          if ( v31 )
            v32 = *(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(a3 + 8) + 0x200000)) & 0x7FE00000;
          else
            v32 = *(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(a3 + 8) ^ *(_DWORD *)(v16 + 8)) & 0x7FE00000;
        }
        else
        {
          v32 = *(_DWORD *)(v16 + 8) & 0x801FFFFF | 0x200000;
        }
        *(_DWORD *)(v16 + 8) = v32;
        v33 = BugCheckParameter2;
        if ( BugCheckParameter2
          && (CmpLockKcbExclusive(BugCheckParameter2),
              CmpTryToLockKcbExclusive(v16),
              LayerLink = CmpCreateLayerLink(v33, v16),
              CmpUnlockKcb(v16),
              CmpUnlockKcb(v33),
              LayerLink < 0) )
        {
LABEL_63:
          v42 = *(_QWORD *)(v29 + 80);
          if ( v42 )
            CmpDereferenceNameControlBlockWithLock(v42);
          if ( *(_QWORD *)(v29 + 72) )
            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a3);
          v43 = *(void **)(v29 + 192);
          if ( v43 )
            ExFreePoolWithTag(v43, 0);
          *(_DWORD *)(v29 + 8) |= 0x80000u;
          CmpFreeKeyControlBlock(v29);
          return (unsigned int)LayerLink;
        }
        else
        {
          v34 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v16 + 32) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                                 * (*v17 ^ (*v17 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) >> 9)));
          *(_QWORD *)(v16 + 24) = *(_QWORD *)(v34 + 16);
          *(_QWORD *)(v34 + 16) = v17;
          if ( *(_BYTE *)(a1 + 2944) == 1 )
            *(_WORD *)(v16 + 8) |= 0x20u;
          if ( CmpTraceRoutine )
          {
            LOBYTE(v34) = 22;
            CmpEtwDumpKcb(v16, v34);
          }
          *v51 = v16;
          return 0LL;
        }
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    CmpReferenceKeyControlBlockLockNotHeld((volatile signed __int64 *)(v11 - 16));
    result = 0LL;
    *v51 = v12;
  }
  return result;
}
