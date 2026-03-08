/*
 * XREFs of ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C0076034
 * Callers:
 *     ??_ECCompositionToken@@W7EAAPEAXI@Z @ 0x1C0027F10 (--_ECCompositionToken@@W7EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 8) == 6;
  *((_QWORD *)this + 1) = &CTokenBase::`vftable';
  if ( !v1 )
    *((_DWORD *)this + 8) = 6;
  return this;
}
