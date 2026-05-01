/*
 * XREFs of ??1?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@UEAA@XZ @ 0x1803948F4
 * Callers:
 *     ??_E?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@UEAAPEAXI@Z @ 0x1803955F0 (--_E-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$integral_c.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::~_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>(
        Concurrency::details::_ContinuationTaskHandleBase *this,
        __int64 a2)
{
  char *v3; // rdi
  char *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = (char *)this + 72;
  *(_QWORD *)this = &Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::`vftable';
  v4 = (char *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v3 + 7) = 0LL;
  }
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return Concurrency::details::_PPLTaskHandle<unsigned char,Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_ContinuationTaskHandleBase>::~_PPLTaskHandle<unsigned char,Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_ContinuationTaskHandleBase>(this);
}
