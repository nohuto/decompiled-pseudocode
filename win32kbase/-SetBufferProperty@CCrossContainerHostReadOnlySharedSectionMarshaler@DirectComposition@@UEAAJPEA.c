__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetBufferProperty(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *v8; // r10
  bool *v9; // r11

  *a6 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    v7 = 88LL;
  }
  else
  {
    v7 = 72LL;
  }
  result = DirectComposition::SetGuidProperty(a4, a5, (char *)this + v7);
  if ( (int)result >= 0 )
    return DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(v8, v9);
  return result;
}
