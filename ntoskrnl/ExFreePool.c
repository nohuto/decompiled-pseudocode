/*
 * XREFs of ExFreePool @ 0x140AAB270
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     sub_1403EBE80 @ 0x1403EBE80 (sub_1403EBE80.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x14040BD88 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x14040BFA8 (RtlpGetPersistedRegistryLocation.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x14076C0F0 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14078C3F0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14079F7A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407A0140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1407EA820 (RtlFreeAnsiString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     RtlUnicodeStringToOemString @ 0x14085D450 (RtlUnicodeStringToOemString.c)
 *     RtlFreeOemString @ 0x14085E210 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x140868F30 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408716E0 (RtlUpcaseUnicodeStringToOemString.c)
 *     PiDrvDbQueryHiveFileName @ 0x14096DBF4 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B5BB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAD78 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BF3B0 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409BF4C0 (RtlUnicodeStringToUTF8String.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 *     sub_140B16300 @ 0x140B16300 (sub_140B16300.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)P);
}
