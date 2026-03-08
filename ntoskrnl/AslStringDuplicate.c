/*
 * XREFs of AslStringDuplicate @ 0x1406D51D8
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D5020 (AslpFileVerQueryBlock.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140847670 (AslFileMappingCreateFromImageView.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x140A51674 (AslRegistryGetString.c)
 *     AslPathToSystemPath @ 0x140A526E4 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x140A53674 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  size_t v5; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  const char *v9; // r9
  int v10; // r8d
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF
  size_t v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  pullResult = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v12);
  if ( v4 < 0 )
  {
    v9 = "RtlStringCchLengthW failed [%x]";
    v10 = 574;
LABEL_16:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v10, (_DWORD)v9);
    return (unsigned int)v4;
  }
  v5 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v4 = -1073741675;
    v10 = 585;
    goto LABEL_15;
  }
  v4 = RtlULongLongMult(v12 + 1, 2uLL, &pullResult);
  if ( v4 < 0 )
  {
    v10 = 591;
LABEL_15:
    v9 = "SIZE_T arithmetic failed [%x]";
    goto LABEL_16;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, 1953517633LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"Out of memory");
    return (unsigned int)v4;
  }
  memset(Pool2, 0, pullResult);
  v4 = RtlStringCchCopyW(v7, v5, a2);
  if ( v4 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 608, (unsigned int)"RtlStringCchCopyW failed [%x]");
    ExFreePoolWithTag(v7, 0x74705041u);
    return (unsigned int)v4;
  }
  *a1 = v7;
  return 0;
}
