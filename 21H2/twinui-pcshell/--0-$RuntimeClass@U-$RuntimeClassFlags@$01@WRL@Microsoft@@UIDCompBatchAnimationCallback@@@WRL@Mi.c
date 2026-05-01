/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18041FD24
 * Callers:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&_ @ 0x18041FB54 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x18047B9A0 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2__&_ @ 0x18047BA38 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f01.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803ECDD0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>((__int64)a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
