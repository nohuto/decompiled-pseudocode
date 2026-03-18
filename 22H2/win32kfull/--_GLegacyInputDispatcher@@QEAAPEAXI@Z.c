/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C003C7A8
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1C0069C00 (xxxDesktopThread.c)
 * Callees:
 *     ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C003C7DC (--1LegacyInputDispatcher@@QEAA@XZ.c)
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher::~LegacyInputDispatcher(this);
  if ( this )
    Win32FreePool(this);
  return this;
}
