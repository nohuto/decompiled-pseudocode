/*
 * XREFs of ??_ECSuperWetSource@@UEAAPEAXI@Z @ 0x1801C36A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801C3644 (--1CSuperWetSource@@UEAA@XZ.c)
 */

CSuperWetSource *__fastcall CSuperWetSource::`vector deleting destructor'(CSuperWetSource *this, char a2)
{
  CSuperWetSource::~CSuperWetSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
