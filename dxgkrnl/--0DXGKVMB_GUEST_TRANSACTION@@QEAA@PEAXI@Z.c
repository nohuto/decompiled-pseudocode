/*
 * XREFs of ??0DXGKVMB_GUEST_TRANSACTION@@QEAA@PEAXI@Z @ 0x1C036D5AC
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C03222E4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     <none>
 */

DXGKVMB_GUEST_TRANSACTION *__fastcall DXGKVMB_GUEST_TRANSACTION::DXGKVMB_GUEST_TRANSACTION(
        DXGKVMB_GUEST_TRANSACTION *this,
        void *a2)
{
  signed __int64 v3; // rax

  v3 = _InterlockedExchangeAdd64(&qword_1C013D398, 1uLL);
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 2) = v3 + 1;
  *((_DWORD *)this + 12) = 258;
  *((_DWORD *)this + 16) = 8;
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  return this;
}
