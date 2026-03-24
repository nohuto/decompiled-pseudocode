/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0197BF0
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A67C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E374 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C018F7E4 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(struct _KTHREAD **a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget ****v6; // rax
  struct tagCPointerRoutedAwayTarget ***v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v15[8]; // [rsp+20h] [rbp-49h] BYREF

  memset(v15, 0, 120);
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget ****)((char *)NodeById + 264);
    v7 = *v6;
    if ( *v6 != (struct tagCPointerRoutedAwayTarget ***)v6 )
    {
      CInputDest::operator=((__int64)v15, (__int64)(v7 + 2));
      CTouchProcessor::FreeRoutedAwayTarget(a1, v7);
    }
  }
  v8 = v15[1];
  *(_OWORD *)a2 = v15[0];
  *(_BYTE *)(a2 + 112) = 0;
  v9 = v15[2];
  *(_OWORD *)(a2 + 16) = v8;
  v10 = v15[3];
  *(_OWORD *)(a2 + 32) = v9;
  v11 = v15[4];
  *(_OWORD *)(a2 + 48) = v10;
  v12 = v15[5];
  *(_OWORD *)(a2 + 64) = v11;
  v13 = v15[6];
  *(_OWORD *)(a2 + 80) = v12;
  *(_OWORD *)(a2 + 96) = v13;
  memset(v15, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v15);
  return a2;
}
