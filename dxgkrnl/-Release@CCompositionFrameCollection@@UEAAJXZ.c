__int64 __fastcall CCompositionFrameCollection::Release(CCompositionFrameCollection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    CCompositionFrameCollection::`scalar deleting destructor'(this, a2);
  return v2;
}
