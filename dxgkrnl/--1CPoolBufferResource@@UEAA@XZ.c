void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[8]);
  ObfDereferenceObject(this[9]);
  CFlipResource::~CFlipResource((__int64)this);
}
