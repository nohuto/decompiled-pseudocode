/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18022BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC454 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18020A87C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rsi
  CManipulation *v7; // rsi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi

  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    v7 = *(CManipulation **)(v4 + 16);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CManipulation *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 105LL) )
      {
        *a4 = 1;
        v8 = *((_DWORD *)this + 86);
        v9 = *((_DWORD *)this + 87);
        if ( v8 < v9 )
        {
          v10 = *((_DWORD *)this + 86);
          do
          {
            v11 = *((_QWORD *)this + 42);
            v12 = 132LL * v10;
            if ( *(_DWORD *)(v12 + v11) != *((_DWORD *)this + 88) )
              break;
            v13 = CManipulation::InjectManipulation(v7, (const struct InjectManipulationArgs *)(v12 + v11 + 4));
            v15 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA5u, 0LL);
              return v15;
            }
            v8 = *((_DWORD *)this + 86) + 1;
            *((_DWORD *)this + 86) = v8;
            v10 = v8;
            v9 = *((_DWORD *)this + 87);
          }
          while ( v8 < v9 );
        }
        ++*((_DWORD *)this + 88);
        if ( v8 == v9 )
        {
          *((_BYTE *)this + 216) &= ~1u;
          CBaseExpression::NotifyAnimationCompleted(this);
          *a4 = 0;
        }
      }
    }
  }
  return 1;
}
