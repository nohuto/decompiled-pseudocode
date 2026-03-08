/*
 * XREFs of MiValidateUserCallTarget @ 0x140A41024
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MmValidateUserCallTarget @ 0x140A410E4 (MmValidateUserCallTarget.c)
 * Callees:
 *     CfgAddressToBitState @ 0x1406540A4 (CfgAddressToBitState.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140A40FD0 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiIsProcessXfgEnabled @ 0x140A40FF8 (MiIsProcessXfgEnabled.c)
 */

__int64 __fastcall MiValidateUserCallTarget(unsigned __int64 a1, __int64 a2)
{
  __int16 v3; // di
  unsigned int v4; // ebx
  _KPROCESS *Process; // rbp
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax

  v3 = a1;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = CfgAddressToBitState(a1, *(const signed __int64 **)a2);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        return 1;
    }
    else
    {
      if ( !(unsigned int)MiIsProcessCfgExportSuppressionEnabled((__int64)Process) && v10 == *(_DWORD *)(a2 + 24) )
        return 1;
      if ( !(unsigned int)MiIsProcessXfgEnabled(v9) )
      {
        v12 = *(unsigned int *)(a2 + 24);
        if ( v11 == v12 && (v3 & 0xFFF) != v12 )
          return 1;
      }
    }
  }
  return v4;
}
