/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018C720
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018BBC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018C4B0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  if ( a2 )
  {
    ExFreeToPagedLookasideList(this + 12, a2);
  }
  else
  {
    WdLogSingleEntry1(1LL, 4780LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker", 4780LL, 0LL, 0LL, 0LL, 0LL);
  }
}
