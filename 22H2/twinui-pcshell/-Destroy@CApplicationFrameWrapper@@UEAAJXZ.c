/*
 * XREFs of ?Destroy@CApplicationFrameWrapper@@UEAAJXZ @ 0x1801E4A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Destroy(unsigned __int64 this)
{
  RTL_SRWLOCK *v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_BYTE *)(this + 64) = 1;
  ReleaseSRWLockExclusive(v2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 128) + 96LL))(
    *(_QWORD *)(this + 128),
    this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(this + 128));
  return 0LL;
}
