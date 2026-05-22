/*
 * XREFs of ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x180018C70
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800189A0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x1801497A4 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

ContextualProcessorInitialState *__fastcall ContextualProcessorInitialState::ContextualProcessorInitialState(
        ContextualProcessorInitialState *this,
        const struct ContextualProcessorInitialState *a2)
{
  __int64 v3; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
