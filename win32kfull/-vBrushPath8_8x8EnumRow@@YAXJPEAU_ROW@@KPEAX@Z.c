/*
 * XREFs of ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02F87A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E8D5C (-vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 */

void __fastcall vBrushPath8_8x8EnumRow(int a1, struct _ROW *a2, int a3, char *a4)
{
  *((_QWORD *)a4 + 4) = a2;
  vPatCpyRow8_8x8((struct _PATBLTFRAME *)(a4 + 8), a1, a3);
}
