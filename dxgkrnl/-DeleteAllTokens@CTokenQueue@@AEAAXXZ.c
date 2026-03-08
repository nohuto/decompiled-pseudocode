/*
 * XREFs of ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0018DE0
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017590 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C0076540 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0077224 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenQueue::DeleteAllTokens(CTokenQueue *this)
{
  CTokenQueue *v1; // rax
  bool i; // zf
  CTokenQueue **v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rbx

  v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  for ( i = *(_QWORD *)v1 == (_QWORD)this; ; i = *(_QWORD *)v1 == (_QWORD)this )
  {
    if ( !i || (v4 = (CTokenQueue **)*((_QWORD *)v1 + 1), *v4 != v1) )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v4;
    *v4 = this;
    if ( v1 == this )
      break;
    v5 = (void (__fastcall ***)(_QWORD, __int64))((char *)v1 - 8);
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v1 - 1) + 56LL))((_QWORD *)v1 - 1);
    (**v5)(v5, 1LL);
    v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  }
}
