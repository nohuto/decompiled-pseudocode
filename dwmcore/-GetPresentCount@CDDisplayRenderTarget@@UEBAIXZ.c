/*
 * XREFs of ?GetPresentCount@CDDisplayRenderTarget@@UEBAIXZ @ 0x1801C14B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentCount(CDDisplayRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 5);
  if ( result )
    return *(unsigned int *)(result + 444);
  return result;
}
