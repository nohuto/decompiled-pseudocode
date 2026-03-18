/*
 * XREFs of ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C0052FB0
 * Callers:
 *     imp_WdfMemoryCopyFromBuffer @ 0x1C0048B30 (imp_WdfMemoryCopyFromBuffer.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C005316C (-_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z.c)
 */

int __fastcall IFxMemory::CopyFromPtr(
        IFxMemory *this,
        _WDFMEMORY_OFFSET *DestinationOffsets,
        void *SourceBuffer,
        unsigned __int64 SourceBufferLength,
        _WDFMEMORY_OFFSET *SourceOffsets)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  bool v10; // zf
  IFxMemory_vtbl *v11; // rax
  WDFMEMORY__ *_a1; // rax
  unsigned __int64 v14; // rbx
  void *v15; // rax

  v9 = this->GetDriverGlobals(this);
  v10 = (((__int64 (__fastcall *)(IFxMemory *))this->GetFlags)(this) & 1) == 0;
  v11 = this->__vftable;
  if ( v10 )
  {
    v14 = v11->GetBufferSize(this);
    v15 = (void *)this->GetBuffer(this);
    return IFxMemory::_CopyPtrToPtr(SourceBuffer, SourceBufferLength, SourceOffsets, v15, v14, DestinationOffsets);
  }
  else
  {
    _a1 = v11->GetHandle(this);
    WPP_IFR_SF_q(v9, 2u, 0x12u, 0xAu, WPP_FxMemoryObject_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(v9);
    return -1073741819;
  }
}
