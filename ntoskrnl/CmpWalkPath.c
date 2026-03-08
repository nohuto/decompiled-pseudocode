/*
 * XREFs of CmpWalkPath @ 0x1407FE938
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407FE980 (CmpWalkUnicodeStringPath.c)
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
