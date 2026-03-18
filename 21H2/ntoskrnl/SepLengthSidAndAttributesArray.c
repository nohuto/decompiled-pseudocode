/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x140799CF0
 * Callers:
 *     SepCreateClaimAttributes @ 0x14066B830 (SepCreateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x140799BB0 (SepSetTokenCapabilities.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE94C (SepDuplicateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(void *Src, __int64 a2, _DWORD *a3)
{
  void *Pool2; // rdi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v11) = 0;
  v10 = 0LL;
  Pool2 = (void *)ExAllocatePool2(256LL, 8LL, 1632855379LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = SeCaptureSidAndAttributesArray(Src, 8, v8, v9, (__int64)&v10, (__int64)&v11);
  *a3 = v11;
  if ( v6 == -1073741789 )
    v6 = 0;
  ExFreePoolWithTag(Pool2, 0);
  return v6;
}
