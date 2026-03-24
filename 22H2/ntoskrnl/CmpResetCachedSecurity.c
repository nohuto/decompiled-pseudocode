/*
 * XREFs of CmpResetCachedSecurity @ 0x1405CD224
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1406E6268 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140206E70 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !CmpFindSecurityCellCacheIndex(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
