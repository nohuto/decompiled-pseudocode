/*
 * XREFs of ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1804EA5F8
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1804EAD30 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItem @ 0x1804EB350 (s_OnDrawItem.c)
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
