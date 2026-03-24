/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x1406E2464 (CmQueryMultipleValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140655AB0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( HvpMarkCellDirty(a1, a3, 0) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
