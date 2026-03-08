/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0093010
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1C0093DC0 (xxxDesktopThread.c)
 * Callees:
 *     ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C0093044 (--1LegacyInputDispatcher@@QEAA@XZ.c)
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher::~LegacyInputDispatcher(this);
  if ( this )
    Win32FreePool(this);
  return this;
}
