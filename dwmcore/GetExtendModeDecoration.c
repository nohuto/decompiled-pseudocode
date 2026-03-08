/*
 * XREFs of GetExtendModeDecoration @ 0x1800FE3D8
 * Callers:
 *     PerformSample @ 0x180028DE0 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800FE21C (AppendCustomSamplerShaderBody.c)
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
