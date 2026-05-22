/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_db9dc85612e9aa25d7d94e60c965daf1___ @ 0x18004A550
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801812BC (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_db9dc85612e9aa25d7d94e60c965daf1___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  while ( a2 != a3 && *(_WORD *)(a4 + 26) != *((_WORD *)a2 + 21) )
    a2 = (__int64 *)*a2;
  *a1 = a2;
  return a1;
}
