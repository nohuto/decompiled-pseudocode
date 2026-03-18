/*
 * XREFs of MiDisableXfgOnPatchedFunctions @ 0x1406425D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDisableXfgOnTarget @ 0x1405B1DE8 (RtlDisableXfgOnTarget.c)
 *     MiValidateXfgUserCallTarget @ 0x140656730 (MiValidateXfgUserCallTarget.c)
 *     MiIsProcessXfgEnabled @ 0x140A43CCC (MiIsProcessXfgEnabled.c)
 */

char __fastcall MiDisableXfgOnPatchedFunctions(__int64 a1, unsigned int *a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  if ( a4 == *(_DWORD *)(a1 + 8) && a3 == 114688 )
  {
    v4 = *(_QWORD *)a1 + *a2;
    if ( (unsigned int)MiIsProcessXfgEnabled(KeGetCurrentThread()->ApcState.Process) )
    {
      if ( (unsigned int)MiValidateXfgUserCallTarget(v4, *(_QWORD *)(v5 + 1680) + 424LL) )
        RtlDisableXfgOnTarget(v4);
    }
  }
  return 0;
}
