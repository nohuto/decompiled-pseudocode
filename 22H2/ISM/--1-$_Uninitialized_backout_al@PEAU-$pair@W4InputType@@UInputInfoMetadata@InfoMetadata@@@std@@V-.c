/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A4944
 * Callers:
 *     _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::dtor$21 @ 0x1801A43F1 (_std--vector_std--pair_enum_InputType_InfoMetadata--InputInfoMetadata__std--allocator_std--pair_.c)
 *     _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::dtor$26 @ 0x1801A43FD (_std--vector_std--pair_enum_InputType_InfoMetadata--InputInfoMetadata__std--allocat_ea_1801A43FD.c)
 *     _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::dtor$31 @ 0x1801A4409 (_std--vector_std--pair_enum_InputType_InfoMetadata--InputInfoMetadata__std--allocat_ea_1801A4409.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>::~_Uninitialized_backout_al<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(*a1, a1[1]);
}
