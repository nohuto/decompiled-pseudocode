/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1405EF650
 * Callers:
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140206E70 (CmpFindSecurityCellCacheIndex.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpCreateLayerLink @ 0x1405D8378 (CmpCreateLayerLink.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1405EE808 (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405EFB44 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405EFEA0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x1405EFFAC (CmpAllocateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x1405F3480 (CmpKeyFullNameLength.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14066C550 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFreeKeyControlBlock @ 0x14066D340 (CmpFreeKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x1406A2964 (CmpTryToLockKcbExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071CD1C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpEtwDumpKcb @ 0x14086A6C8 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, __int64 a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  ULONG_PTR v6; // r12
  int v8; // eax
  int v11; // ebx
  unsigned __int16 *v12; // rbp
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v14; // rdi
  __int64 KeyControlBlock; // rax
  ULONG_PTR v16; // rdi
  _DWORD *v17; // r13
  _QWORD *v18; // rax
  __int64 NameControlBlock; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // ebp
  char v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  bool v29; // zf
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // rbp
  int LayerLink; // ebx
  __int64 v36; // rcx
  void *v37; // rcx
  _QWORD v38[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]
  __int64 v41; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  __int64 v43; // [rsp+A8h] [rbp+40h]
  ULONG_PTR *v44; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v41 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, ULONG_PTR *);
  BugCheckParameter2 = a4;
  v38[0] = 0LL;
  v6 = a4;
  v8 = *(_DWORD *)(a1 + 160);
  LODWORD(v38[0]) = -1;
  if ( (v8 & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4208) != KeGetCurrentThread() )
    return 3221225524LL;
  v11 = v43;
  v12 = a6;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(a1, (unsigned int)v43, a3, a6, v38[0]);
  v14 = KcbInHashEntryByName;
  if ( KcbInHashEntryByName )
  {
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    result = 0LL;
    *v44 = v14;
    return result;
  }
  if ( *v12 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    return 3221225485LL;
  KeyControlBlock = CmpAllocateKeyControlBlock();
  v16 = KeyControlBlock;
  if ( !KeyControlBlock )
    return 3221225626LL;
  v17 = (_DWORD *)(KeyControlBlock + 16);
  v18 = (_QWORD *)(KeyControlBlock + 120);
  v18[1] = v18;
  *v18 = v18;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_QWORD *)(v16 + 144) = 0LL;
  *(_QWORD *)(v16 + 152) = 0LL;
  *(_QWORD *)(v16 + 160) = 0LL;
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_QWORD *)v16 = 1LL;
  *(_QWORD *)(v16 + 32) = a1;
  *(_DWORD *)(v16 + 40) = a2;
  *(_DWORD *)(v16 + 16) = v11;
  *(_QWORD *)(v16 + 216) = v16 + 208;
  *(_QWORD *)(v16 + 208) = v16 + 208;
  *(_QWORD *)(v16 + 240) = 0LL;
  *(_DWORD *)(v16 + 248) = 0;
  *(_QWORD *)(v16 + 256) = 0LL;
  *(_DWORD *)(v16 + 264) = 0;
  *(_QWORD *)(v16 + 272) = 0LL;
  *(_DWORD *)(v16 + 280) = 0;
  *(_QWORD *)(v16 + 288) = 0LL;
  *(_QWORD *)(v16 + 232) = v16 + 224;
  *(_QWORD *)(v16 + 224) = v16 + 224;
  *(_DWORD *)(v16 + 284) = -1;
  NameControlBlock = CmpGetNameControlBlock(v12, (__int64 *)va);
  *(_QWORD *)(v16 + 80) = NameControlBlock;
  if ( !NameControlBlock )
  {
    LayerLink = -1073741670;
    goto LABEL_44;
  }
  v20 = *(unsigned int *)(v16 + 40);
  if ( (_DWORD)v20 != -1 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v16 + 32) + 8LL))(
            *(_QWORD *)(v16 + 32),
            v20,
            v38);
    if ( CmpKeyNodeNeedsAccessBitUpdate(*(_QWORD *)(v16 + 32), v21) )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(v22 + 16))(v22, v38);
      ExAcquirePushLockSharedEx(*(_QWORD *)(v16 + 32) + 72LL, 0LL);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(v16 + 32) + 8LL))(
              *(_QWORD *)(v16 + 32),
              *(unsigned int *)(v16 + 40),
              v38);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v16 + 32), v21, *(unsigned int *)(v16 + 40));
      v34 = *(_QWORD *)(v16 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
      KeAbPostRelease(v34 + 72);
    }
    *(_BYTE *)(v16 + 65) = *(_BYTE *)(v21 + 13) & 3;
    v23 = *(_DWORD *)(v21 + 36);
    *(_DWORD *)(v16 + 100) = *(_DWORD *)(v21 + 40);
    *(_DWORD *)(v16 + 96) = v23;
    *(_WORD *)(v16 + 186) = *(_WORD *)(v21 + 2);
    *(_DWORD *)(v16 + 112) = *(_DWORD *)(v21 + 20) + *(_DWORD *)(v21 + 24);
    *(_QWORD *)(v16 + 168) = *(_QWORD *)(v21 + 4);
    *(_WORD *)(v16 + 176) = *(_WORD *)(v21 + 52);
    *(_WORD *)(v16 + 178) = *(_WORD *)(v21 + 60);
    *(_DWORD *)(v16 + 180) = *(_DWORD *)(v21 + 64);
    *(_DWORD *)(v16 + 184) ^= (*(_DWORD *)(v16 + 184) ^ *(unsigned __int16 *)(v21 + 54)) & 0xF;
    *(_DWORD *)(v16 + 184) ^= ((unsigned __int8)*(_DWORD *)(v16 + 184) ^ (unsigned __int8)*(_WORD *)(v21 + 54)) & 0xF0;
    *(_BYTE *)(v16 + 185) = *(_BYTE *)(v21 + 55);
    v24 = KeAbPreAcquire(v16 + 48, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
    {
      if ( v24 )
        KeAbPostReleaseEx(v16 + 48, v24);
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      *(_QWORD *)(v16 + 56) = KeGetCurrentThread();
    }
    v25 = *(_DWORD *)(v21 + 44);
    v39 = 0;
    v26 = 1;
    if ( v25 == -1 )
    {
      *(_QWORD *)(v16 + 88) = 0LL;
LABEL_16:
      CmpUnlockKcb(v16);
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v16 + 32) + 16LL))(*(_QWORD *)(v16 + 32), v38);
      v6 = BugCheckParameter2;
      goto LABEL_17;
    }
    v27 = *(_QWORD *)(v16 + 32);
    ExAcquirePushLockSharedEx(v27 + 1776, 0LL);
    if ( CmpFindSecurityCellCacheIndex(v27, v25, &v39) )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 1880) + 16LL * v39 + 8);
    }
    else
    {
      v26 = 0;
      v28 = 0LL;
    }
    *(_QWORD *)(v16 + 88) = v28;
    ExReleasePushLockEx(v27 + 1776, 0LL);
    if ( v26 )
      goto LABEL_16;
    CmpUnlockKcb(v16);
    LayerLink = -1073741670;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, v38);
