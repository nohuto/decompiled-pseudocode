/*
 * XREFs of ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18015599C
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180155784 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall CComposition::ProcessOffTheadPreComputeRequests(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY i; // rbx

  v2 = InterlockedFlushSList(this + 69);
  for ( i = v2; i; i = i->Next )
  {
    if ( *((_BYTE *)&this[70].HeaderX64 + 12) )
      LODWORD(i[2].Next->Next) = -2147467260;
    else
      LODWORD(i[2].Next->Next) = ((__int64 (__fastcall *)(struct _SLIST_ENTRY *))i[1].Next->Next[13].Next)(i[1].Next);
  }
  return v2;
}
