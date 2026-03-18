/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1407DE34C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1407DDDD8 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x140A22E84 (CmpSyncKeyValues.c)
 * Callees:
 *     CmUnlockHiveSecurity @ 0x140AF6100 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a1 == a2 )
    v2 = a1;
  else
    CmUnlockHiveSecurity(a1);
  return CmUnlockHiveSecurity(v2);
}
