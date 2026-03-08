/*
 * XREFs of CmpSetAccessStateForBackupRestore @ 0x14087BCE8
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x14069A584 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 * Callees:
 *     SeSinglePrivilegeCheckEx @ 0x1406BA46C (SeSinglePrivilegeCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407582D0 (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall CmpSetAccessStateForBackupRestore(__int64 a1, KPROCESSOR_MODE a2, __int64 a3, char a4)
{
  *(_DWORD *)(a1 + 20) = 0;
  if ( SeSinglePrivilegeCheckEx(SeBackupPrivilege, (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32), a2) )
  {
    *(_DWORD *)(a1 + 12) |= 2u;
    *(_DWORD *)(a1 + 20) |= 0x1020019u;
  }
  if ( SeSinglePrivilegeCheckEx(SeRestorePrivilege, (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32), a2) )
  {
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 20) |= 0x10F0006u;
  }
  if ( a4 )
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 20);
  if ( !*(_DWORD *)(a1 + 20) )
    return 3221225506LL;
  SepAdjustAccessStateForConstraints((__int64)CmKeyObjectType, a3, 1, a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 24) & ~*(_DWORD *)(a1 + 20);
  return 0LL;
}
