/*
 * XREFs of GetExtendModeDecoration @ 0x1800FF018
 * Callers:
 *     PerformSample @ 0x180028ED0 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800FEE5C (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     <none>
 */

char __fastcall GetExtendModeDecoration(char a1)
{
  switch ( a1 )
  {
    case 1:
      return 67;
    case 2:
      return 87;
    case 3:
      return 77;
  }
  return 0;
}
