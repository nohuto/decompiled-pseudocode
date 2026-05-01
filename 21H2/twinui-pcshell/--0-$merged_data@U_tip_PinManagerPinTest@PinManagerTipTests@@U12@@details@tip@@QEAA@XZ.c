/*
 * XREFs of ??0?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAA@XZ @ 0x18013540C
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1801452F8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0DAC (--0-$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  tip::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 344) = -1;
  *(_QWORD *)(a1 + 296) = 7LL;
  *(_QWORD *)(a1 + 328) = 7LL;
  *(_QWORD *)a1 = &tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_WORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_WORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 1;
  return result;
}
