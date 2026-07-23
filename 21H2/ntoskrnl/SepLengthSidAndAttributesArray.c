/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x1406CCC08
 * Callers:
 *     SepCreateClaimAttributes @ 0x1406CBEA4 (SepCreateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x1406CCA98 (SepSetTokenCapabilities.c)
 *     SepDuplicateClaimAttributes @ 0x1409251D0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x1406CCCC0 (SeCaptureSidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(void *Src, __int64 a2, _DWORD *a3)
{
  PVOID PoolWithTag; // rdi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v11) = 0;
  v10 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x61536553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v6 = SeCaptureSidAndAttributesArray(Src, 8, v8, v9, (__int64)&v10, (__int64)&v11);
  *a3 = v11;
  if ( v6 == -1073741789 )
    v6 = 0;
  ExFreePoolWithTag(PoolWithTag, 0);
  return v6;
}
