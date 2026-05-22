/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@VInputContext@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVInputContext@@XZ @ 0x1800AEFC0
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801356B0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187F90 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<InputContext>>::operator InputContext * *(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
