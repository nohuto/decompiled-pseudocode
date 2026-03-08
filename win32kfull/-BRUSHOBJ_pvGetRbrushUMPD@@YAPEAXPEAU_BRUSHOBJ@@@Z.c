/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0267B3C
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02CA8C0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C0124F50 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1)
{
  PVOID *p_pvRbrush; // rbx
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  int RealizedBrush; // eax
  char *v6; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  p_pvRbrush = &a1->pvRbrush;
  result = a1->pvRbrush;
  if ( result )
    return result;
  if ( (unsigned int)bUMPDSecurityGateEx() )
  {
    pvRbrush = a1[3].pvRbrush;
    if ( !pvRbrush || !pvRbrush[6] )
      return 0LL;
  }
  RealizedBrush = bGetRealizedBrush(
                    *(struct BRUSH **)&a1[4].flColorType,
                    (struct EBRUSHOBJ *)a1,
                    *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2760LL));
  v6 = (char *)*p_pvRbrush;
  if ( !RealizedBrush )
  {
    if ( v6 )
    {
      EngFreeUserMem(v6 - 16);
      *p_pvRbrush = 0LL;
    }
    return 0LL;
  }
  if ( !v6 )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)a1,
      (struct RBRUSH *)((char *)*p_pvRbrush - 16),
      *(struct BRUSH **)&a1[4].flColorType,
      0);
  return *p_pvRbrush;
}
