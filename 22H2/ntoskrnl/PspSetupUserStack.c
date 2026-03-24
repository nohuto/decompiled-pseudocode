/*
 * XREFs of PspSetupUserStack @ 0x1406C5144
 * Callers:
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F9DE0 (ZwFreeVirtualMemory.c)
 *     PspWow64SetupCpuArea @ 0x14067A0A8 (PspWow64SetupCpuArea.c)
 *     RtlCreateUserStack @ 0x1406C5268 (RtlCreateUserStack.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // al
  char v5; // bl
  int UserStack; // edi
  __int64 v11; // r15
  ULONG_PTR v13; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v16[3]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *a4;
  v5 = 0;
  memset(v16, 0, sizeof(v16));
  if ( (v4 & 1) != 0 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v16, a4);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), 4096, v13, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
      v11 = 0LL;
    else
      v11 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1408) )
    {
      UserStack = PspWow64SetupCpuArea((unsigned __int64 *)(a3 + 16), a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v11 - 40;
    KiUnstackDetachProcess((__int64)v16, 0);
    v4 = *a4;
    v5 = 2;
LABEL_7:
    *a4 = v5 | v4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess((__int64)v16, 0);
  return (unsigned int)UserStack;
}
