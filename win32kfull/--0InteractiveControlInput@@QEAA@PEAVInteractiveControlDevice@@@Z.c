/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0249664
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0248B64 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  __int64 v4; // rax
  int v5; // edx
  InteractiveControlInput *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = SGDGetUserSessionState(0xFFFFF78000000004uLL);
  v5 = *(unsigned __int16 *)(v4 + 17152);
  *(_WORD *)(v4 + 17152) = v5 + 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  result = this;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 8) = v5;
  return result;
}
