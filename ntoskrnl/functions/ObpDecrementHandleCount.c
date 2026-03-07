void __fastcall ObpDecrementHandleCount(PRKPROCESS PROCESS, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rbx
  char v7; // r12
  struct _LIST_ENTRY *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  unsigned int v11; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v11 = 0;
  v4 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = ObTypeIndexTable[v4];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, PROCESS, &v11);
    ExReleasePushLockEx((__int64 *)(a2 + 16), 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v5 + 128) )
  {
    v7 = 0;
    v8 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v7 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v8 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
    }
    (*(void (__fastcall **)(PRKPROCESS, __int64, _QWORD, signed __int64))(v5 + 128))(PROCESS, a2 + 48, v11, v6);
    if ( v7 )
    {
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      PsDetachSiloFromCurrentThread(v8);
    }
  }
  if ( v6 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
