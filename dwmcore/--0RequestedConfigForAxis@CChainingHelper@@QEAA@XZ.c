/*
 * XREFs of ??0RequestedConfigForAxis@CChainingHelper@@QEAA@XZ @ 0x180107280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CChainingHelper::RequestedConfigForAxis *__fastcall CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis(
        CChainingHelper::RequestedConfigForAxis *this)
{
  CChainingHelper::RequestedConfigForAxis *result; // rax

  *(_BYTE *)this &= 0xF8u;
  result = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}
