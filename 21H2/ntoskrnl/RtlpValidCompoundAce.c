/*
 * XREFs of RtlpValidCompoundAce @ 0x1409130FC
 * Callers:
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1
      && (unsigned int)v1 >= 0x18
      && *(_WORD *)(a1 + 8) == 1
      && *(_BYTE *)(a1 + 12) == 1 )
    {
      v2 = *(unsigned __int8 *)(a1 + 13);
      if ( (unsigned __int8)v2 <= 0xFu )
      {
        v3 = (unsigned int)(4 * v2 + 8);
        v4 = (unsigned int)v3;
        if ( v1 >= v3 + 24 )
        {
          v5 = 4 * (unsigned int)*(unsigned __int8 *)(a1 + 13) + 8;
          if ( *(_BYTE *)(v5 + a1 + 12) == 1 )
          {
            v6 = *(unsigned __int8 *)(v5 + a1 + 13);
            if ( (unsigned __int8)v6 <= 0xFu && v1 >= v4 + 20 + 4 * v6 )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
