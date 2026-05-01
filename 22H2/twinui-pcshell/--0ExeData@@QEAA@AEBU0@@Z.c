/*
 * XREFs of ??0ExeData@@QEAA@AEBU0@@Z @ 0x1804CB3C0
 * Callers:
 *     ?GetCachedExeData@ExeDataCache@@QEAA?AV?$optional@UExeData@@@std@@PEAUHWND__@@@Z @ 0x1804CBFFC (-GetCachedExeData@ExeDataCache@@QEAA-AV-$optional@UExeData@@@std@@PEAUHWND__@@@Z.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1804CCDF8 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ExeData *__fastcall ExeData::ExeData(ExeData *this, const struct ExeData *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  return this;
}
