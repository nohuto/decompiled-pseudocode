/*
 * XREFs of ??_G?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAAPEAXI@Z @ 0x18013710C
 * Callers:
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@AEAAKXZ @ 0x18013DE6C (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A13E8 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8D8 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

_QWORD *__fastcall tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`scalar deleting destructor'(
        _QWORD *a1)
{
  *a1 = &tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`vftable';
  tip::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  std::wstring::_Tidy_deallocate(a1 + 38);
  std::wstring::_Tidy_deallocate(a1 + 34);
  tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(a1 + 1));
  return a1;
}
