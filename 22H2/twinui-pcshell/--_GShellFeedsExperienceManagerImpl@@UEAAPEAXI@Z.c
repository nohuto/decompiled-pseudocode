/*
 * XREFs of ??_GShellFeedsExperienceManagerImpl@@UEAAPEAXI@Z @ 0x1800B1B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x1800B1478 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 */

ShellFeedsExperienceManagerImpl *__fastcall ShellFeedsExperienceManagerImpl::`scalar deleting destructor'(
        ShellFeedsExperienceManagerImpl *this,
        char a2)
{
  ShellFeedsExperienceManagerImpl::~ShellFeedsExperienceManagerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
