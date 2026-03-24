/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801C4930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800AD0B4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801D4088 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  CManipulation *v4; // rsi
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi

  v4 = (CManipulation *)*((_QWORD *)this + 22);
  if ( v4 )
    v4 = (CManipulation *)*((_QWORD *)v4 + 2);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(CManipulation *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 103LL) )
  {
    *a4 = 1;
    v7 = *((_DWORD *)this + 80);
    if ( v7 < *((_DWORD *)this + 81) )
    {
      v8 = *((_DWORD *)this + 80);
      do
      {
        v9 = *((_QWORD *)this + 39);
        v10 = 132LL * v8;
        if ( *(_DWORD *)(v10 + v9) != *((_DWORD *)this + 82) )
          break;
        v11 = CManipulation::InjectManipulation(v4, (const struct InjectManipulationArgs *)(v9 + 4 + v10));
        v13 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA0u, 0LL);
          return v13;
        }
        v7 = *((_DWORD *)this + 80) + 1;
        *((_DWORD *)this + 80) = v7;
        v8 = v7;
      }
      while ( v7 < *((_DWORD *)this + 81) );
    }
    ++*((_DWORD *)this + 82);
    if ( v7 == *((_DWORD *)this + 81) )
    {
      *((_BYTE *)this + 208) &= ~1u;
      CBaseExpression::NotifyAnimationCompleted(this);
      *a4 = 0;
    }
  }
  return 1;
}
