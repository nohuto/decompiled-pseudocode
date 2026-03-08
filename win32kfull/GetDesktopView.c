/*
 * XREFs of GetDesktopView @ 0x1C0099840
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0037190 (NtUserPostThreadMessage.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C0099640 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C0099770 (_MapDesktopObject.c)
 *     UserCommitDesktopMemory @ 0x1C00DDB90 (UserCommitDesktopMemory.c)
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
