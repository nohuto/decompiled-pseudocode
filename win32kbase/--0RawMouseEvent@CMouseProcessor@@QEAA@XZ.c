/*
 * XREFs of ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C00A53B0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::RawMouseEvent::RawMouseEvent(
        CMouseProcessor::RawMouseEvent *this)
{
  CMouseProcessor::RawMouseEvent *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = -1;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 33) = -1;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *(_QWORD *)((char *)this + 148) = 0LL;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}
