/*
 * XREFs of ClrFTrueVis @ 0x1C008C27C
 * Callers:
 *     ClrFTrueVis @ 0x1C008C27C (ClrFTrueVis.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 * Callees:
 *     ClrFTrueVis @ 0x1C008C27C (ClrFTrueVis.c)
 *     DecPaintCount @ 0x1C008C320 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  result = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(result + 136);
  if ( v3 || (*(_BYTE *)(result + 17) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL) = 0LL;
    result = DecPaintCount(a1, v5, v6, v7);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    result = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}
