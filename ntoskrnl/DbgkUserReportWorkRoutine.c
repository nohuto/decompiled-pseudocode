/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x140936CD0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     PsMultiResumeThread @ 0x140354658 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1404124B0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x140412D50 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x140413BF0 (ZwCreateThreadEx.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rax
  int Thread; // edx
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v11; // [rsp+90h] [rbp-78h]
  __int128 v12; // [rsp+A0h] [rbp-68h]
  __int128 v13; // [rsp+B0h] [rbp-58h]
  $115DCDF994C6370D29323EAB0E0C9502 v14; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(&v14, 0, sizeof(v14));
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KiStackAttachProcess(v3, 0, (__int64)&v14);
  Thread = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( Thread >= 0 )
  {
    Thread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( Thread >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v5 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v5 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v5 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v5 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v5 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v5 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v5 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v5 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v5 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v5 + 18) = *((_QWORD *)P + 21);
      }
      LODWORD(v11) = 48;
      *((_QWORD *)&v11 + 1) = 0LL;
      DWORD2(v12) = 512;
      *(_QWORD *)&v12 = 0LL;
      v13 = 0LL;
      Thread = ZwCreateThreadEx((__int64)&ThreadHandle, 0x1FFFFFLL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( Thread < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1376), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsMultiResumeThread(v2, 0LL, 1u);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDynamicCodePolicyInfo|ThreadAffinityMask, &qword_14003EB40, 4u);
    ZwResumeThread((__int64)ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess(&v14);
  ExFreePoolWithTag(P, 0x4B474244u);
  return ObfDereferenceObject((PVOID)v2);
}
