/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C02552A4
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02547C0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C0254F34 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  unsigned __int64 v2; // r8

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *(_OWORD *)((char *)this + 52) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 7) = v2 >> 24;
  LOWORD(v2) = word_1C032F760;
  *((_DWORD *)this + 8) = (unsigned __int16)word_1C032F760;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  word_1C032F760 = v2 + 1;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  return this;
}
