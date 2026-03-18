/*
 * XREFs of ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01513E8
 * Callers:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00AB558 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D08FC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C015183C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     EditionQueryInertiaWorker @ 0x1C01F7790 (EditionQueryInertiaWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x1C01514C8 (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 *     ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01516E2 (-DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z.c)
 *     BuildVertexList @ 0x1C0151A14 (BuildVertexList.c)
 */

char __fastcall DCEHitTestWindow(
        const struct tagRECT *a1,
        const struct _D3DMATRIX *a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  char v6; // di
  float x; // xmm6_4
  float y; // xmm7_4
  int v10; // ebx
  const struct _D3DVERTEX *v11; // rcx
  _OWORD v13[12]; // [rsp+20h] [rbp-118h] BYREF

  v6 = 0;
  x = (float)a3->x;
  y = (float)a3->y;
  BuildVertexList(v13, a1, a2);
  v10 = 0;
  while ( !(unsigned int)DCEPointInTriangle((struct _D3DVERTEX *)&v13[2 * (unsigned int)(3 * v10)], x, y) )
  {
    if ( (unsigned int)++v10 >= 2 )
      return v6;
  }
  return DCEInverseTransform(a1, v11, a4, a3);
}
