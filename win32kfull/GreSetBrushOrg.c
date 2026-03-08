/*
 * XREFs of GreSetBrushOrg @ 0x1C0007754
 * Callers:
 *     xxxPaintRect @ 0x1C0007680 (xxxPaintRect.c)
 *     _DrawIconEx @ 0x1C003B618 (_DrawIconEx.c)
 *     NtGdiSetBrushOrg @ 0x1C0150170 (NtGdiSetBrushOrg.c)
 *     MNEraseBackground @ 0x1C023756C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v7 = v14[0];
  if ( v14[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v14[0] + 124LL);
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 348LL) = a3;
    v8 = (_DWORD *)v14[0];
    v9 = *(_DWORD *)(v14[0] + 40LL);
    *(_DWORD *)(v14[0] + 124LL) = a2;
    v8[32] = a3;
    v10 = v9 & 1;
    if ( v10 )
      v11 = v8[256];
    else
      v11 = v8[254];
    v8[298] = a2 + v11;
    if ( v10 )
      v12 = v8[257];
    else
      v12 = v8[255];
    v8[299] = v12 + a3;
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return 1LL;
  }
  else
  {
    EngSetLastError(6u);
    if ( v14[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v14);
    return 0LL;
  }
}
