/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x140A16E8C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140A1798C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140A17B40 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x140A16EC8 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x140A171A8 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, &v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(&v4, a2);
  return result;
}
