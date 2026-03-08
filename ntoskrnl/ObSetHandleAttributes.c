/*
 * XREFs of ObSetHandleAttributes @ 0x1407D8910
 * Callers:
 *     NtSetInformationObject @ 0x1407DA9A0 (NtSetInformationObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     ObpIsKernelHandle @ 0x1403521C8 (ObpIsKernelHandle.c)
 *     ExSetHandleAttributes @ 0x140352D5C (ExSetHandleAttributes.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(__int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r15
  _KPROCESS *Process; // r14
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v10; // rax
  volatile signed __int64 *v11; // rbx
  unsigned __int64 HandlePointer; // rax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-88h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v17; // [rsp+20h] [rbp-68h] BYREF

  memset(&v17, 0, sizeof(v17));
  v4 = a1;
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a3) )
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v8 = ObpKernelHandleTable;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v17);
      v5 = 1;
    }
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v8 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    if ( !v8 )
      return 3221225480LL;
    v6 = 1;
  }
  else
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[28];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (__int64 *)ExMapHandleToPointer((unsigned int *)v8, v4);
  v11 = v10;
  if ( v10 )
  {
    HandlePointer = ExGetHandlePointer(v10);
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                    + 72) & 2) == 0 )
    {
      v13 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v13 = *a2 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v11, v13, 3);
    }
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v16, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v5 )
    KiUnstackDetachProcess(&v17);
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v14;
}
