/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C006EC64
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006F340 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
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
