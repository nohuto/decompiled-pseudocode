/*
 * XREFs of ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C02F56CC
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1C02DB0F4 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1C01519D0 (-vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02F64C0 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C0307990 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumStartLine(XCLIPOBJ *this, int a2)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rdx

  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = a2 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x200000;
  result = DDA_CLIPLINE::bInit(
             (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
             (struct _POINTFIX *)(*((_QWORD *)this + 18) + 4LL),
             *(struct _POINTFIX **)(*((_QWORD *)this + 18) + 16LL));
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (_DWORD)result )
  {
    v4[28] = v4[24];
    *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 100LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 104LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 108LL);
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 112LL),
      (int *)(*((_QWORD *)this + 18) + 116LL));
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 120LL),
      (int *)(*((_QWORD *)this + 18) + 124LL));
    v5 = *((_QWORD *)this + 18);
    if ( (*(_DWORD *)(v5 + 24) & 1) != 0 )
      *(_QWORD *)(v5 + 204) = *(_QWORD *)(v5 + 4);
    v6 = (_DWORD *)*((_QWORD *)this + 18);
    if ( (int)v6[45] > 0 )
    {
      v6[43] = v6[44];
      v7 = *((_QWORD *)this + 18);
      if ( (*(_DWORD *)(v7 + 24) & 4) != 0 )
        *(_DWORD *)(v7 + 172) = 0;
      XCLIPOBJ::vUpdateStyleState(this);
    }
    return 1LL;
  }
  else
  {
    v4[6] |= 0x10000u;
  }
  return result;
}
