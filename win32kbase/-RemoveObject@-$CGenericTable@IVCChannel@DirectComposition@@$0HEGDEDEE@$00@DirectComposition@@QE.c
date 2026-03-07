__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(
        PRTL_GENERIC_TABLE Table,
        int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  Buffer = a2;
  v7 = 0LL;
  v8 = 0;
  v3 = 0LL;
  v4 = RtlLookupElementGenericTable(Table, &Buffer);
  if ( v4 )
  {
    v3 = v4[1];
    RtlDeleteElementGenericTable(Table, v4);
  }
  return v3;
}
