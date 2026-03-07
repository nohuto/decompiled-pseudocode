void __fastcall DXGDXGIKEYEDMUTEX::CloseConsumerResources(struct _KPROCESS **this)
{
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v3; // rdi
  struct _KPROCESS *v4; // rsi
  struct DXGGLOBAL *Global; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    v3 = this[7];
    v4 = (struct _KPROCESS *)CurrentProcess;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (struct _KPROCESS *)CurrentProcess != v3 )
      KeStackAttachProcess(v3, &ApcState);
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 1LL, 1LL);
    if ( v4 != v3 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( *this )
  {
    Global = DXGGLOBAL::GetGlobal();
    CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
      (CSERIALIZEDWORKQUEUE ***)Global + 38116,
      (void (*)(void *))DXGGLOBAL::DereferenceObjectWork,
      *this);
    *this = 0LL;
  }
}
