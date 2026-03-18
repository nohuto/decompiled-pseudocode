/*
 * XREFs of ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01FB46C
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00E6390 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition(CMouseProcessor::RootCursorAsync *this)
{
  CPushLock::AcquireLockExclusive(this);
  if ( *((_BYTE *)this + 24) )
  {
    gptCursorAsync = (struct tagPOINT)*((_QWORD *)this + 2);
    *((_BYTE *)this + 24) = 0;
  }
  CPushLock::ReleaseLock(this);
}
