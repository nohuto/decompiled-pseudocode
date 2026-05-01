/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800BA2B4
 * Callers:
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15C0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x1800B5D00 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124DA8 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1801536F0 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180108984 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ??$?0PEAGX@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180267880 (--$-0PEAGX@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$allocato.c)
 */

__int64 __fastcall std::to_wstring(__int64 a1, int a2)
{
  _WORD *v3; // rax
  _BYTE v5[6]; // [rsp+52h] [rbp-16h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_WORD *)std::_UIntegral_to_buff<unsigned short,unsigned int>(v5);
  }
  else
  {
    v3 = (_WORD *)(std::_UIntegral_to_buff<unsigned short,unsigned int>(v5) - 2);
    *v3 = 45;
  }
  std::wstring::wstring(a1, v3, v5);
  return a1;
}
