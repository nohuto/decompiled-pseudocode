/*
 * XREFs of PsWow64IsMachineSupported @ 0x14076D0D0
 * Callers:
 *     PspSelectMachineForProcess @ 0x14070797C (PspSelectMachineForProcess.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14076CF28 (PsGetSupportedProcessorArchitectures.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402E1ED8 (RtlWow64GetEquivalentMachineCHPE.c)
 *     PsQuerySystemDllInfo @ 0x14076D124 (PsQuerySystemDllInfo.c)
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
    if ( v4 >= 7 )
      return 0LL;
  }
  return 1LL;
}
