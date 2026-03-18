/*
 * XREFs of ExFreePool @ 0x140AAFCC0
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     sub_1403F13A0 @ 0x1403F13A0 (sub_1403F13A0.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411118 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411338 (RtlpGetPersistedRegistryLocation.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140756020 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlFreeAnsiString @ 0x140756D50 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140774000 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B7570 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1407BE7D0 (RtlDowncaseUnicodeString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D11A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DB1E0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1407FB710 (RtlCreateUnicodeString.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     RtlUnicodeStringToOemString @ 0x1408612C0 (RtlUnicodeStringToOemString.c)
 *     RtlFreeOemString @ 0x140862080 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x14086BB60 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408745A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970C14 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971148 (PiDrvDbResolveSystemFilePath.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8BE0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDDA8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C23E0 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C24F0 (RtlUnicodeStringToUTF8String.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 *     sub_140B1A300 @ 0x140B1A300 (sub_140B1A300.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)P);
}
