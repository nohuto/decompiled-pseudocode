/*
 * XREFs of ?DxgkEngAccumD3DPresentBoundsApiExt@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01499C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  int v4; // eax

  if ( qword_1C0256140 )
    v4 = qword_1C0256140();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0256148 )
      qword_1C0256148(a1, a2);
  }
}
