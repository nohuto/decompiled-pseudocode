/*
 * XREFs of ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C020619C
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0059464 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C01B54E4 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetCompositionInputWindowUIOwner(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C02965B0 && (int)qword_1C02965B0() >= 0 && qword_1C02965B8 )
    return qword_1C02965B8(a1);
  return v1;
}
