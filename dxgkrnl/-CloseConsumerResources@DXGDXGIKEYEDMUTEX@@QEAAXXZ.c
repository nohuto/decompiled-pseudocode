/*
 * XREFs of ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325D6C
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C03255A0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C032DCF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0201C88 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C03261D4 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

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
