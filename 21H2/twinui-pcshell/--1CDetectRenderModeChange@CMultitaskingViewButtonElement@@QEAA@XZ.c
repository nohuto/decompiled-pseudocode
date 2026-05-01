/*
 * XREFs of ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x18041EC5C
 * Callers:
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041ECC0 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x18041ED20 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041ED60 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041EDB0 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x18041EE08 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

void __fastcall CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange(
        CMultitaskingViewButtonElement::CDetectRenderModeChange *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = CMultitaskingViewButtonElement::_CalcButtonRenderMode(*(_QWORD *)this);
  v4 = v2;
  if ( v2 != *((_DWORD *)this + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 648LL))(*(_QWORD *)this, v2);
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v3, v4);
  }
}
