/*
 * XREFs of ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1C02F87FC
 * Callers:
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C004B664 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGTARGETENTRY::operator!=(_DWORD *a1, _DWORD *a2)
{
  return a1[6] != a2[6] || a1[7] != a2[7] || a1[8] != a2[8];
}
