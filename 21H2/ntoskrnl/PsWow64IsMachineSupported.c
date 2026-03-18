/*
 * XREFs of PsWow64IsMachineSupported @ 0x1406AD5D0
 * Callers:
 *     PsGetSupportedProcessorArchitectures @ 0x1406AD42C (PsGetSupportedProcessorArchitectures.c)
 *     PspSelectMachineForProcess @ 0x140711058 (PspSelectMachineForProcess.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140236258 (RtlWow64GetEquivalentMachineCHPE.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PsWow64IsMachineSupported(__int16 a1)
{
  __int16 EquivalentMachineCHPE; // ax
  int v2; // r9d
  __int16 v3; // cx
  int v4; // edx
  __int64 SystemDllInfo; // rax
  int v6; // edx
  __int16 v7; // r8

  if ( !a1 )
    return 0LL;
  EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(a1);
  if ( EquivalentMachineCHPE != v3 )
    return 0LL;
  v4 = v2;
  while ( 1 )
  {
    SystemDllInfo = PsQuerySystemDllInfo((unsigned int)v4);
    if ( SystemDllInfo )
    {
      if ( (*(_DWORD *)SystemDllInfo & 8) != 0 && *(_WORD *)(SystemDllInfo + 2) == v7 )
        break;
    }
    v4 = v6 + 1;
    if ( v4 >= 6 )
      return 0LL;
  }
  return 1LL;
}
