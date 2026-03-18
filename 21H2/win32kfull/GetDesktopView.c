/*
 * XREFs of GetDesktopView @ 0x1C0078100
 * Callers:
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C007A09C (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C007B270 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C007B8C0 (_MapDesktopObject.c)
 *     NtUserPostThreadMessage @ 0x1C00AAB70 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00F6854 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0107DE0 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 704); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
