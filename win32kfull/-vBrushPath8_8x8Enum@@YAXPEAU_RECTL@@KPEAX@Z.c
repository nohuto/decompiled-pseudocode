/*
 * XREFs of ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02F8780
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E8530 (-vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 */

void __fastcall vBrushPath8_8x8Enum(struct _RECTL *a1, int a2, char *a3)
{
  *((_QWORD *)a3 + 4) = a1;
  vPatCpyRect8_8x8((struct _PATBLTFRAME *)(a3 + 8), a2);
}
