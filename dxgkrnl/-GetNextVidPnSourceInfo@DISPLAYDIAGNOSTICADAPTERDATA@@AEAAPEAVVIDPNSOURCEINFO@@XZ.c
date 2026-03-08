/*
 * XREFs of ?GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ @ 0x1C0025E64
 * Callers:
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1CB4 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDPNSOURCEINFO *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)this + 240);
  if ( (unsigned int)v1 >= 4 )
    return 0LL;
  else
    return (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 224 * v1 + 64);
}
