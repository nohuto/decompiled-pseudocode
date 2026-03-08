/*
 * XREFs of ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C026F430
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C0249BF8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C0249CC0 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C0249D94 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0249E6C (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026F4F0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026F620 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DirectComposition::CGenericMarshaler::FindProperty(__int64 a1, _QWORD *a2, int a3)
{
  _DWORD **v3; // r9
  _DWORD **v4; // rcx

  v3 = *(_DWORD ***)(a1 + 56);
  v4 = &v3[*(_QWORD *)(a1 + 64)];
  while ( 1 )
  {
    *a2 = v3;
    if ( v3 == v4 || **v3 == a3 )
      break;
    ++v3;
  }
  return a2;
}
