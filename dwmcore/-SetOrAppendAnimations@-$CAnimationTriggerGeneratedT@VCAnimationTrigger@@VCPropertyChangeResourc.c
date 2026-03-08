/*
 * XREFs of ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x18001DB2C
 * Callers:
 *     ?AppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x1801C0C0C (-AppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@.c)
 *     ?SetAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x1801C30E0 (-SetAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEA.c)
 * Callees:
 *     ??$insert@PEAPEAVCBaseExpression@@$0A@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@1@Z @ 0x18001DBB4 (--$insert@PEAPEAVCBaseExpression@@$0A@@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpre.c)
 *     ??$UnRegisterNotifiers@VCBaseExpression@@@CResource@@QEAAXPEAV?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@@Z @ 0x18001DCA4 (--$UnRegisterNotifiers@VCBaseExpression@@@CResource@@QEAAXPEAV-$vector@PEAVCBaseExpression@@V-$a.c)
 *     ?OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ @ 0x18001DCF4 (-OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v5 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF00u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CBaseExpression>(this);
    std::vector<CBaseExpression *>::insert<CBaseExpression * *,0>((char *)this + 104, &v9, *((_QWORD *)this + 14));
    CAnimationTrigger::OnAnimationsChanged(this);
  }
  return v7;
}
