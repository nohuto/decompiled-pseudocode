/*
 * XREFs of ObpDecrementHandleCount @ 0x1407D8404
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 *     AlpcHandleDataDestroyProcedure @ 0x14077E730 (AlpcHandleDataDestroyProcedure.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1407D9010 (ObpReleaseHandleInfo.c)
 */

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
