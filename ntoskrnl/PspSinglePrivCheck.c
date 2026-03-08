/*
 * XREFs of PspSinglePrivCheck @ 0x140794DB4
 * Callers:
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 * Callees:
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PspSinglePrivCheck(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, __int64 a4)
{
  int v6; // ebp
  __int64 **i; // r14
  __int64 v8; // rcx

  *(_BYTE *)(a4 + 52) = a3;
  if ( !a3 )
    return 1LL;
  *(_DWORD *)(a4 + 32) = 1;
  *(_DWORD *)(a4 + 36) = 1;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)a4);
  v6 = 0;
  *(_BYTE *)(a4 + 53) = 0;
  for ( i = &PspWorkingSetPrivileges; ; ++i )
  {
    v8 = **i;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 40) = v8;
    if ( SePrivilegeCheck((PPRIVILEGE_SET)(a4 + 32), (PSECURITY_SUBJECT_CONTEXT)a4, a3) == 1 )
      break;
    if ( (unsigned int)++v6 >= 2 )
      return *(unsigned __int8 *)(a4 + 53);
  }
  *(_BYTE *)(a4 + 53) = 1;
  return *(unsigned __int8 *)(a4 + 53);
}
