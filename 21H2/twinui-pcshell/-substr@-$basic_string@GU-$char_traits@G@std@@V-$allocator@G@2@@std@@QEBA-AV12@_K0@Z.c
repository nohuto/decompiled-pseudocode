/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA2C
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800DC954 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE7A8 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180120A00 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18025DBB8 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803BD664 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D8BBC (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::substr(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8

  v4 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  v6 = a1[2];
  if ( v6 < v4 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  v7 = v6 - v4;
  if ( v7 >= a4 )
    v7 = a4;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  std::wstring::assign((char *)a2, (char *)a1 + 2 * v4, v7);
  return a2;
}
