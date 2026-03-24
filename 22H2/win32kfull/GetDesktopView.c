/*
 * XREFs of GetDesktopView @ 0x1C004EFA0
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C003B9B0 (NtUserDwmValidateWindow.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C004C868 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     NtUserPostThreadMessage @ 0x1C00DA2F0 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C0105528 (IsHotKey.c)
 *     _MapDesktopObject @ 0x1C01185A0 (_MapDesktopObject.c)
 *     UserCommitDesktopMemory @ 0x1C011F970 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  unsigned int DLT; // eax
  _QWORD *result; // rax

  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  for ( result = *(_QWORD **)(a1 + 704); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
