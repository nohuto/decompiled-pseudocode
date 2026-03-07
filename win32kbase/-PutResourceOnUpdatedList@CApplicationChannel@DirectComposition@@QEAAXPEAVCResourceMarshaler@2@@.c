void __fastcall DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // eax
  struct DirectComposition::CResourceMarshaler *v3; // r9
  DirectComposition::CApplicationChannel *v4; // r10
  unsigned __int8 IsDerivedResourceType; // al

  v2 = *((_DWORD *)a2 + 4);
  v3 = a2;
  v4 = this;
  if ( (v2 & 2) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      IsDerivedResourceType = DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                *((unsigned int *)a2 + 9),
                                170LL);
      *((_QWORD *)v3 + 1) = *((_QWORD *)v4 + IsDerivedResourceType + 52);
      *((_QWORD *)v4 + IsDerivedResourceType + 52) = v3;
    }
    *((_DWORD *)v3 + 4) |= 2u;
    *((_BYTE *)v4 + 240) |= 1u;
  }
}
