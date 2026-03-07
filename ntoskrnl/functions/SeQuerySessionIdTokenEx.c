NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // si
  ULONG v8; // ebp
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v6 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v8 = *((_DWORD *)Token + 30);
  *SessionId = v8;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
    v6 = (int)PsGetSiloBySessionId(v8, &v10) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
  *IsServiceSession = v6;
  return 0;
}
