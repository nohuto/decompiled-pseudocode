/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C015D024
 * Callers:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00838A8 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C5E04 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 * Callees:
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // r8d

  v5 = 0;
  if ( (unsigned int)bFToL(*(float *)this, (int *)a2, 6u) && (unsigned int)bFToL(*((float *)this + 1), &a2->y, v4) )
    return (unsigned int)(v6 - 5);
  return v5;
}
