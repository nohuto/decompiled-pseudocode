/*
 * XREFs of ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x1803807C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x18037FC5C (--1XamlAltTabViewHost@@UEAA@XZ.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::`vector deleting destructor'(XamlAltTabViewHost *this, char a2)
{
  XamlAltTabViewHost::~XamlAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
