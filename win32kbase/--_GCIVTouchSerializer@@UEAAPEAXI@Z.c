/*
 * XREFs of ??_GCIVTouchSerializer@@UEAAPEAXI@Z @ 0x1C0219020
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 */

CIVTouchSerializer *__fastcall CIVTouchSerializer::`scalar deleting destructor'(CIVTouchSerializer *this)
{
  *(_QWORD *)this = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer(this);
  return this;
}
