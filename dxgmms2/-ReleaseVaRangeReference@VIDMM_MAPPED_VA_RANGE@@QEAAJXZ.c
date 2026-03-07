__int64 __fastcall VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(VIDMM_MAPPED_VA_RANGE *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 32);
  if ( !v2 && this )
    VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(this, a2);
  return v2;
}
