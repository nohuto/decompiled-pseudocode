/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99e_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99e_____ @ 0x180096ED8
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_e7ee08eaab45c86a9da892ee14eebf81____::_1_::dtor$2 @ 0x180096966 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_e7ee08eaab45c86a9da892ee14ee_ea_180096966.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919____::_1_::dtor$2 @ 0x180175696 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_256298ed2ede4decac2a97d43cbe894d____::_1_::dtor$2 @ 0x1801D5F5A (_ShellPositionerHelpers--PerformCallbackOnView__lambda_256298ed2ede4decac2a97d43cbe_ea_1801D5F5A.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_eda794d32439c7f9edd01c3b7d222174____::_1_::dtor$2 @ 0x1801FBF8F (_ShellPositionerHelpers--PerformCallbackOnView__lambda_eda794d32439c7f9edd01c3b7d22_ea_1801FBF8F.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_f55419f36c5768dba08f90ed6dc615aa____::_1_::dtor$2 @ 0x1801FC0F7 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_f55419f36c5768dba08f90ed6dc6_ea_1801FC0F7.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_bf566675836f3ff339c235f1251539b2____::_1_::dtor$2 @ 0x180204A9F (_ShellPositionerHelpers--PerformCallbackOnView__lambda_bf566675836f3ff339c235f12515_ea_180204A9F.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_6daf7fcbe5dae3ed1785fcd042bd9f2b____::_1_::dtor$2 @ 0x1802D429A (_ShellPositionerHelpers--PerformCallbackOnView__lambda_6daf7fcbe5dae3ed1785fcd042bd_ea_1802D429A.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_70a964b454178176402e73f40db94080____::_1_::dtor$2 @ 0x1802D4402 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_70a964b454178176402e73f40db9_ea_1802D4402.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_747d28f0200701c03cb3e0ff96e7cdfa____::_1_::dtor$2 @ 0x1802D456A (_ShellPositionerHelpers--PerformCallbackOnView__lambda_747d28f0200701c03cb3e0ff96e7_ea_1802D456A.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_efc08d10515c19cccf27ff1a2e0df4e3____::_1_::dtor$2 @ 0x1802D46D2 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_efc08d10515c19cccf27ff1a2e0d_ea_1802D46D2.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c____::_1_::dtor$2 @ 0x1802FC9C6 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09_ea_1802FC9C6.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_e0ff0c218d6e4b12793471debe4cf99e____::_1_::dtor$2 @ 0x1802FCB2E (_ShellPositionerHelpers--PerformCallbackOnView__lambda_e0ff0c218d6e4b12793471debe4c_ea_1802FCB2E.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800646D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99e_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_e0ff0c218d6e4b12793471debe4cf99e_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
