/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01A910C
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018EC10 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  CTouchProcessor *v8[20]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-30h]
  _BYTE v11[112]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v12; // [rsp+148h] [rbp+48h]
  _QWORD v13[26]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v14[112]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v15; // [rsp+290h] [rbp+190h]
  __int64 v16; // [rsp+298h] [rbp+198h]

  memset(v8, 0, sizeof(v8));
  v10 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  v16 = 0LL;
  v8[0] = gpTouchProcessor;
  v8[17] = (CTouchProcessor *)&v9;
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
  CTouchProcessor::ForwardPointerInputFrameToManipulationThread(v8);
  CInputDest::SetEmpty((CInputDest *)v14);
  CInputDest::SetEmpty((CInputDest *)v11);
}
