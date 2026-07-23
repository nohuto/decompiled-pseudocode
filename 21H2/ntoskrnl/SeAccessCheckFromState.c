/*
 * XREFs of SeAccessCheckFromState @ 0x1402543D0
 * Callers:
 *     CmpCheckAdminAccess @ 0x1405EA888 (CmpCheckAdminAccess.c)
 *     EtwpAccessCheckFromState @ 0x140639094 (EtwpAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x1402544E0 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x140254574 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
  int v12; // ebp
  _BYTE *v14; // r8
  _BYTE v16[1184]; // [rsp+50h] [rbp-988h] BYREF
  _BYTE v17[1184]; // [rsp+4F0h] [rbp-4E8h] BYREF

  v12 = (int)SecurityDescriptor;
  memset(v17, 0, 0x498uLL);
  memset(v16, 0, 0x498uLL);
  SepTokenFromAccessInformation(PrimaryTokenInformation, v17);
  LODWORD(v14) = 0;
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v16);
    v14 = v16;
  }
  return SeAccessCheckFromStateEx(
           v12,
           (unsigned int)v17,
           (_DWORD)v14,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
