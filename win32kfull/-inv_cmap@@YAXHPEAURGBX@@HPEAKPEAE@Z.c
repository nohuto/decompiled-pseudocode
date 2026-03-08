/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C02A647C
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C02A5D44 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C02A64DC (-inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z.c)
 */

void __fastcall inv_cmap(__int64 a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v7; // edi
  __int64 v8; // rax
  int v9; // r9d

  v7 = a1;
  v8 = SGDGetSessionState(a1);
  INVCMAP::inv_cmap((INVCMAP *)(*(_QWORD *)(v8 + 32) + 19928LL), v7, a2, v9, a4, a5);
}
