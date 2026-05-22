/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014B23C
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$2 @ 0x180049C74 (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014A1FC (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        __int64 a1)
{
  ContextualProcessorBuffer::InputSample *v1; // rdi

  v1 = *(ContextualProcessorBuffer::InputSample **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      *(ContextualProcessorBuffer::InputSample **)a1,
      *(ContextualProcessorBuffer::InputSample **)(a1 + 8));
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(200 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 200LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
