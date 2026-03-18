/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1406D23CC
 * Callers:
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CFC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140710714 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
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
