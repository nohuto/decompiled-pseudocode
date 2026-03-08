/*
 * XREFs of PspHashKeyValue @ 0x140745510
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140745414 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409AB0BC (PspRemoveQuotaBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspHashKeyValue(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx

  result = 0LL;
  if ( a1 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ++v5;
        LOBYTE(result) = *(_BYTE *)(v6 + a1) + result;
        v6 = v5;
      }
      while ( v5 < a2 );
    }
    return result & 0x1F;
  }
  return result;
}
