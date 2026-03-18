/*
 * XREFs of _ALIGN_MEM @ 0x1C006E4F4
 * Callers:
 *     SetupAAHeader @ 0x1C006DC90 (SetupAAHeader.c)
 *     BuildExpandAAInfo @ 0x1C00DA2D0 (BuildExpandAAInfo.c)
 *     BuildBltAAInfo @ 0x1C00EE230 (BuildBltAAInfo.c)
 *     BuildShrinkAAInfo @ 0x1C0262C40 (BuildShrinkAAInfo.c)
 *     BuildTileAAInfo @ 0x1C0263320 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(unsigned int *a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 + 8 < a2 )
  {
    *a1 = -1;
    return 2147942934LL;
  }
  else
  {
    result = 0LL;
    *a1 = (a2 + 8) & 0xFFFFFFF8;
  }
  return result;
}
