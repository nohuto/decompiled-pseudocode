/*
 * XREFs of NtGdiDDCCIGetCapabilitiesStringLength @ 0x1C026CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C026BEB4 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesStringLength(void *a1, unsigned int *Address)
{
  __int64 v4; // rax
  int CapabilitiesStringLength; // ebx
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v4 = SGDGetSessionState(a1);
  CapabilitiesStringLength = CMonitorAPI::DdcciGetCapabilitiesStringLength(
                               *(CMonitorAPI **)(*(_QWORD *)(v4 + 32) + 8728LL),
                               a1,
                               &v7);
  if ( CapabilitiesStringLength >= 0 )
  {
    ProbeForWrite(Address, 4uLL, 1u);
    *Address = v7;
  }
  return (unsigned int)CapabilitiesStringLength;
}
