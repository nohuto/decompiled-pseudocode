/*
 * XREFs of ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C012C828
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F0D0C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012C7A4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpUnhook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)a1;
  *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a1 + 25) = *((_DWORD *)a1 + 23);
  v1[352] = *((_QWORD *)a1 + 149);
  v1[350] = *((_QWORD *)a1 + 150);
  v1[351] = *((_QWORD *)a1 + 151);
  v1[354] = *((_QWORD *)a1 + 153);
  v1[355] = *((_QWORD *)a1 + 154);
  v1[356] = *((_QWORD *)a1 + 155);
  v1[359] = *((_QWORD *)a1 + 156);
  v1[367] = *((_QWORD *)a1 + 157);
  v1[410] = *((_QWORD *)a1 + 158);
  v1[407] = *((_QWORD *)a1 + 159);
  v1[406] = *((_QWORD *)a1 + 160);
  v1[404] = *((_QWORD *)a1 + 161);
  v1[405] = *((_QWORD *)a1 + 163);
  v1[376] = *((_QWORD *)a1 + 162);
  v1[426] = *((_QWORD *)a1 + 164);
  *((_DWORD *)a1 + 270) = 0;
}
