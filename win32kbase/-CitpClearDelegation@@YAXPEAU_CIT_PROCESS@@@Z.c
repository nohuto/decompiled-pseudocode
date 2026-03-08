/*
 * XREFs of ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00B01AC
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 *     CitEnableKeyboardDelegation @ 0x1C00B0154 (CitEnableKeyboardDelegation.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C006C060 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitpClearDelegation(struct _CIT_PROCESS *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax

  if ( CitpProcessInfoIsValid(a1) )
  {
    v2 = *(_QWORD *)(v1 + 16);
    if ( v2 )
      *(_QWORD *)(v2 + 24) = 0LL;
    v3 = *(_QWORD *)(v1 + 24);
    if ( v3 )
      *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
