/*
 * XREFs of ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180413210
 * Callers:
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180405B10 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041A9C0 (-PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041ED60 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180414148 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerMove(
        CMultitaskingViewElementBase *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  if ( !*((_DWORD *)this + 25) && *((_DWORD *)this + 24) != 1 || *(_QWORD *)a2 != *((_QWORD *)this + 18) )
    CMultitaskingViewElementBase::_PointerMove(this, a2);
}
