/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1804CDAB0
 * Callers:
 *     ?IsAppActive@Win32AppStateManager@@UEAA_NPEBG@Z @ 0x1804CC360 (-IsAppActive@Win32AppStateManager@@UEAA_NPEBG@Z.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1804CCD84 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD0B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180267364 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

unsigned __int16 **__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
        unsigned __int16 **a1,
        unsigned __int16 **a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v6; // rsi
  __int64 v7; // r11
  unsigned __int16 *v8; // r11
  unsigned __int16 **result; // rax

  v3 = *a1;
  v6 = *a1;
  v7 = *((_QWORD *)*a1 + 1);
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( (int)std::wstring::compare((_QWORD *)(v7 + 32), a3) >= 0 )
    {
      v3 = v8;
      v7 = *(_QWORD *)v8;
    }
    else
    {
      v7 = *((_QWORD *)v8 + 2);
    }
  }
  if ( v3 == v6 || (int)std::wstring::compare(a3, v3 + 16) < 0 )
    v3 = v6;
  result = a2;
  *a2 = v3;
  return result;
}
