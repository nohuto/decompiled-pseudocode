/*
 * XREFs of DWP_GetEnabledPopupOffset @ 0x1C0243BE0
 * Callers:
 *     <none>
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071D0 (DWP_GetEnabledPopup.c)
 */

_QWORD *__fastcall DWP_GetEnabledPopupOffset(_QWORD *a1)
{
  _QWORD *result; // rax

  result = DWP_GetEnabledPopup(a1);
  if ( result )
    return (_QWORD *)result[6];
  return result;
}
