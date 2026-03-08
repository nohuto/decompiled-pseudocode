/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1406742B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1406741F0 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(this);
  return this;
}
