__int64 __fastcall ObQueryNameInfo(__int64 a1)
{
  char v1; // al
  __int64 v2; // rcx

  v1 = *(_BYTE *)(a1 - 22);
  v2 = a1 - 48;
  if ( (v1 & 2) != 0 )
    return v2 - ObpInfoMaskToOffset[v1 & 3];
  else
    return 0LL;
}
