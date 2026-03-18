/*
 * XREFs of AslStringDuplicate @ 0x1406D4AA8
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D48F0 (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreate @ 0x14075844C (AslFileMappingCreate.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075978C (AslpFileMakeStringVersionAttributes.c)
 *     AslFileMappingCreateFromImageView @ 0x140849CE8 (AslFileMappingCreateFromImageView.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FB6C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x140A54344 (AslRegistryGetString.c)
 *     AslPathToSystemPath @ 0x140A55398 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x140A56328 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14022C660 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14022C6D0 (RtlStringCchCopyW.c)
 *     RtlULongLongMult @ 0x14022CE4C (RtlULongLongMult.c)
 *     memset @ 0x140435400 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  size_t v5; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF
  size_t v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  pullResult = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v10);
  if ( v4 < 0 )
  {
LABEL_15:
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  v5 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v4 = -1073741675;
    goto LABEL_15;
  }
  v4 = RtlULongLongMult(v10 + 1, 2uLL, &pullResult);
  if ( v4 < 0 )
    goto LABEL_15;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, 1953517633LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  memset(Pool2, 0, pullResult);
  v4 = RtlStringCchCopyW(v7, v5, a2);
  if ( v4 < 0 )
  {
    AslLogCallPrintf(1LL);
    ExFreePoolWithTag(v7, 0x74705041u);
    return (unsigned int)v4;
  }
  *a1 = v7;
  return 0;
}
