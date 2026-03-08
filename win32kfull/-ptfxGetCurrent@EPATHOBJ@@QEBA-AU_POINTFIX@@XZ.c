/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014D962
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     GreAngleArc @ 0x1C02ADE64 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C02AE610 (GrePolyBezierTo.c)
 *     GrePolylineTo @ 0x1C02AEE80 (GrePolylineTo.c)
 *     NtGdiArcInternal @ 0x1C02C8EE0 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

struct _POINTFIX __fastcall EPATHOBJ::ptfxGetCurrent(EPATHOBJ *this, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
    v3 = (_QWORD *)(v2 + 64);
  else
    v3 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 40) + 20LL) - 1) + 3LL));
  *a2 = *v3;
  return (struct _POINTFIX)a2;
}
