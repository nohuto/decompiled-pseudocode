/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140725C90
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiIsPfn @ 0x14025F1D0 (MiIsPfn.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MiSanitizePage @ 0x14029B170 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x14029F8D0 (MiLegitimatePageForDriversToMap.c)
 *     MiDoubleLockMdlPage @ 0x14029F950 (MiDoubleLockMdlPage.c)
 *     MiDoubleUnlockMdlPage @ 0x1402FFE30 (MiDoubleUnlockMdlPage.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiUpdateVadStartVpn @ 0x14034CF40 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 *     MiIsVaRangeAvailable @ 0x1407D3554 (MiIsVaRangeAvailable.c)
 *     MiGetUserReservationHighestAddress @ 0x1407D51A4 (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x1407D72F0 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiMapLockedPagesInUserSpace(
        __int64 a1,
        __int16 a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 *v7; // r14
  int v8; // edi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  _QWORD *Pool; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  unsigned __int64 v14; // r13
  __int64 Process; // rsi
  __int64 UserReservationHighestAddress; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r12
  int inserted; // esi
  unsigned __int64 v21; // r12
  int v22; // eax
  char v23; // rax^4
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // r12
  struct _KTHREAD *v28; // r13
  int v29; // esi
  int v30; // r9d
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // [rsp+28h] [rbp-A0h]
  int v35; // [rsp+38h] [rbp-90h]
  __int64 v36; // [rsp+50h] [rbp-78h]
  unsigned __int64 v37; // [rsp+58h] [rbp-70h]
  __int64 v38; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  unsigned __int64 v41; // [rsp+78h] [rbp-50h]
  unsigned __int64 v42; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+E8h] [rbp+20h] BYREF

  v45 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = a5;
  v37 = a1 + 48;
  v9 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v10 = v9;
  a6 = a5 & 0x20000000;
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( a4 )
      RtlRaiseStatus(-1073741811);
    v10 = v9 + 2;
    if ( v9 + 2 < v9 )
      goto LABEL_34;
  }
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v12 = (__int64)Pool;
  if ( !Pool )
LABEL_34:
    RtlRaiseStatus(-1073741670);
  Pool[5] = 0LL;
  Pool[2] = -2LL;
  v13 = ((v8 >> 31) & 0xFFFFFFFD) + 4;
  if ( a3 )
  {
    if ( a3 == 2 )
      v13 |= 0x18u;
  }
  else
  {
    v13 |= 8u;
  }
  v14 = 0LL;
  *((_DWORD *)Pool + 12) = Pool[6] & 0xFFFFF01F | ((v13 & 0x1F) << 7) | 0x10200010;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v36 = Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v27 = Process;
    inserted = -1073741558;
    goto LABEL_39;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v18 = v45;
  v19 = v10 << 12;
  if ( !v45 )
  {
    inserted = MiSelectUserAddress(
                 0,
                 v17,
                 UserReservationHighestAddress,
                 v19,
                 0x10000LL,
                 v17 & v34,
                 v13,
                 (unsigned int)v17 & v35,
                 (__int64)&v38,
                 (__int64)&v45);
    if ( inserted >= 0 )
    {
      v18 = v45;
      goto LABEL_10;
    }
LABEL_29:
    v27 = v36;
    goto LABEL_39;
  }
  if ( !(unsigned int)MiIsVaRangeAvailable(Process, v45, v19, 0, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_29;
  }
LABEL_10:
  v39 = v18 + v19 - 1;
  v42 = v18 >> 12;
  v41 = v39 >> 12;
  MiUpdateVadStartVpn(v12, v18 >> 12);
  v21 = 0LL;
  *(_DWORD *)(v12 + 28) = v22;
  *(_BYTE *)(v12 + 33) = v23;
  v45 = 0LL;
  if ( v9 )
  {
    v24 = v7;
    do
    {
      v25 = *v24;
      if ( (unsigned int)MiIsPfn(*v24) )
      {
        v26 = 48 * v25 - 0x220000000000LL;
        inserted = MiLegitimatePageForDriversToMap(v26);
        if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v26) )
          goto LABEL_29;
        v21 = v45;
      }
      else
      {
        v32 = MiSanitizePage(v25);
        inserted = MiReferenceIoPages(1, v32, 1uLL, a3, 0LL, 0LL);
        if ( inserted < 0 )
          goto LABEL_29;
      }
      ++v21;
      v14 = v37;
      v45 = v21;
      v24 = (unsigned __int64 *)(v37 + 8);
      v37 += 8LL;
    }
    while ( v21 < v9 );
  }
  v27 = v36;
  inserted = MiInsertVadCharges(v12, v36);
  if ( inserted < 0 )
  {
LABEL_39:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v27);
    if ( v14 )
    {
      while ( (unsigned __int64)v7 <= v14 )
      {
        v33 = *v7;
        if ( (unsigned int)MiIsPfn(*v7) )
          MiDoubleUnlockMdlPage(48 * v33 - 0x220000000000LL);
        else
          MiDereferenceIoPages(1, v33, 1uLL);
        ++v7;
      }
    }
    ExFreePoolWithTag((PVOID)v12, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v38 )
    MiAdvanceVadHint(v42, v41);
  v28 = CurrentThread;
  MiLockVad((__int64)CurrentThread, v12);
  v29 = v39;
  if ( a6 )
  {
    v18 += 4096LL;
    v29 = v39 - 4096;
  }
  MiMapLockedPagesInUserSpaceHelper(v18, (__int64)v7, 0LL, a3, v9, v12, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v28, v36);
  MiReferenceVad(v12);
  v30 = 2;
  if ( v13 != 1 )
    v30 = 4;
  if ( !MiAddSecureEntry(v12, v18, v29, v30, 0) )
  {
    MiDeleteVad((PVOID)v12);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((PVOID)v12);
  return v18 + *(unsigned int *)(a1 + 44);
}
