/*
 * XREFs of ?get_BoundingRectangle@CPlaceModeButtonAcc@@UEAAJPEAUUiaRect@@@Z @ 0x18008EA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaceModeButtonAcc::get_BoundingRectangle(CPlaceModeButtonAcc *this, struct UiaRect *a2)
{
  __int64 result; // rax

  a2->left = (double)*((int *)this + 10);
  a2->top = (double)*((int *)this + 11);
  a2->width = (double)(*((_DWORD *)this + 12) - *((_DWORD *)this + 10));
  result = 0LL;
  a2->height = (double)(*((_DWORD *)this + 13) - *((_DWORD *)this + 11));
  return result;
}
