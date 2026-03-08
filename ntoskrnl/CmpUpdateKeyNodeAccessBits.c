/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1407A893C
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0
    && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
    && (int)HvpMarkCellDirty(a1, a3) >= 0 )
  {
    *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
