/*
 * XREFs of ?OnInputAppActivated@TabTipAdapterPolicy@KeyboardHosting@@QEAAXXZ @ 0x1803D8B14
 * Callers:
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CE59C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803C8B84 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppActivated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 v3; // rcx
  _BYTE *Ptr; // rdx
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rcx

  v1 = this + 55;
  AcquireSRWLockExclusive(this + 55);
  std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
    v3,
    (_QWORD **)this[48].Ptr);
  *(RTL_SRWLOCK *)this[48].Ptr = this[48];
  *((RTL_SRWLOCK *)this[48].Ptr + 1) = this[48];
  this[49].Ptr = 0LL;
  Ptr = this[51].Ptr;
  v5 = (unsigned __int64)this[48].Ptr;
  v6 = this[50].Ptr;
  v7 = (unsigned __int64)(Ptr - v6 + 7) >> 3;
  if ( v6 > Ptr )
    v7 = 0LL;
  if ( v7 )
    memset64(v6, v5, v7);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
