/*
 * XREFs of TransformRectAroundPoint @ 0x1C01BB2C0
 * Callers:
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     ?TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BA574 (-TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformRectAroundPoint(
        _DWORD *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int64 a6)
{
  INT v9; // eax
  int v10; // r9d
  INT v11; // r8d
  INT v12; // edx
  INT result; // eax
  int v14; // ecx
  INT v15; // edi
  INT v16; // eax
  INT v17; // ecx
  INT v18; // eax
  INT v19; // ecx

  if ( a3 )
  {
    v9 = EngMulDiv(a6 - *a1, a3[2] - *a3, a1[2] - *a1);
    v10 = a1[1];
    v11 = a1[3] - v10;
    v12 = a3[3] - a3[1];
    *a4 = a6 - v9;
    result = EngMulDiv(HIDWORD(a6) - v10, v12, v11);
    a4[2] = *a4 + a3[2] - *a3;
    v14 = HIDWORD(a6) - result + a3[3] - a3[1];
    a4[1] = HIDWORD(a6) - result;
  }
  else
  {
    v15 = a2;
    *a4 = a6 - EngMulDiv(a6 - *a1, a5, a2);
    v16 = EngMulDiv(HIDWORD(a6) - a1[1], a5, v15);
    v17 = a1[2] - *a1;
    a4[1] = HIDWORD(a6) - v16;
    v18 = EngMulDiv(v17, a5, v15);
    v19 = a1[3] - a1[1];
    a4[2] = *a4 + v18;
    result = EngMulDiv(v19, a5, v15);
    v14 = result + a4[1];
  }
  a4[3] = v14;
  return result;
}
