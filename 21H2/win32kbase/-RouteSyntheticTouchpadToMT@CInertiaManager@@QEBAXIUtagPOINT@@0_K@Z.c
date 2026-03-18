/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01E1778
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C5A90 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  _QWORD v8[34]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+130h] [rbp+30h] BYREF
  __int64 v10; // [rsp+140h] [rbp+40h]
  _BYTE v11[112]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v12; // [rsp+1B8h] [rbp+B8h]
  _QWORD v13[26]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v14[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v15; // [rsp+300h] [rbp+200h]
  __int64 v16; // [rsp+308h] [rbp+208h]

  memset(v8, 0, 0x108uLL);
  v10 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  v16 = 0LL;
  v8[0] = gpTouchProcessor;
  v8[30] = &v9;
  LODWORD(v8[6]) = 1;
  LODWORD(v13[3]) = 5;
  *(_QWORD *)&v9 = 0x18000000400LL;
  HIDWORD(v13[25]) = a5;
  HIDWORD(v13[4]) = 0x800000;
  v13[9] = a3;
  v13[7] = a3;
  v13[10] = a4;
  v13[8] = a4;
  LODWORD(v13[12]) = a2;
  CTouchProcessor::ForwardInertiaFrameToManipulationThread((const struct CPointerInputFrame *)v8);
  CInputDest::SetEmpty((CInputDest *)v14);
  CInputDest::SetEmpty((CInputDest *)v11);
}
