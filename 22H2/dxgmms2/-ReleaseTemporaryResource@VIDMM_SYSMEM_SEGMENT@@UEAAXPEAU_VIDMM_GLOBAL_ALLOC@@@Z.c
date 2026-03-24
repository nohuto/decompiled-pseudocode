/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006090 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000613C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00640AC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0068B74 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C008A098 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008A0EC (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _VIDMM_GLOBAL_ALLOC *v2; // rdi
  VIDMM_GLOBAL *v4; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v2 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v8[3] = *((_QWORD *)v2 + 30);
    v8[4] = *((int *)v2 + 63);
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v2 + 62);
    v8[5] = a2;
  }
  if ( *((_QWORD *)v2 + 28) || *((_QWORD *)v2 + 29) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 27LL;
    v9[5] = v2;
    v9[6] = this;
    WdLogEvent5_WdCriticalError(v9);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v2);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v2 + 39));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, v2);
  if ( *((_BYTE *)v2 + 281) )
  {
    v4 = *(VIDMM_GLOBAL **)this;
    MDLForRange = VidMmGetMDLForRange(v2, *((_QWORD *)v2 + 33), *((_QWORD *)v2 + 34));
    (*((void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v4 + 15))(
      this,
      v2,
      *((_QWORD *)v2 + 33),
      *((_QWORD *)v2 + 34),
      MDLForRange);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      v2,
      v6);
  }
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)v2 + 32) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), v2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v2 + 39), v7);
}
