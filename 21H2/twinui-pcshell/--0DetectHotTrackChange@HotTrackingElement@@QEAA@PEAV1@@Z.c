/*
 * XREFs of ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x180404F70
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180405AD0 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180405B10 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

HotTrackingElement::DetectHotTrackChange *__fastcall HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this,
        struct HotTrackingElement *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct HotTrackingElement *))(*(_QWORD *)a2 + 8LL))(a2);
    a2 = *(struct HotTrackingElement **)this;
  }
  *((_BYTE *)this + 8) = *((_DWORD *)a2 + 24) == 1;
  return this;
}
