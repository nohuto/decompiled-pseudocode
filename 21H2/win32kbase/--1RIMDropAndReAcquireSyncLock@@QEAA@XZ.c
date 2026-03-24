/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00B6D20
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00488D0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     RIMDeviceIoControl @ 0x1C0051E70 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 */

void __fastcall RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(PVOID *this)
{
  PVOID v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    RIMLockExclusive((__int64)v2 + 104);
    ObfDereferenceObject(*this);
  }
}
