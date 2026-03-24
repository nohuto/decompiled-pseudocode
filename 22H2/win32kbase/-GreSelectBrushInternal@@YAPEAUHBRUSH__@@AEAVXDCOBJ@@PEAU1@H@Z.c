/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00C8020
 * Callers:
 *     GreSelectBrush @ 0x1C013C0F0 (GreSelectBrush.c)
 * Callees:
 *     GreDCSelectBrush @ 0x1C002BA50 (GreDCSelectBrush.c)
 *     HmgPentryFromPobj @ 0x1C002FA40 (HmgPentryFromPobj.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_DWORD **)a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
