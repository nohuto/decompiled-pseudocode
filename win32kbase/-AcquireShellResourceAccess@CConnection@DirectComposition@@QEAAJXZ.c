/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0091C00
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069DA8 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(
        DirectComposition::CConnection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 CurrentProcess; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax

  v5 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v8 = CurrentProcess;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  ExAcquirePushLockExclusiveEx((char *)this + 224, 0LL);
  *((_BYTE *)this + 232) = 1;
  v9 = *((_QWORD *)this + 32);
  if ( v9 == v8 || !v9 )
  {
    ++*((_DWORD *)this + 63);
    v5 = 0;
    *((_QWORD *)this + 32) = v8;
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v5;
}
