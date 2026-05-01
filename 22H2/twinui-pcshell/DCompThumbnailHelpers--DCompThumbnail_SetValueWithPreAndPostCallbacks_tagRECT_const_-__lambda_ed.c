/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180499B9C
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180499B14 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x180161010 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x18042C750 (_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_--_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180499874 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v8; // rax
  int AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb; // ebx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v11 = *a5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v8 = (__int64 *)lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(
                    (__int64)v12,
                    (__int64)a6);
  AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___((__int64)&v11, v8, a7, &v13);
  if ( AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb >= 0 )
    AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a6);
  return (unsigned int)AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb;
}
