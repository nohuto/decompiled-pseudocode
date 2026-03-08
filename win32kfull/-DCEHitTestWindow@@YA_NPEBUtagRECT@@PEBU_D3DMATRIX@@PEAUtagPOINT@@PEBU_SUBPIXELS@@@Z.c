/*
 * XREFs of ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01446E8
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2E6C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C0144B3C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     EditionQueryInertiaWorker @ 0x1C01F8960 (EditionQueryInertiaWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x1C01447C8 (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 *     ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01449E2 (-DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z.c)
 *     BuildVertexList @ 0x1C0144D14 (BuildVertexList.c)
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
