/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00C7C90
 * Callers:
 *     GreSelectBrush @ 0x1C013BE20 (GreSelectBrush.c)
 * Callees:
 *     GreDCSelectBrush @ 0x1C002A5E0 (GreDCSelectBrush.c)
 *     HmgPentryFromPobj @ 0x1C002E5D0 (HmgPentryFromPobj.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_DWORD **)a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
