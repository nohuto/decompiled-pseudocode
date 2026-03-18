/*
 * XREFs of ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C020CFB0
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C020AF58 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C020B020 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C020B0F4 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C020B1CC (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02309B0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0230AE0 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C020C440 (-EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ.c)
 */

bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2)
{
  bool result; // al

  if ( (int)DirectComposition::CGenericPropertyList::EnsureSpace(this) < 0 )
    return 0;
  *(_QWORD *)(*(_QWORD *)this + 8LL * *((_QWORD *)this + 1)) = a2;
  result = 1;
  ++*((_QWORD *)this + 1);
  return result;
}
