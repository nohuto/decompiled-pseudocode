__int64 __fastcall FindMaterialProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !Table )
    return 3221225659LL;
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = 0LL;
  v5 = RtlLookupElementGenericTable(Table, v7);
  if ( v5 )
    v3 = v5[2];
  *a3 = v3;
  return v3 == 0 ? 0xC0000225 : 0;
}
