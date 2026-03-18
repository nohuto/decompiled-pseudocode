/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0151CF0
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0150B6C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0018F90 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C001AA60 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetricsPlus(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  int v4; // ebp
  _DWORD *v5; // rcx
  __int64 v6; // rax
  struct GPRUN *Run; // rax
  __int64 v8; // rdi
  struct _GLYPHDATA *result; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  struct _GLYPHDATA **v12; // rdx

  v4 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v5 )
    return RFONTOBJ::pgdDefault(this, a2);
  v6 = (unsigned int)(v4 - v5[4]);
  if ( (unsigned int)v6 < v5[5] )
  {
    v10 = 8 * v6;
    v11 = v5 + 6;
  }
  else
  {
    Run = RFONTOBJ::gprunFindRun(this, v4);
    v8 = (unsigned int)(v4 - *(_DWORD *)Run);
    if ( (unsigned int)v8 >= *((_DWORD *)Run + 1) )
      return 0LL;
    v10 = 8 * v8;
    v11 = (_QWORD *)((char *)Run + 8);
  }
  v12 = (struct _GLYPHDATA **)(v10 + *v11);
  result = *v12;
  if ( !*v12 )
  {
    if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(this, v12) )
      return *(struct _GLYPHDATA **)(v10 + *v11);
    return 0LL;
  }
  return result;
}
