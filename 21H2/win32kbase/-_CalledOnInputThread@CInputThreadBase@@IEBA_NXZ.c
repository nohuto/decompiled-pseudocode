/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0037D24
 * Callers:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     SetThreadPriority @ 0x1C00546A0 (SetThreadPriority.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C0054720 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00C4FD8 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 12);
}
