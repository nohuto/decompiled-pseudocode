/*
 * XREFs of ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F1068
 * Callers:
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00F0FE4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpUnhook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)a1;
  *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a1 + 25) = *((_DWORD *)a1 + 23);
  v1[349] = *((_QWORD *)a1 + 149);
  v1[347] = *((_QWORD *)a1 + 150);
  v1[348] = *((_QWORD *)a1 + 151);
  v1[351] = *((_QWORD *)a1 + 153);
  v1[352] = *((_QWORD *)a1 + 154);
  v1[353] = *((_QWORD *)a1 + 155);
  v1[356] = *((_QWORD *)a1 + 156);
  v1[364] = *((_QWORD *)a1 + 157);
  v1[407] = *((_QWORD *)a1 + 158);
  v1[404] = *((_QWORD *)a1 + 159);
  v1[403] = *((_QWORD *)a1 + 160);
  v1[401] = *((_QWORD *)a1 + 161);
  v1[402] = *((_QWORD *)a1 + 163);
  v1[373] = *((_QWORD *)a1 + 162);
  v1[423] = *((_QWORD *)a1 + 164);
  *((_DWORD *)a1 + 270) = 0;
}
