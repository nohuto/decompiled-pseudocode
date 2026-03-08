/*
 * XREFs of GreRectInRegion @ 0x1C00A65A0
 * Callers:
 *     NtGdiRectInRegion @ 0x1C0185920 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C0197930 (EngRectInRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C00A6620 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, struct _RECTL *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1, 0);
  v4 = v6[0];
  if ( a2 && v6[0] )
    LOBYTE(v3) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v6, a2) == 2;
  if ( !v7 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v6);
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  return v3;
}
