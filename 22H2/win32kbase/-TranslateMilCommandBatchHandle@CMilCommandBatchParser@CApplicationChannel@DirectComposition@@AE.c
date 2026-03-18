/*
 * XREFs of ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C020C90C
 * Callers:
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C020C96C (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 *     ?ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C020CBB4 (-ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C0220574 (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C0222EE0 (-ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@D.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        DirectComposition::CApplicationChannel **a1,
        int *a2,
        int a3,
        char a4,
        _DWORD *a5)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  __int64 v8; // r9

  if ( !a4 || *a2 )
  {
    v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*a1, *a2);
    if ( v7 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v7 + 9), a3) )
      *a2 = *(_DWORD *)(v8 + 32);
    else
      *a5 = -1073741811;
  }
}
