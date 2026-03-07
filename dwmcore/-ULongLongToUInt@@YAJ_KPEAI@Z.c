__int64 __fastcall ULongLongToUInt(unsigned __int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d

  v2 = -1;
  if ( a1 <= 0xFFFFFFFF )
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFFFFFF ? 0x80070216 : 0;
}
