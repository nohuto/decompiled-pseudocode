/*
 * XREFs of ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180413070
 * Callers:
 *     ?PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041A900 (-PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804140DC (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerHover(
        CMultitaskingViewElementBase *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  char v4; // bl
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 200LL))(this);
  if ( !*((_DWORD *)this + 25) )
  {
    v4 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)this + 544LL))(
           this,
           a2);
    if ( !v4 )
    {
      v5 = (__int64 *)*((_QWORD *)this + 17);
      if ( v5 )
      {
        v6 = *v5;
        v7 = CMultitaskingViewElementBase::_MapArgumentsToChild(this, v9, a2);
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 224))(v5, v7);
      }
    }
  }
  return v4;
}
