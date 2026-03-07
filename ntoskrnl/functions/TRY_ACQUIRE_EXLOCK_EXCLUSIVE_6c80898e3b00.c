__int64 __fastcall TRY_ACQUIRE_EXLOCK_EXCLUSIVE(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // [rsp+10h] [rbp+10h]
  signed __int32 v4; // [rsp+18h] [rbp+18h]
  signed __int32 v5; // [rsp+20h] [rbp+20h]

  v3 = 0x80000000;
  v4 = _InterlockedCompareExchange(a1, 0x80000000, 0);
  if ( !v4 )
    return 1LL;
  while ( !v4 )
  {
    v2 = v3 & 0xBFFFFFFF;
LABEL_8:
    v3 = v2;
    v5 = v4;
    v4 = _InterlockedCompareExchange(a1, v2, v4);
    if ( v4 == v5 )
      return 1LL;
  }
  if ( v4 == 0x40000000 )
  {
    v2 = v3 | 0x40000000;
    goto LABEL_8;
  }
  return 0LL;
}
