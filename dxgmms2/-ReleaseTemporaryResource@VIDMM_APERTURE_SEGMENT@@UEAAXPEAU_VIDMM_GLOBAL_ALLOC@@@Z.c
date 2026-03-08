/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F8800
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00F1754 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _VIDMM_POOL_BLOCK **v2; // r14
  _QWORD *v5; // rax
  void (__fastcall *v6)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v8; // r8

  v2 = (struct _VIDMM_POOL_BLOCK **)((char *)a2 + 224);
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
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
  if ( *((_BYTE *)a2 + 265) )
  {
    v6 = (void (__fastcall *)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))*((_QWORD *)*this + 15);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v6(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v8) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, a2, v8);
  }
  VIDMM_LINEAR_POOL::Free(this[19], *v2);
  *v2 = 0LL;
  *((_QWORD *)a2 + 30) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
}
