__int64 __fastcall DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
        PRTL_GENERIC_TABLE Table,
        __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = 0LL;
  v3 = 0LL;
  v4 = RtlLookupElementGenericTable(Table, v6);
  if ( v4 )
  {
    v3 = v4[1];
    RtlDeleteElementGenericTable(Table, v4);
  }
  return v3;
}
