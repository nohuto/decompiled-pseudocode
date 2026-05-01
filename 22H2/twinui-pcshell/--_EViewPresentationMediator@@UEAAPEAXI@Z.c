/*
 * XREFs of ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x180351BF4
 * Callers:
 *     ??_EViewPresentationMediator@@WCI@EAAPEAXI@Z @ 0x180169B20 (--_EViewPresentationMediator@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewPresentationMediator@@UEAA@XZ @ 0x180351A78 (--1ViewPresentationMediator@@UEAA@XZ.c)
 */

ViewPresentationMediator *__fastcall ViewPresentationMediator::`vector deleting destructor'(
        ViewPresentationMediator *this,
        char a2)
{
  ViewPresentationMediator::~ViewPresentationMediator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
