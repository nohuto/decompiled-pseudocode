/*
 * XREFs of ??$?4U?$default_delete@UICheckMPOCache@@@std@@$0A@@?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028C01C
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::unique_ptr<ICheckMPOCache>::operator=<std::default_delete<ICheckMPOCache>,0>(
        void **a1,
        void **a2)
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
