bool __fastcall BiIsLinkedToEfiVariable(__int64 a1, int *a2)
{
  int v4; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)BiGetObjectDescription(a1, &v5) < 0
    || (HIDWORD(v5) & 0xF0000000) != 0x10000000
    || (HIDWORD(v5) & 0xF00000) != 0x100000 )
  {
    return 0;
  }
  if ( (HIDWORD(v5) & 0xFFFFF) != 2 )
    return 1;
  if ( !a2 )
    return 1;
  v4 = *a2;
  if ( *a2 == 285212673 || v4 == 301989890 || v4 == 301989892 )
    return 1;
  return v4 == 369098882;
}
