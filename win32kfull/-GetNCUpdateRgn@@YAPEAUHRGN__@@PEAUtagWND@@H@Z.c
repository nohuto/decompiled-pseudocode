/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00FE114
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00FDB80 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     CalcWindowRgn @ 0x1C00FE594 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C00FE604 (DecPaintCount.c)
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
    CalcWindowRgn(a1, ghrgnInv2, 1LL);
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
        SetOrClrWF(0, (__int64 *)a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount(a1);
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
