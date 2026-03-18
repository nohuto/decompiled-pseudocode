/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x1801D2780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall HANDLE_TABLE::`scalar deleting destructor'(void **this, char a2)
{
  *this = &HANDLE_TABLE::`vftable';
  operator delete(this[3]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
