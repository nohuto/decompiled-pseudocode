/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ @ 0x18004BAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCFocusTarget::GetInputSite(__int64 a1)
{
  return MPCInputRouter::Get3DFocusTarget((MPCInputRouter *)(a1 - 64));
}
