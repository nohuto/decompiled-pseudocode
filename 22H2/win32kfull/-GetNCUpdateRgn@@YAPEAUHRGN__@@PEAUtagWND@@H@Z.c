/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00CE6B0
 * Callers:
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     DecPaintCount @ 0x1C008C320 (DecPaintCount.c)
 *     CalcWindowRgn @ 0x1C00CCAA4 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned __int64 EmptyRgnPublic; // rdi
  int v8; // eax

  v4 = a2;
  EmptyRgnPublic = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( EmptyRgnPublic <= 1 )
    return EmptyRgnPublic;
  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2, a3, a4);
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(EmptyRgnPublic);
  }
  EmptyRgnPublic = 1LL;
LABEL_5:
  if ( v4 )
  {
    CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    v8 = GreCombineRgn(
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           ghrgnInv2,
           1LL);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
    }
    else
    {
      GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
    }
  }
  return EmptyRgnPublic;
}
