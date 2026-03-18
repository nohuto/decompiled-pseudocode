/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0057F3C
 * Callers:
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1C0084868 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C00848F0 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00C376C (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 12);
}
