/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_ @ 0x18042CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18042CE54 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

void *__fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)Block + 16) == 0;
  *(_QWORD *)Block = off_180535738;
  if ( !v2 )
  {
    *((_BYTE *)Block + 16) = 0;
    ElementDragData::CancelDrag(*((ElementDragData **)Block + 3));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 3);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
