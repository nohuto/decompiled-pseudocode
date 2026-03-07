__int64 __fastcall ViFaultsIsAppTarget(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // edi

  v1 = (const void **)ViFaultApplicationsList;
  v3 = 0;
  while ( v1 != (const void **)&ViFaultApplicationsList )
  {
    if ( VfUtilEqualUnicodeString(v1 + 2, a1) )
      return 1;
    v1 = (const void **)*v1;
  }
  return v3;
}
