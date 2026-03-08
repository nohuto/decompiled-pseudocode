/*
 * XREFs of PnpFreeUnicodeStringList @ 0x14039C134
 * Callers:
 *     PiInitReleaseCachedGroupInformation @ 0x1408429D8 (PiInitReleaseCachedGroupInformation.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140B549A4 (PnpRegMultiSzToUnicodeStrings.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeUnicodeStringList(PVOID *P, unsigned int a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1;
      v4 = a2;
      do
      {
        if ( *v3 )
          ExFreePoolWithTag(*v3, 0);
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
