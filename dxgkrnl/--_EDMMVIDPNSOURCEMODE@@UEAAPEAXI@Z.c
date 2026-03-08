/*
 * XREFs of ??_EDMMVIDPNSOURCEMODE@@UEAAPEAXI@Z @ 0x1C0007B90
 * Callers:
 *     ??_EDMMVIDPNSOURCEMODE@@WCA@EAAPEAXI@Z @ 0x1C0027C40 (--_EDMMVIDPNSOURCEMODE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODE@@WDA@EAAPEAXI@Z @ 0x1C0027C50 (--_EDMMVIDPNSOURCEMODE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODE@@WEA@EAAPEAXI@Z @ 0x1C0027C60 (--_EDMMVIDPNSOURCEMODE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODE::`vector deleting destructor'(DMMVIDPNSOURCEMODE *this, char a2)
{
  *((_QWORD *)this + 8) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
