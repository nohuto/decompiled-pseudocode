/*
 * XREFs of ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x18000A420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18000A45C (--1CCachedWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CCachedWindowBackgroundTreatment *__fastcall CCachedWindowBackgroundTreatment::`scalar deleting destructor'(
        CCachedWindowBackgroundTreatment *this,
        char a2)
{
  CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
