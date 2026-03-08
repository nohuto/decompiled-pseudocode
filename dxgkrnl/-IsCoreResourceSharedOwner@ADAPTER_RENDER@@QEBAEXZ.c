/*
 * XREFs of ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000DBB8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsCoreResourceSharedOwner(ADAPTER_RENDER *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  return KeGetCurrentThread() == *(struct _KTHREAD **)(v1 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168)) != 0;
}
