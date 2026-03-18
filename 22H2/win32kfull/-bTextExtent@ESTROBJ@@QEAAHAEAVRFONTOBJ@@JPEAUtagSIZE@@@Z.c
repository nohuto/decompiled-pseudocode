/*
 * XREFs of ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C007D77C
 * Callers:
 *     ?GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007D494 (-GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00838A8 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  int v11; // eax
  LONG cx; // edx
  LONG v13; // [rsp+40h] [rbp+20h] BYREF

  v13 = 0;
  bFToL(**((_QWORD **)this + 7), &v13, 0LL);
  a4->cx = v13;
  v8 = **((_QWORD **)this + 7);
  v13 = 0;
  bFToL(v8, &v13, 0LL);
  a4->cy = v13;
  if ( *((_DWORD *)Gre::Base::Globals(v9) + 39) )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 208LL) == 1 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)a2 + 716LL);
      if ( (v11 & 0x10) == 0 && (v11 & 4) == 0 && (v11 & 0x200000) != 0 && (a3 == 900 || a3 == 2700) )
      {
        cx = a4->cx;
        a4->cx = a4->cy;
        a4->cy = cx;
      }
    }
  }
  return 1LL;
}
