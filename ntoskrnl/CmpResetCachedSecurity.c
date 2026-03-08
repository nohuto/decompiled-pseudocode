/*
 * XREFs of CmpResetCachedSecurity @ 0x14067D510
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !CmpFindSecurityCellCacheIndex(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
