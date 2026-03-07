__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, a1) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(v2 + 445) )
    return 1LL;
  return result;
}
