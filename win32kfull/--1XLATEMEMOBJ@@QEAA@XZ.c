/*
 * XREFs of ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1C02DDF40
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02D47D0 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall XLATEMEMOBJ::~XLATEMEMOBJ(Gre::Base **this)
{
  Gre::Base *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    FreeThreadBufferWithTag(v2);
    *this = 0LL;
  }
  EXLATEOBJ::vAltUnlock(this);
}
