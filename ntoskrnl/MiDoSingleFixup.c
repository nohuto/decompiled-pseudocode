/*
 * XREFs of MiDoSingleFixup @ 0x140A45404
 * Callers:
 *     MiApplyRawFixups @ 0x140A45280 (MiApplyRawFixups.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDoSingleFixup(_DWORD *a1, __int16 a2, __int64 a3)
{
  if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( ((unsigned __int16)a1 & 0xFFFu) <= 0xFFC )
        *a1 += a3;
    }
    else
    {
      if ( a2 != 10 )
        return 0LL;
      if ( ((unsigned __int16)a1 & 0xFFFu) <= 0xFF8 )
        *(_QWORD *)a1 += a3;
    }
  }
  return 1LL;
}
