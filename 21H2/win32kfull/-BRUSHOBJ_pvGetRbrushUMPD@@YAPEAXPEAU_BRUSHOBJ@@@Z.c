/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C026AE24
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02B0D00 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C000B8AC (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  int RealizedBrush; // eax
  char *v5; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  result = a1->pvRbrush;
  if ( result )
    return result;
  if ( bUMPDSecurityGateEx() )
  {
    pvRbrush = a1[3].pvRbrush;
    if ( !pvRbrush )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg() == NULL\n",
          405LL);
      return 0LL;
    }
    if ( !pvRbrush[6] )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg()->hdev() == NULL\n",
          411LL);
      return 0LL;
    }
  }
  RealizedBrush = bGetRealizedBrush(
                    *(struct BRUSH **)&a1[4].flColorType,
                    (struct EBRUSHOBJ *)a1,
                    *(int (**)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2760LL));
  v5 = (char *)a1->pvRbrush;
  if ( !RealizedBrush )
  {
    if ( v5 )
    {
      EngFreeUserMem(v5 - 16);
      a1->pvRbrush = 0LL;
    }
    return 0LL;
  }
  if ( !v5 )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)a1,
      (struct RBRUSH *)((char *)a1->pvRbrush - 16),
      *(struct BRUSH **)&a1[4].flColorType,
      0);
  return a1->pvRbrush;
}
