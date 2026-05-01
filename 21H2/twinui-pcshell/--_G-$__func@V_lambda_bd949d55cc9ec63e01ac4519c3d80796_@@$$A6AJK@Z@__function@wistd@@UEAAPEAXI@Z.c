/*
 * XREFs of ??_G?$__func@V_lambda_bd949d55cc9ec63e01ac4519c3d80796_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18048C780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall wistd::__function::__func<_lambda_bd949d55cc9ec63e01ac4519c3d80796_,long (unsigned long)>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 1);
  *Block = (__int64)&wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
