bool __fastcall SepCompareClaimAttributes(unsigned int *a1, unsigned int *a2)
{
  char v4; // cl
  char v5; // dl
  char v6; // r8
  char v7; // r9
  char v8; // al
  char v9; // si
  char v10; // bp
  char v11; // r10

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 )
  {
    v6 = 1;
    v8 = *((_QWORD *)a1 + 72) != 0LL;
    v9 = *((_QWORD *)a1 + 73) != 0LL;
    v10 = *a1 != 0;
  }
  if ( a2 )
  {
    v7 = 1;
    v4 = *((_QWORD *)a2 + 72) != 0LL;
    v5 = *((_QWORD *)a2 + 73) != 0LL;
    if ( *a2 )
      v11 = 1;
  }
  return v6 == v7
      && v8 == v4
      && v9 == v5
      && v10 == v11
      && (!v6
       || (!v8
        || (unsigned __int8)AuthzBasepCompareSecurityAttributesInformation(*((_QWORD *)a1 + 72), *((_QWORD *)a2 + 72)))
       && (!v9
        || (unsigned __int8)AuthzBasepCompareSecurityAttributesInformation(*((_QWORD *)a1 + 73), *((_QWORD *)a2 + 73)))
       && (!v10 || (unsigned __int8)SepCompareSidAndAttributeArrays(*((_QWORD *)a1 + 1), *a1, *((_QWORD *)a2 + 1), *a2)));
}
