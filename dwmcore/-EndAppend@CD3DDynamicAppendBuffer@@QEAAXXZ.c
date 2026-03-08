/*
 * XREFs of ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1800900C4
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x18008F650 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800D8250 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800DABCC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDynamicAppendBuffer::EndAppend(CD3DDynamicAppendBuffer *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)this + 560LL) + 120LL))(
    *(_QWORD *)(*(_QWORD *)this + 560LL),
    *((_QWORD *)this + 1),
    0LL);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
