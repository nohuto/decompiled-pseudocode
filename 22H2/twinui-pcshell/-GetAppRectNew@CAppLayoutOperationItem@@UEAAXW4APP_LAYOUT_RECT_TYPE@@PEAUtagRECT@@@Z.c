/*
 * XREFs of ?GetAppRectNew@CAppLayoutOperationItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1804F5190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CAppLayoutOperationItem::GetAppRectNew(const RECT *a1, int a2, struct tagRECT *a3)
{
  BOOL result; // eax
  const RECT *v7; // rdx

  result = SetRectEmpty(a3);
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = a1 + 10;
  }
  else
  {
    v7 = a1 + 9;
  }
  return CopyRect(a3, v7);
}
