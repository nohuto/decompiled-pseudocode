/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180261C48
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18026152C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rbx
  __int64 v8; // rsi
  __int64 (__fastcall ***v10)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v10);
  v3 = CInteractionTracker::SelectInertiaModifierForAxis(
         (__int64)InteractionTracker,
         *((_DWORD *)this + 85),
         *((struct CExpressionValueStack **)this + 47),
         *((_QWORD *)this + 48),
         &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3A6u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this);
    v7 = v10;
    v8 = v6;
    if ( *(__int64 (__fastcall ****)(_QWORD))(v6 + 96) != v10 )
    {
      v11 = v10;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      v11 = *(__int64 (__fastcall ****)(_QWORD))(v8 + 96);
      *(_QWORD *)(v8 + 96) = v7;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v11);
    }
    *((_BYTE *)this + 396) &= ~1u;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v10);
  return v5;
}
