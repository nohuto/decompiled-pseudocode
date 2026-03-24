/*
 * XREFs of ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C008C0FC
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B8040 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00B3BDC (ApiSetEditionGetExecutionEvironment.c)
 */

CKeyboardProcessor *__fastcall CKeyboardProcessor::CKeyboardProcessor(CKeyboardProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 3) = 1;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment();
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = ExecutionEvironment;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  return this;
}
