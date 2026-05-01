/*
 * XREFs of ??_GTitleBarController@@EEAAPEAXI@Z @ 0x1802F6580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TitleBarController@@EEAA@XZ @ 0x1802F58D0 (--1TitleBarController@@EEAA@XZ.c)
 */

TitleBarController *__fastcall TitleBarController::`scalar deleting destructor'(TitleBarController *this, char a2)
{
  TitleBarController::~TitleBarController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
