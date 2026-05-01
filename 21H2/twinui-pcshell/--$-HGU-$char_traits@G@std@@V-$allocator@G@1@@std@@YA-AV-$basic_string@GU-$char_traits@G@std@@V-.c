/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@AEBV10@@Z @ 0x1800AF864
 * Callers:
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FC0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802499A4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall std::operator+<unsigned short>(__int64 a1, void *a2)
{
  __int64 v3; // rax

  v3 = std::wstring::append(a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v3;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 7LL;
  *(_WORD *)v3 = 0;
  return a1;
}
