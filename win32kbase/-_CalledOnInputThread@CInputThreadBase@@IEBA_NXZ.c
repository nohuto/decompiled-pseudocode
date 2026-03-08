/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C007CD2C
 * Callers:
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1C009AA98 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C009AB20 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00D2FD4 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 12);
}
