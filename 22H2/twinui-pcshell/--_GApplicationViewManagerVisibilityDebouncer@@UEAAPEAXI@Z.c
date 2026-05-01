/*
 * XREFs of ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x1802005F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x1802003A4 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 */

ApplicationViewManagerVisibilityDebouncer *__fastcall ApplicationViewManagerVisibilityDebouncer::`scalar deleting destructor'(
        ApplicationViewManagerVisibilityDebouncer *this,
        char a2)
{
  ApplicationViewManagerVisibilityDebouncer::~ApplicationViewManagerVisibilityDebouncer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
