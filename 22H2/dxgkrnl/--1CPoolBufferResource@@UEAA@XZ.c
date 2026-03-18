/*
 * XREFs of ??1CPoolBufferResource@@UEAA@XZ @ 0x1C0085730
 * Callers:
 *     ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C0085850 (--_ECPoolBufferResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C0085680 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[8]);
  ObfDereferenceObject(this[9]);
  CFlipResource::~CFlipResource((__int64)this);
}
