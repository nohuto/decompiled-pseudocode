/*
 * XREFs of ClrFTrueVis @ 0x1C00C98CC
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     DecPaintCount @ 0x1C005DF94 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 */

char __fastcall ClrFTrueVis(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 i; // rbx

  v1 = *((_QWORD *)a1 + 5);
  v3 = *(_QWORD *)(v1 + 136);
  if ( v3 || (LOBYTE(v1) = *(_BYTE *)(v1 + 17), (v1 & 0x10) != 0) )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0, a1, 0x110u, 1);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    LOBYTE(v1) = DecPaintCount((__int64)a1);
  }
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    v1 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v1 + 31) & 0x10) != 0 )
      LOBYTE(v1) = ClrFTrueVis(i);
  }
  return v1;
}
