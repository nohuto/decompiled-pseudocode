/*
 * XREFs of PsIsMachineSupportedNoWow @ 0x1407111FC
 * Callers:
 *     PspSelectMachineForProcess @ 0x140711058 (PspSelectMachineForProcess.c)
 * Callees:
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 */

_BOOL8 __fastcall PsIsMachineSupportedNoWow(__int16 a1)
{
  _BOOL8 result; // rax
  _UNKNOWN **SystemDllInfo; // rax
  __int16 v3; // dx

  result = 1;
  if ( a1 != -31132 )
  {
    SystemDllInfo = PsQuerySystemDllInfo(4);
    if ( !SystemDllInfo || *((_WORD *)SystemDllInfo + 1) != v3 )
      return 0;
  }
  return result;
}
