void __fastcall CSwapChainBuffer::~CSwapChainBuffer(void **this)
{
  volatile signed __int32 *v2; // rcx

  FastRegion::CRegion::FreeMemory(this + 13);
  v2 = (volatile signed __int32 *)this[12];
  if ( v2 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
  FastRegion::CRegion::FreeMemory(this + 2);
}
