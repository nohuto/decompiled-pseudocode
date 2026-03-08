/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F7C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
  }
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_QWORD *)a2 + 28) = -1LL;
  *((_QWORD *)a2 + 29) = 0LL;
  *((_QWORD *)a2 + 30) = this;
  return 0LL;
}
