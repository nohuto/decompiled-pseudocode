/*
 * XREFs of ??_EPenDeviceManager@@UEAAPEAXI@Z @ 0x18012EF10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenDeviceManager@@UEAA@XZ @ 0x18012EDD0 (--1PenDeviceManager@@UEAA@XZ.c)
 */

PenDeviceManager *__fastcall PenDeviceManager::`vector deleting destructor'(PenDeviceManager *this, char a2)
{
  PenDeviceManager::~PenDeviceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
