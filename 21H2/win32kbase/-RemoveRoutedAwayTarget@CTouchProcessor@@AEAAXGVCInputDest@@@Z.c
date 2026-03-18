/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D3B64
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C8770 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01C6438 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // r8
  struct tagCPointerRoutedAwayTarget **v7; // rdi
  struct tagCPointerRoutedAwayTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v7 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
    for ( i = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 35);
          i != v7;
          i = (struct tagCPointerRoutedAwayTarget **)*i )
    {
      if ( CInputDest::operator==((unsigned int *)i + 4, (__int64)a3, v6) )
      {
        CTouchProcessor::FreeRoutedAwayTarget((struct _KTHREAD **)a1, (struct tagCPointerRoutedAwayTarget ***)i, v6);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
