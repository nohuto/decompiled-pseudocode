/*
 * XREFs of SeAccessCheckFromState @ 0x1402E12F0
 * Callers:
 *     CmpCheckAdminAccess @ 0x1406B6880 (CmpCheckAdminAccess.c)
 *     EtwpAccessCheckFromState @ 0x140797ACC (EtwpAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x1402E13F0 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x1402E1484 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _BYTE *v14; // r8
  _BYTE v17[1184]; // [rsp+50h] [rbp-998h] BYREF
  _BYTE v18[1184]; // [rsp+4F0h] [rbp-4F8h] BYREF

  memset(v18, 0, 0x498uLL);
  memset(v17, 0, 0x498uLL);
  SepTokenFromAccessInformation(PrimaryTokenInformation, v18);
  v14 = 0LL;
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v17);
    v14 = v17;
  }
  return SeAccessCheckFromStateEx(
           SecurityDescriptor,
           v18,
           v14,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus);
}
