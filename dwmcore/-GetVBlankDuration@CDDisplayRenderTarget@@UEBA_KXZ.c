/*
 * XREFs of ?GetVBlankDuration@CDDisplayRenderTarget@@UEBA_KXZ @ 0x1801C1AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDDisplayRenderTarget::GetVBlankDuration(CDDisplayRenderTarget *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 5);
  if ( result )
    return *(_QWORD *)(result + 488);
  return result;
}
