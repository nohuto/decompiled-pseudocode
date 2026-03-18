/*
 * XREFs of CitEnableKeyboardDelegation @ 0x1C009DF2C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C009DF84 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitEnableKeyboardDelegation(int a1, struct _CIT_PROCESS **a2, struct _CIT_PROCESS **a3)
{
  struct _CIT_PROCESS *v4; // rdi
  struct _CIT_PROCESS *v5; // rax

  if ( xmmword_1C029A230 )
  {
    if ( !a2 )
      goto LABEL_3;
    if ( !a1 || !a3 || a2 == a3 )
    {
      CitpClearDelegation(a2[116]);
LABEL_3:
      if ( a3 )
        CitpClearDelegation(a3[116]);
      return;
    }
    v4 = CitpProcessEnsureContext(a2);
    v5 = CitpProcessEnsureContext(a3);
    if ( v4 && v5 )
    {
      *((_QWORD *)v4 + 3) = v5;
      *((_QWORD *)v5 + 2) = v4;
    }
  }
}
