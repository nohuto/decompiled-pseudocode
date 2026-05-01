/*
 * XREFs of ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1801CCC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1801CCAE8 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

CIAMSpecialWindowBase *__fastcall CIAMSpecialWindowBase::`scalar deleting destructor'(
        CIAMSpecialWindowBase *this,
        char a2)
{
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
