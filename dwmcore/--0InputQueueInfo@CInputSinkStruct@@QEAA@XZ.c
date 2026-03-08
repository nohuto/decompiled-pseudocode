/*
 * XREFs of ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x180104840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CInputSinkStruct::InputQueueInfo *__fastcall CInputSinkStruct::InputQueueInfo::InputQueueInfo(
        CInputSinkStruct::InputQueueInfo *this)
{
  CInputSinkStruct::InputQueueInfo *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
