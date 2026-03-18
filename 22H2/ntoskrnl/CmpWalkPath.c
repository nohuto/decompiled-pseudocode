/*
 * XREFs of CmpWalkPath @ 0x1408266C8
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B5C934 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x140826710 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PCWSTR SourceString)
{
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = BugCheckParameter4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return CmpWalkUnicodeStringPath(BugCheckParameter3, v3);
}
