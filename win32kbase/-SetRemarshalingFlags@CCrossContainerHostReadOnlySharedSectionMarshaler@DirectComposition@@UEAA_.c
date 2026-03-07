char __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetRemarshalingFlags(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  char v1; // bl
  bool v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(this, &v4);
  if ( v4 || *((_QWORD *)this + 7) )
    return 1;
  return v1;
}
