/*
 * XREFs of ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1801C4F6C
 * Callers:
 *     ?AppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x1801C0CB8 (-AppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposit.c)
 *     ?SetGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x1801C3DEC (-SetGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposition.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Insert_range@PEAPEAVCCompositionGlyphRun@@@?$vector@PEAVCCompositionGlyphRun@@V?$allocator@PEAVCCompositionGlyphRun@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionGlyphRun@@@std@@@std@@@1@PEAPEAVCCompositionGlyphRun@@1Uforward_iterator_tag@1@@Z @ 0x1801BB238 (--$_Insert_range@PEAPEAVCCompositionGlyphRun@@@-$vector@PEAVCCompositionGlyphRun@@V-$allocator@P.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendGlyphRuns(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2776u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 88);
    std::vector<CCompositionGlyphRun *>::_Insert_range<CCompositionGlyphRun * *>(
      (__int64)this + 704,
      *((_BYTE **)this + 89),
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CResource::NotifyOnChanged(*((_QWORD *)this + 32), 0, 0LL);
  }
  return v8;
}
