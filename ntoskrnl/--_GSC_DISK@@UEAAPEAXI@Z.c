/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x140672FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *this, char a2)
{
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(this);
  return this;
}
