/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C0031DCC
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     RIMDeviceIoControl @ 0x1C00336C0 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(PVOID *this)
{
  char *v2; // rcx

  v2 = (char *)*this;
  if ( v2 )
  {
    RIMLockExclusive(v2 + 104);
    ObfDereferenceObject(*this);
  }
}
