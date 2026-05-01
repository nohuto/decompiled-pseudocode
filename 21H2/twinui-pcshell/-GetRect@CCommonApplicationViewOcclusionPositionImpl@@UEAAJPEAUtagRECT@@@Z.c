/*
 * XREFs of ?GetRect@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAUtagRECT@@@Z @ 0x18008D230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::GetRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[1];
  return result;
}
