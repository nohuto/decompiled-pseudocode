/*
 * XREFs of ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0204338
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 * Callees:
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C02051A8 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     TransformVector @ 0x1C02073DC (TransformVector.c)
 */

void __fastcall ApplyWindowTransform(const struct _D3DMATRIX *a1, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  LONG v4; // ebx

  v4 = 0;
  if ( a2 )
    TransformVector((_DWORD)a1, (_DWORD)a2, (_DWORD)a2 + 4, 0, a4);
  TransformVector((_DWORD)a1, (_DWORD)a3 + 32, (_DWORD)a3 + 36, 0, a4);
  TransformRect(a1, a3, a4);
  TransformRect(a1, a3 + 1, a4);
  TransformVector((_DWORD)a1, (_DWORD)a3 + 184, (_DWORD)a3 + 188, 0, a4 == 0);
  if ( a3[2].bottom > 0 )
  {
    do
    {
      TransformVector((_DWORD)a1, (_DWORD)a3 + 8 * (v4 + 6), (_DWORD)a3 + 8 * (v4 + 6) + 4, 0, a4);
      ++v4;
    }
    while ( v4 < a3[2].bottom );
  }
}
