/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x140676900
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x140676840 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEFD0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(this);
  return this;
}
