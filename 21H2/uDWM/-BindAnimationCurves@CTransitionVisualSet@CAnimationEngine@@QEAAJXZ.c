/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180042694
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010B34 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // r14
  int v6; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 5) )
  {
    while ( 1 )
    {
      v4 = **(_QWORD **)(*((_QWORD *)this + 5) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
        v1 = v6;
        if ( v6 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 5) )
        return v1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6CFu);
  }
  return v1;
}
