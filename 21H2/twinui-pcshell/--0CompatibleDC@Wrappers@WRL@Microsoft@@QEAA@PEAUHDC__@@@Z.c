/*
 * XREFs of ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1804EA988
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1804EB0C0 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItem @ 0x1804EB6E0 (s_OnDrawItem.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::Wrappers::CompatibleDC *__fastcall Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
        Microsoft::WRL::Wrappers::CompatibleDC *this,
        HDC a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  *((_QWORD *)this + 1) = CreateCompatibleDC(a2);
  return this;
}
