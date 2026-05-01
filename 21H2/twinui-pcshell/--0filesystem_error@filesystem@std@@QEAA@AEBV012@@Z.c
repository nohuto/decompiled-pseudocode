/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x18011AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18011A3EC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180394778 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::filesystem_error(
        std::filesystem::filesystem_error *this,
        const struct std::filesystem::filesystem_error *a2)
{
  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = &std::_System_error::`vftable';
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_QWORD *)this = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring((__int64)this + 40);
  std::wstring::wstring((__int64)this + 72);
  std::string::string((_QWORD *)this + 13, (__int64)a2 + 104);
  return this;
}
