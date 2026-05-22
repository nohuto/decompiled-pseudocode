/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@0AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A417C
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A41B8 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::catch$36 @ 0x1801A4415 (_std--vector_std--pair_enum_InputType_InfoMetadata--InputInfoMetadata__std--allocat_ea_1801A4415.c)
 *     ??1?$_Uninitialized_backout_al@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A4944 (--1-$_Uninitialized_backout_al@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-.c)
 *     ??1?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A4958 (--1-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator@U-$pair@W4I.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x1801A5010 (-_Change_array@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator.c)
 * Callees:
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x1801A49CC (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      InfoMetadata::InputInfoMetadata::~InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v3 + 8));
      v3 += 328LL;
    }
    while ( v3 != a2 );
  }
}
