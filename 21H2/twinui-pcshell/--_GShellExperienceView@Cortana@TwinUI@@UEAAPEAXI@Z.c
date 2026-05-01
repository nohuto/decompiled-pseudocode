/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x180227060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180226D78 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 */

TwinUI::Cortana::ShellExperienceView *__fastcall TwinUI::Cortana::ShellExperienceView::`scalar deleting destructor'(
        TwinUI::Cortana::ShellExperienceView *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
