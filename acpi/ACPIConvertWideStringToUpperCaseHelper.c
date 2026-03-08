/*
 * XREFs of ACPIConvertWideStringToUpperCaseHelper @ 0x1C004399C
 * Callers:
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C830 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIConvertWideStringToUpperCaseHelper(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdx
  int v5; // ecx
  __int64 result; // rax

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 >= 2 )
    {
      v4 = a2 >> 1;
      if ( v4 )
      {
        do
        {
          v5 = *(unsigned __int16 *)(a1 + 2 * v2);
          result = (unsigned int)(v5 - 97);
          if ( (unsigned __int16)(v5 - 97) <= 0x19u )
            *(_WORD *)(a1 + 2 * v2) = v5 - 32;
          ++v2;
        }
        while ( v2 < v4 );
      }
    }
  }
  return result;
}
