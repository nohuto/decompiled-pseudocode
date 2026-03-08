/*
 * XREFs of CitEnableKeyboardDelegation @ 0x1C00B0154
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B590 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00B01AC (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitEnableKeyboardDelegation(int a1, __int64 a2, __int64 a3)
{
  struct _CIT_PROCESS *v4; // rdi
  const char *v5; // rdx
  struct _CIT_PROCESS *v6; // rax

  if ( xmmword_1C02D4DA0 )
  {
    if ( !a2 )
      goto LABEL_3;
    if ( !a1 || !a3 || a2 == a3 )
    {
      CitpClearDelegation(*(struct _CIT_PROCESS **)(a2 + 912));
LABEL_3:
      if ( a3 )
        CitpClearDelegation(*(struct _CIT_PROCESS **)(a3 + 912));
      return;
    }
    v4 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a2, (const char *)a2);
    v6 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a3, v5);
    if ( v4 && v6 )
    {
      *((_QWORD *)v4 + 3) = v6;
      *((_QWORD *)v6 + 2) = v4;
    }
  }
}
