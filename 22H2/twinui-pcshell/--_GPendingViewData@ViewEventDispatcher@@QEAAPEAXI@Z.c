/*
 * XREFs of ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x18031164C
 * Callers:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x180310420 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18031569C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

ViewEventDispatcher::PendingViewData *__fastcall ViewEventDispatcher::PendingViewData::`scalar deleting destructor'(
        ViewEventDispatcher::PendingViewData *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  return this;
}
