/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C002C7DC
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1C00F15F4 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(
        DXGDEVICE *this,
        unsigned int a2,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a3)
{
  DxgCoreInterface[9]((ADAPTER_DISPLAY *)a2, a3);
}
