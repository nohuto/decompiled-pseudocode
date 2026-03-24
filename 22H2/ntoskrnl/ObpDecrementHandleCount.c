/*
 * XREFs of ObpDecrementHandleCount @ 0x1406F6CE4
 * Callers:
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140664680 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406DB6F0 (ObpInsertOrLocateNamedObject.c)
 *     AlpcHandleDataDestroyProcedure @ 0x1406F6C70 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1406F6EB0 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1406F7674 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v8)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  char v9; // r12
  struct _LIST_ENTRY *v10; // r15
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  _DWORD *v12; // r9
  unsigned int v13; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[3]; // [rsp+38h] [rbp-70h] BYREF

  v13 = 0;
  v4 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(v14, 0, sizeof(v14));
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
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v13);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v8 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v9 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v10 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v14, v12);
      v8 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128);
    }
    v8(BugCheckParameter1, a2 + 48, v13, v6);
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)v14, 0);
      PsDetachSiloFromCurrentThread(v10);
    }
  }
  if ( v6 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
