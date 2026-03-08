/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x1406B7CA4
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x140A13D54 (CmpKeyNodeNeedsAccessBitUpdate.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rcx
  signed __int64 *v13; // rdi
  __int64 v14; // rbp
  ULONG_PTR v15; // rcx
  __int64 CellPaged; // rax
  __int64 v17; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5);
  else
    CellFlat = HvpGetCellPaged(v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v9, CellFlat, *(unsigned int *)(a1 + 40));
  }
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v9, CellFlat) )
  {
    if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v12, a2);
    else
      HvpReleaseCellPaged(v12, a2);
    v13 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
    v14 = KeAbPreAcquire((__int64)v13, 0LL);
    if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v13, 0, v14, (__int64)v13);
    if ( v14 )
      *(_BYTE *)(v14 + 18) = 1;
    v15 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v15, *(unsigned int *)(a1 + 40));
    else
      CellPaged = HvpGetCellPaged(v15);
    v10 = CellPaged;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 32), CellPaged, *(unsigned int *)(a1 + 40));
    v17 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
    KeAbPostRelease(v17 + 72);
  }
  return v10;
}
