__int64 __fastcall CRenderDataBuilder::AddRef(CRenderDataBuilder *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 3);
}
