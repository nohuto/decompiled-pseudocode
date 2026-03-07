__int64 __fastcall IommuFlushDomain(__int64 a1)
{
  char v2; // dl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  v2 = *(_BYTE *)(a1 + 52);
  v3 = 0LL;
  if ( !v2 )
    return 3221225659LL;
  LODWORD(v3) = *(_DWORD *)(a1 + 48);
  BYTE4(v3) = v2;
  return ((__int64 (__fastcall *)(__int64 *))qword_140C62320)(&v3);
}
