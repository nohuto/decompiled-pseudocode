/*
 * XREFs of CmpAllocate @ 0x14072C880
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A19E20 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x14072C8EC (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocate(unsigned int a1, char a2, unsigned int a3)
{
  __int64 Pool2; // rdi

  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL, a1, a3);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(a1);
  return Pool2;
}
