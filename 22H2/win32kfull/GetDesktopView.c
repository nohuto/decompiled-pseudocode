/*
 * XREFs of GetDesktopView @ 0x1C004FEC0
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C004FCC0 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C004FDF0 (_MapDesktopObject.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0050618 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     UserCommitDesktopMemory @ 0x1C00A72E0 (UserCommitDesktopMemory.c)
 *     NtUserPostThreadMessage @ 0x1C0115410 (NtUserPostThreadMessage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 696); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
