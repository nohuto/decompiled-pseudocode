bool __fastcall ExpIsFastResourceOwned(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *a1;
  v2 = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
  return v2;
}
