/*
 * XREFs of GetpwndNotifypMenuState @ 0x1C00236FC
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00236D8 (IsModelessMenuNotificationWindow.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
