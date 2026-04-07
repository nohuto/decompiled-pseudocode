/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResourceProxy@@@Z @ 0x1800250F0
 * Callers:
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800230A0 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResourceProxy *a2)
{
  unsigned int v3; // esi
  volatile signed __int32 *v4; // rcx
  struct CResourceProxy *v5; // rbx
  int v7; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  v5 = a2;
  if ( v4 == (volatile signed __int32 *)a2 )
    return 0LL;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
  *((_QWORD *)this + 12) = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v5 = (struct CResourceProxy *)*((_QWORD *)this + 12);
  }
  if ( v5 )
    v3 = *(_DWORD *)(*((_QWORD *)v5 + 2) + 24LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                         + 424LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v3);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x132u);
  return v8;
}
