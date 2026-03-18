/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01CF3B4
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01C6438 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(CTouchProcessor *a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget ****v6; // rax
  struct tagCPointerRoutedAwayTarget ***v7; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v16[8]; // [rsp+20h] [rbp-49h] BYREF

  memset(v16, 0, 120);
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget ****)((char *)NodeById + 280);
    v7 = *v6;
    if ( *v6 != (struct tagCPointerRoutedAwayTarget ***)v6 )
    {
      CInputDest::operator=((__int64)v16, (__int64)(v7 + 2));
      CTouchProcessor::FreeRoutedAwayTarget((struct _KTHREAD **)a1, v7, v8);
    }
  }
  v9 = v16[1];
  *(_OWORD *)a2 = v16[0];
  *(_BYTE *)(a2 + 112) = 0;
  v10 = v16[2];
  *(_OWORD *)(a2 + 16) = v9;
  v11 = v16[3];
  *(_OWORD *)(a2 + 32) = v10;
  v12 = v16[4];
  *(_OWORD *)(a2 + 48) = v11;
  v13 = v16[5];
  *(_OWORD *)(a2 + 64) = v12;
  v14 = v16[6];
  *(_OWORD *)(a2 + 80) = v13;
  *(_OWORD *)(a2 + 96) = v14;
  memset(v16, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v16);
  return a2;
}
