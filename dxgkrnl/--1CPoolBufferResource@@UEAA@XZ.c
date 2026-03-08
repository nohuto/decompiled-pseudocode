/*
 * XREFs of ??1CPoolBufferResource@@UEAA@XZ @ 0x1C0084970
 * Callers:
 *     ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C0084A90 (--_ECPoolBufferResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C00848C0 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[8]);
  ObfDereferenceObject(this[9]);
  CFlipResource::~CFlipResource((__int64)this);
}
