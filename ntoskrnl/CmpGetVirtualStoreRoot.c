/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140A16FE4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140A14668 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpGetMappingHiveForString @ 0x140A16EC8 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x140A1709C (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // esi
  __int64 v8; // rcx
  int v9; // edi
  ULONG_PTR KcbInHashEntryByCellIndex; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a2;
      v9 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, 0, v9);
      CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex);
      *a3 = v9;
      *a4 = KcbInHashEntryByCellIndex;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
