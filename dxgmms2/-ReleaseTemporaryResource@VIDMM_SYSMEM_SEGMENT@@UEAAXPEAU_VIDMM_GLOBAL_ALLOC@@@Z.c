/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00F1754 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // r14
  _QWORD *v5; // rax
  void (__fastcall *v6)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v8; // r8

  v2 = (_QWORD *)((char *)a2 + 224);
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *v2;
    v5[4] = *((int *)a2 + 59);
    v5[5] = *((unsigned int *)a2 + 58);
  }
  if ( *((_QWORD *)a2 + 26) || *((_QWORD *)a2 + 27) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 27LL, a2, this, 0LL);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
  if ( *((_BYTE *)a2 + 265) )
  {
    v6 = *(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)this + 120LL);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v6(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v8);
  }
  *v2 = 0LL;
  *((_QWORD *)a2 + 30) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
}
