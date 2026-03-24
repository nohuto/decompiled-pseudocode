/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020EB18
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02106AC (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C020A85C (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020AF40 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020C65C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023D860 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  char OverlapCoordinatesForArrangement; // al
  int v16; // eax
  int v17; // ecx
  bool v18; // zf
  struct tagRECT *v20; // [rsp+20h] [rbp-60h]
  struct tagRECT v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-20h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  v9 = *(_QWORD *)(v8 + 328);
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 340) & 0x18) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(v10 + 16) && (unsigned int)(a3 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 280);
        if ( (v11 & 8) != 0 )
        {
          v12 = *(_OWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 280) = v11 | 2;
          *(_OWORD *)a4 = v12;
        }
        else if ( CallShell::xxxArrangementRectangleHandler(
                    *(CallShell **)v10,
                    *(HWND *)(a1 + 308),
                    (struct tagPOINT)&v21,
                    &v23,
                    v20)
               && PtInRect(&v23, *(_QWORD *)(a1 + 308)) )
        {
          v13 = *(_QWORD *)(a2 + 40);
          v22 = 0LL;
          if ( (unsigned int)IntersectRect(&v22, &v21.left, (int *)(v13 + 44)) )
          {
            v14 = v22 - *(_QWORD *)&v21.left;
            if ( (_QWORD)v22 == *(_QWORD *)&v21.left )
              v14 = *((_QWORD *)&v22 + 1) - *(_QWORD *)&v21.right;
            if ( !v14 )
            {
              OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                                   (const struct tagRECT *const)(v13 + 44),
                                                   &v21,
                                                   1);
              v16 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
              if ( a3 == 1 )
              {
                v17 = 0;
                v18 = v16 == 55553;
              }
              else
              {
                if ( a3 != 2 )
                  return (*(_DWORD *)(a1 + 280) >> 1) & 1;
                v17 = 0;
                v18 = v16 == 55554;
              }
              LOBYTE(v17) = v18;
              if ( v17 )
              {
                TransformShellProvidedRectangles(a1, a2, a3, &v21, (__int64)&v23, *(_QWORD *)(v8 + 328), a4, a1 + 264);
                *(_DWORD *)(a1 + 280) |= 2u;
              }
            }
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 280) >> 1) & 1;
}
