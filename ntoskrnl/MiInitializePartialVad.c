/*
 * XREFs of MiInitializePartialVad @ 0x140760134
 * Callers:
 *     MiAllocateSplitVads @ 0x14076003C (MiAllocateSplitVads.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAdvanceVadView @ 0x1402D5E10 (MiAdvanceVadView.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiFreePlaceholderStorage @ 0x1406800F8 (MiFreePlaceholderStorage.c)
 *     MiResidentPagesForSpan @ 0x140784F38 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x140A2E550 (MiCreateRotateView.c)
 *     MiFreeRotateView @ 0x140A2E638 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x140A44FD0 (MiCreatePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(unsigned __int64 *P, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rsi
  int v6; // ebp
  __int64 v7; // r12
  char v8; // r9
  __int64 v9; // rax
  unsigned int v10; // edx
  volatile signed __int32 *v11; // rdi
  int v12; // eax
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r9
  int v18; // eax
  __int64 result; // rax
  int PlaceholderStorage; // esi
  unsigned int v21; // eax
  void *ProcessPartition; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v24 = v4;
  memmove(P, (const void *)v2, (-(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136);
  *((_DWORD *)P + 9) = 0;
  v8 = 15;
  P[7] &= 0xFuLL;
  P[2] = -2LL;
  v9 = *(unsigned int *)(v2 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = *((_DWORD *)P + 13) & 0x80000000;
  if ( (v9 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) == 0x7FFFFFFFDLL )
    v10 |= 0x7FFFFFFDu;
  else
    v8 = 0;
  *((_DWORD *)P + 13) = v10;
  v11 = (volatile signed __int32 *)(P + 5);
  *((_BYTE *)P + 34) = v8;
  v12 = *((_DWORD *)P + 12);
  P[5] = 0LL;
  if ( (v12 & 0x70) != 0x40 || (unsigned int)MiCreateRotateView(P) )
  {
    if ( MiLocateVadEvent() )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(P);
      if ( PlaceholderStorage < 0 )
      {
        if ( (P[6] & 0x70) == 0x40 )
          MiFreeRotateView(P);
        goto LABEL_37;
      }
      v4 = v24;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( v6 == 1 || v6 == 3 && !*(_QWORD *)a2 )
    {
      v14 = ((unsigned __int64)(v4 + 1) >> 12)
          - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    }
    else
    {
      *((_DWORD *)P + 7) = (unsigned __int64)(v7 - 1) >> 12;
      *((_BYTE *)P + 33) = (unsigned __int64)(v7 - 1) >> 44;
      v14 = 0LL;
    }
    v15 = KeAbPreAcquire((__int64)(P + 5), 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64(v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 5, v15, (__int64)(P + 5));
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    MiAdvanceVadView((__int64)P, v14);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
    KeAbPostRelease((ULONG_PTR)(P + 5));
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v21 = P[8] & 0xFDFFFFFF;
      P[15] = 0LL;
      *((_DWORD *)P + 16) = v21;
    }
    v18 = P[6] & 0x70;
    if ( v18 != 16 && v18 != 64
      || !MiResidentPagesForSpan(
            (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL,
            v17)
      || (ProcessPartition = (void *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process),
          (unsigned int)MiChargeResident(ProcessPartition, v23, 128LL)) )
    {
      *P = *(_QWORD *)a2;
      result = 0LL;
      *(_QWORD *)a2 = P;
      return result;
    }
    if ( (P[6] & 0x70) == 0x40 )
      MiFreeRotateView(P);
    if ( v13 )
      MiFreePlaceholderStorage((__int64)P);
  }
  PlaceholderStorage = -1073741670;
LABEL_37:
  ExFreePoolWithTag(P, 0);
  return (unsigned int)PlaceholderStorage;
}
