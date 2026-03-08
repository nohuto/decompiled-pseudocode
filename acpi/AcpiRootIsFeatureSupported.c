/*
 * XREFs of AcpiRootIsFeatureSupported @ 0x1C003D920
 * Callers:
 *     <none>
 * Callees:
 *     IsHypervisorLpiCapable @ 0x1C003DA5C (IsHypervisorLpiCapable.c)
 *     HviIsAnyHypervisorPresent @ 0x1C005ED90 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall AcpiRootIsFeatureSupported(char *Str1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent() || (unsigned __int8)IsHypervisorLpiCapable() )
    v2 = _stricmp(Str1, "Processor Aggregator Device") != 0 ? 0xC00000BB : 0;
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent() && !_stricmp(Str1, "Resource Appending") )
  {
    _InterlockedOr64(&AcpiGlobalFlags, 2uLL);
    return 0;
  }
  return v2;
}
