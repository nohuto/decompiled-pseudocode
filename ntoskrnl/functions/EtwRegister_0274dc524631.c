NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  struct _LIST_ENTRY *Flink; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  return EtwpRegisterKMProvider((_DWORD)Flink, v8, 3, v5, v6, retaddr, v7);
}
