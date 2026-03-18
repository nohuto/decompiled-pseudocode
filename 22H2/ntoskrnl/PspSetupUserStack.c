/*
 * XREFs of PspSetupUserStack @ 0x140774454
 * Callers:
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14041AA60 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x14077458C (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x14079FA88 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  bool v5; // zf
  int UserStack; // ebp
  __int64 v11; // r12
  ULONG_PTR v13; // [rsp+20h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-90h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(&v16, 0, sizeof(v16));
  if ( !v5 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v16);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), 4096, v13, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
      v11 = 0LL;
    else
      v11 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1408) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v11 - 40;
    KiUnstackDetachProcess(&v16);
    v4 = 2;
LABEL_7:
    *(_BYTE *)a4 = v4 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess(&v16);
  return (unsigned int)UserStack;
}
