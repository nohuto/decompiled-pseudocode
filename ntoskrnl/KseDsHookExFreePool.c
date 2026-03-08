/*
 * XREFs of KseDsHookExFreePool @ 0x14057EF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14057FC3C (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06FE8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
