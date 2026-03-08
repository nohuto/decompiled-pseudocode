/*
 * XREFs of ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C029D740
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011CCCC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall IFIOBJ::pvSimBold(IFIOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rcx
  int v5; // eax

  v1 = *(_QWORD *)this;
  v2 = 0LL;
  v3 = *(int *)(*(_QWORD *)this + 24LL);
  if ( (_DWORD)v3 )
  {
    v4 = (int *)(v1 + v3);
    if ( (*(_BYTE *)(v1 + 52) & 1) != 0 )
      v5 = v4[2];
    else
      v5 = *v4;
    if ( v5 )
      return (char *)v4 + v5;
  }
  return (char *)v2;
}
