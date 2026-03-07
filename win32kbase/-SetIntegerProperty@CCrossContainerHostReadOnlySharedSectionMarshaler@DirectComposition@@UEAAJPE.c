__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetIntegerProperty(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 8) != a4 )
    *((_QWORD *)this + 8) = a4;
  return DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(this, a5);
}
