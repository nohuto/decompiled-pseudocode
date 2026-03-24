/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02100EC
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F704 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C4C0 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020E558 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023ED18 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  int v7; // r8d
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-20h] BYREF

  v17 = 0LL;
  if ( (unsigned int)xxxGetSizeRectFromShell(a1, a2, a3, &v17.left) )
    goto LABEL_27;
  v17 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v16, a2, *(const struct tagWND **)(a1 + 16));
  if ( a3 == 1 )
  {
    v17.right = v17.left + (v17.right - v17.left) / 2;
  }
  else if ( a3 == 2 )
  {
    v17.left = v17.right - (v17.right - v17.left) / 2;
  }
  ExtendRectByWindowMargin(*(const struct tagWND **)(a1 + 16), &v17, &v17);
  if ( a3 && (v6 = a3 - 1) != 0 )
  {
    if ( v6 != 1 )
      goto LABEL_27;
    v7 = *(_DWORD *)(a1 + 112);
    v8 = v7;
    v9 = *(_DWORD *)(a1 + 104);
    if ( v7 >= v17.right - v17.left )
      v8 = v17.right - v17.left;
    if ( v9 <= v8 )
    {
      v9 = v17.right - v17.left;
      if ( v7 < v17.right - v17.left )
        v9 = *(_DWORD *)(a1 + 112);
    }
    v17.left = v17.right - v9;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 112);
    v11 = v10;
    v12 = *(_DWORD *)(a1 + 104);
    if ( v10 >= v17.right - v17.left )
      v11 = v17.right - v17.left;
    if ( v12 <= v11 )
    {
      v12 = v17.right - v17.left;
      if ( v10 < v17.right - v17.left )
        v12 = *(_DWORD *)(a1 + 112);
    }
    v17.right = v12 + v17.left;
  }
  v13 = *(_DWORD *)(a1 + 116);
  v14 = v13;
  v15 = *(_DWORD *)(a1 + 108);
  if ( v13 >= v17.bottom - v17.top )
    v14 = v17.bottom - v17.top;
  if ( v15 <= v14 )
  {
    v15 = v17.bottom - v17.top;
    if ( v13 < v17.bottom - v17.top )
      v15 = *(_DWORD *)(a1 + 116);
  }
  v17.bottom = v15 + v17.top;
LABEL_27:
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(struct tagRECT *)(a1 + 72) = v17;
  else
    *(struct tagRECT *)(a1 + 40) = v17;
}
