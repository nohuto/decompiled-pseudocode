/*
 * XREFs of RtlValidateUserCallTarget @ 0x180054404
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18005424C (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD834 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     CfgAddressToBitState @ 0x180054498 (CfgAddressToBitState.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(__int64 a1, _DWORD *a2)
{
  char v3; // si
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, qword_1801813A8);
  v6 = 0;
  if ( !v4 )
    goto LABEL_8;
  v7 = v4 - 1;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( LdrControlFlowGuardEnforcedWithExportSuppression(v5) )
      {
        *a2 = 16;
        return v6;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v6;
  }
  LOBYTE(v6) = (v3 & 0xF) == 0;
  *a2 = (v6 ^ 1) + 1;
  return v6;
}
