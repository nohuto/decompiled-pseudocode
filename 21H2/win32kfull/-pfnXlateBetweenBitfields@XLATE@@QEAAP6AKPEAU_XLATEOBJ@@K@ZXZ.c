/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C013C7F4
 * Callers:
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00DEFC0 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C013A4C0 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C013C700 (-vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C028FC90 (-vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C028FE60 (-vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C028FFA0 (-vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02901A0 (-vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0290290 (-vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0290470 (-vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02905A0 (-vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02906E0 (-vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C93C0 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9BF0 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9EE0 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA390 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall XLATE::pfnXlateBetweenBitfields(XLATE *this))(struct _XLATEOBJ *a1, unsigned int a2)
{
  unsigned int (__fastcall *v1)(struct _XLATEOBJ *, unsigned int); // rdx
  int v2; // r8d
  int v3; // ecx

  v1 = iXlateBitfieldsToBitfields;
  v2 = *(_DWORD *)(*((_QWORD *)this + 6) + 24LL);
  v3 = *(_DWORD *)(*((_QWORD *)this + 5) + 24LL);
  if ( (v2 & 8) != 0 )
  {
    if ( (v3 & 0x400000) != 0 )
    {
      return iXlate565ToBGR;
    }
    else if ( (v3 & 0x200000) != 0 )
    {
      return iXlate555ToBGR;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
    if ( (v2 & 0x400000) != 0 )
    {
      return iXlateBGRTo565;
    }
    else if ( (v2 & 0x200000) != 0 )
    {
      return iXlateBGRTo555;
    }
  }
  return (__int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int))v1;
}
