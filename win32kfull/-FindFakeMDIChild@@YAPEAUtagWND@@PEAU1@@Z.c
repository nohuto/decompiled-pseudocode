/*
 * XREFs of ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C02249C4
 * Callers:
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C02249C4 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0224A84 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C02249C4 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall FindFakeMDIChild(struct tagWND *a1)
{
  char v1; // dl
  struct tagWND *result; // rax
  struct tagWND *i; // rbx

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v1 & 0x10) != 0 )
  {
    if ( (v1 & 0x40) != 0 && ((v1 & 1) != 0 || *((_QWORD *)a1 + 20)) )
      return a1;
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      result = FindFakeMDIChild(i);
      if ( result )
        return result;
    }
  }
  return 0LL;
}
