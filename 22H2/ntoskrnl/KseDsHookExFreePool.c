/*
 * XREFs of KseDsHookExFreePool @ 0x1405277A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1405284DC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C04DF8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
