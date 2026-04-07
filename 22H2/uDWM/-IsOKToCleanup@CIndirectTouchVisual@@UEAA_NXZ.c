/*
 * XREFs of ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ @ 0x1800AD9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectTouchVisual::IsOKToCleanup(CIndirectTouchVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 45) )
    return *((_QWORD *)this + 46) == 0LL;
  return result;
}
