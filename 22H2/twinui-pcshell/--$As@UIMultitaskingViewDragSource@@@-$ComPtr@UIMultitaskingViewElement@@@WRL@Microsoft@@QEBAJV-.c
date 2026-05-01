/*
 * XREFs of ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18042C30C
 * Callers:
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18042D2E4 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042DD70 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x18042DFF8 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_f8242c35_7f82_4b56_b5c8_37345206289d,
           a2);
}
