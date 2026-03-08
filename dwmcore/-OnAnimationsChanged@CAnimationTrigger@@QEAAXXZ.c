/*
 * XREFs of ?OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ @ 0x18001DCF4
 * Callers:
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x18001DB2C (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationTrigger::OnAnimationsChanged(CAnimationTrigger *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi

  *((_BYTE *)this + 128) &= ~2u;
  v2 = (_QWORD *)*((_QWORD *)this + 13);
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v2 != v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 56LL))(*v2, 60LL) )
    {
      *((_BYTE *)this + 128) |= 2u;
      break;
    }
    ++v2;
  }
  (*(void (__fastcall **)(CAnimationTrigger *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
