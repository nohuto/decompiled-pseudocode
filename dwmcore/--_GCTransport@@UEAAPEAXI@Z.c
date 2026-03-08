/*
 * XREFs of ??_GCTransport@@UEAAPEAXI@Z @ 0x1801CE4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CTransport *__fastcall CTransport::`scalar deleting destructor'(CTransport *this, char a2)
{
  *(_QWORD *)this = &CTransport::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
