void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        bool a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax

  v9 = *(_QWORD *)*a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, a3);
  if ( !*(_DWORD *)(v9 + 144)
    && !_bittest(*(const signed __int32 **)(v9 + 536), 0x1Eu)
    && !*(_DWORD *)(*(_QWORD *)(v9 + 536) + 12LL)
    && (**(_DWORD **)(v9 + 536) & 0x20000) == 0
    && !_bittest((const signed __int32 *)(v9 + 68), 0x1Eu) )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v9 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v9, a4, a5);
    if ( bTracingEnabled )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v10, &EventMarkAllocation, v11, a2);
    }
    v12 = *(_QWORD *)(v9 + 16);
    ++*((_DWORD *)this + 1816);
    *((_QWORD *)this + 909) += v12;
  }
}
