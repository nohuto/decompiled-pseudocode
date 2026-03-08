/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@AEBVCBackdropVisualImageKey@@@Z @ 0x180031230
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall CWindowNode::AllocateOcclusionInfo(__int64 a1, _QWORD *a2, __int128 *a3)
{
  char *v5; // rax
  __int128 v6; // xmm0

  v5 = (char *)operator new(0x38uLL);
  if ( v5 )
  {
    v6 = *a3;
    *(_QWORD *)v5 = &CWindowOcclusionInfo::`vftable';
    *(_OWORD *)(v5 + 8) = v6;
  }
  *a2 = v5;
  return a2;
}
