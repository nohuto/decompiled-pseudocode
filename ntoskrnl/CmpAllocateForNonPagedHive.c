/*
 * XREFs of CmpAllocateForNonPagedHive @ 0x1406140E0
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A19E20 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x14072C8EC (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateForNonPagedHive(unsigned int a1, char a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 Pool2; // rdi

  v4 = a1;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 72LL : 64LL, v4, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota((unsigned int)v4);
  return Pool2;
}
