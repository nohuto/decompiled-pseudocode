/*
 * XREFs of _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x18003B81C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>((_QWORD **)(a2 + 144));
}
