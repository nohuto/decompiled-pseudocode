/*
 * XREFs of ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801C5208
 * Callers:
 *     ?AppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801C0D38 (-AppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposi.c)
 *     ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801C70E8 (-SetUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCCompositio.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x1801BCBD4 (--$insert@PEAPEAVCCompositionTextLine@@$0A@@-$vector@PEAVCCompositionTextLine@@V-$allocator@PEAV.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x27D4u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 94);
    std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
      (_QWORD *)this + 94,
      &v10,
      *((_BYTE **)this + 95),
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CResource::NotifyOnChanged(*((_QWORD *)this + 32), 0, 0LL);
  }
  return v8;
}