LABEL_44:
    v36 = *(_QWORD *)(v16 + 80);
    if ( v36 )
      CmpDereferenceNameControlBlockWithLock(v36);
    if ( *(_QWORD *)(v16 + 72) )
      CmpDereferenceKeyControlBlockUnsafe(a3);
    v37 = *(void **)(v16 + 192);
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    *(_DWORD *)(v16 + 8) |= 0x80000u;
    CmpFreeKeyControlBlock(v16);
    return (unsigned int)LayerLink;
  }
  if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
    *(_BYTE *)(v16 + 65) = 1;
  if ( (a5 & 1) != 0 )
    *(_WORD *)(v16 + 186) |= 4u;
LABEL_17:
  if ( a3 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a3);
    v29 = (*(_DWORD *)(v16 + 184) & 0x40000) == 0;
    *(_QWORD *)(v16 + 72) = a3;
    v30 = *(_DWORD *)(a3 + 8);
    if ( v29 )
      v31 = *(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(v16 + 8) ^ (v30 + 0x200000)) & 0x7FE00000;
    else
      v31 = *(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(v16 + 8) ^ v30) & 0x7FE00000;
  }
  else
  {
    v31 = *(_DWORD *)(v16 + 8) & 0x801FFFFF | 0x200000;
  }
  *(_DWORD *)(v16 + 8) = v31;
  if ( v6 )
  {
    CmpLockKcbExclusive(v6);
    CmpTryToLockKcbExclusive(v16);
    LayerLink = CmpCreateLayerLink(v6, v16);
    CmpUnlockKcb(v16);
    CmpUnlockKcb(v6);
    if ( LayerLink < 0 )
      goto LABEL_44;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 1640LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v16 + 32) + 1648LL) - 1) & ((unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) >> 9)));
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v32 + 16);
  *(_QWORD *)(v32 + 16) = v17;
  if ( *(_BYTE *)(a1 + 2936) == 1 )
    *(_WORD *)(v16 + 8) |= 0x20u;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v32) = 22;
    CmpEtwDumpKcb(v16, v32);
  }
  *v44 = v16;
  return 0LL;
}
