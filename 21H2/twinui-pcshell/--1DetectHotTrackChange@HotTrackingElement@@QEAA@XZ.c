/*
 * XREFs of ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x180405138
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180405AD0 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180405B10 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)this;
  if ( (v2[24] == 1) != *((_BYTE *)this + 8) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 648LL))(v2);
    v2 = *(_DWORD **)this;
  }
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
