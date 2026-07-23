/*
 * XREFs of RtlpValidAccessFilterAce @ 0x140912EFC
 * Callers:
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  unsigned __int16 v4; // r9
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2 && (unsigned int)v2 >= 0x10 && *(_BYTE *)(a1 + 8) == 1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 9);
      if ( (unsigned __int8)v3 <= 0xFu )
      {
        v4 = 4 * (v3 + 2);
        if ( (int)(v2 - v4 - 8) >= 6 && *(_DWORD *)(v4 + a1 + 8) == 2020897377 )
          return 1;
      }
    }
  }
  return result;
}
