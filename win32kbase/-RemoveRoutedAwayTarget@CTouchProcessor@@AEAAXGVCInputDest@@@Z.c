/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0201850
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F5428 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007A190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01F2E5C (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget **v6; // rdi
  struct tagCPointerRoutedAwayTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
    for ( i = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 35);
          i != v6;
          i = (struct tagCPointerRoutedAwayTarget **)*i )
    {
      if ( CInputDest::operator==((int *)i + 4, (__int64)a3) )
      {
        CTouchProcessor::FreeRoutedAwayTarget(a1, (struct tagCPointerRoutedAwayTarget ***)i);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
