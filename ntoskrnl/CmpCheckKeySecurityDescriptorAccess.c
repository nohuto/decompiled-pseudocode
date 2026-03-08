/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68
 * Callers:
 *     CmpCheckSecurityCellAccess @ 0x14074C9BC (CmpCheckSecurityCellAccess.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCheckKcbStackAccess @ 0x140A18350 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140A18620 (CmpCheckKeyNodeStackAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessStateEx @ 0x1406991E0 (SeCreateAccessStateEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14087BCE8 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *v9; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  __int64 v11; // rdx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v16[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[28]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  v9 = (_DWORD *)CmKeyObjectType + 19;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, v16, v17, a3, v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v16, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
        goto LABEL_4;
      if ( !LODWORD(v16[0].PrimaryToken) )
      {
        AccessState = 0;
        goto LABEL_4;
      }
      GrantedAccess = HIDWORD(v16[0].PrimaryToken);
    }
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &v16[1],
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
LABEL_4:
    SepDeleteAccessState((__int64)v16);
    SeReleaseSubjectContext(&v16[1]);
  }
  return (unsigned int)AccessState;
}
