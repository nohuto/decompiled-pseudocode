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
