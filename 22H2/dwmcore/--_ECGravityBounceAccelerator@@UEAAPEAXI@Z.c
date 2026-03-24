/*
 * XREFs of ??_ECGravityBounceAccelerator@@UEAAPEAXI@Z @ 0x1801D7048
 * Callers:
 *     ??_ECGravityBounceAccelerator@@W7EAAPEAXI@Z @ 0x1800F60B0 (--_ECGravityBounceAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::`vector deleting destructor'(
        CGravityBounceAccelerator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
