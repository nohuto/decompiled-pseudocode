/*
 * XREFs of ??$?4U?$default_delete@$$BY0A@D@std@@$0A@@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F34D4
 * Callers:
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1800F346C (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void **__fastcall std::unique_ptr<char [0]>::operator=<std::default_delete<char [0]>,0>(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}
