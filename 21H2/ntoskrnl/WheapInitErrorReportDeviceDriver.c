/*
 * XREFs of WheapInitErrorReportDeviceDriver @ 0x1405BC6B0
 * Callers:
 *     WheaCreateHwErrorReportDeviceDriver @ 0x1405BBFE0 (WheaCreateHwErrorReportDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1405BC600 (WheapGetPreallocatedPacketBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapInitErrorReportDeviceDriver(int a1, PVOID *a2)
{
  char v4; // bl
  unsigned int v5; // edi
  char *PreallocatedPacketBuffer; // r15
  __int64 *ErrorSource; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  signed __int32 v11; // eax
  unsigned int v12; // edx
  signed __int32 v13; // r8d
  __int64 v14; // r13
  __int64 v15; // rsi
  PVOID PoolWithTag; // rax
  char v18; // [rsp+20h] [rbp-60h]
  _DWORD Src[16]; // [rsp+30h] [rbp-50h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  v18 = 0;
  PreallocatedPacketBuffer = 0LL;
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v8 = (unsigned __int64)(ErrorSource + 12);
  v9 = -(__int64)ErrorSource;
  v10 = v8 & -(__int64)(v9 != 0);
  if ( !v10 || (v11 = *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x98), v11 == -1) )
  {
    Src[5] = -2147483605;
LABEL_21:
    Src[0] = 1733060695;
    Src[7] = 32;
    Src[1] = 1;
    Src[2] = 64;
    Src[3] = 1;
    Src[4] = 1280201291;
    Src[6] = 2;
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "InitErrorReportDeviceDriver");
    WheaLogInternalEvent(Src);
    v5 = -1073741811;
LABEL_22:
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 152));
    if ( PreallocatedPacketBuffer )
      ExFreePoolWithTag(PreallocatedPacketBuffer, 0x41454857u);
LABEL_26:
    if ( *a2 )
      ExFreePoolWithTag(*a2, 0x41454857u);
  }
  else
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v11;
      if ( v11 == -1 )
      {
        v5 = -1073741811;
        goto LABEL_26;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 152), v11 + 1, v11);
      if ( v13 == v11 )
        break;
      if ( ++v12 >= 0xA )
        goto LABEL_9;
    }
    v18 = 1;
LABEL_9:
    if ( v12 >= 0xA )
    {
      Src[5] = -2147483604;
      goto LABEL_21;
    }
    v14 = *(unsigned int *)(v10 + 16);
    if ( KeGetCurrentIrql() >= 2u )
    {
      PreallocatedPacketBuffer = (char *)WheapGetPreallocatedPacketBuffer(a1);
      if ( !PreallocatedPacketBuffer )
      {
LABEL_13:
        v5 = -1073741670;
        goto LABEL_22;
      }
      PoolWithTag = *a2;
      v4 = 1;
      v15 = v14;
    }
    else
    {
      v15 = (unsigned int)v14;
      PreallocatedPacketBuffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v14, 0x41454857u);
      if ( !PreallocatedPacketBuffer )
        goto LABEL_13;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x41454857u);
      *a2 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_13;
    }
    memset(PoolWithTag, 0, 0x68uLL);
    *(_DWORD *)*a2 = 1095059543;
    *((_DWORD *)*a2 + 3) = a1;
    *((_DWORD *)*a2 + 13) = 2;
    *((_BYTE *)*a2 + 48) = v4;
    *((_QWORD *)*a2 + 5) = PreallocatedPacketBuffer + 8;
    *((_QWORD *)*a2 + 4) = PreallocatedPacketBuffer;
    memset(PreallocatedPacketBuffer + 8, 0, v15 - 8);
    *((_DWORD *)PreallocatedPacketBuffer + 2) = 1095059543;
    *((_DWORD *)PreallocatedPacketBuffer + 3) = 3;
    *((_DWORD *)PreallocatedPacketBuffer + 4) = v14 - 112;
    *((_DWORD *)PreallocatedPacketBuffer + 19) = v14 - 192;
    *((_DWORD *)PreallocatedPacketBuffer + 6) = 6;
    *((_DWORD *)PreallocatedPacketBuffer + 7) = -2147483646;
    *((_DWORD *)PreallocatedPacketBuffer + 8) = a1;
    *((_DWORD *)PreallocatedPacketBuffer + 9) = 12;
    *(_OWORD *)(PreallocatedPacketBuffer + 40) = DEVICE_DRIVER_NOTIFY_TYPE_GUID;
    *((_DWORD *)PreallocatedPacketBuffer + 16) = 7;
    *((_DWORD *)PreallocatedPacketBuffer + 18) = 80;
    *((_QWORD *)*a2 + 2) = PreallocatedPacketBuffer + 88;
    *((_DWORD *)PreallocatedPacketBuffer + 22) &= 0xFFFFC00F;
    *((_DWORD *)PreallocatedPacketBuffer + 26) = 2;
    *((_DWORD *)PreallocatedPacketBuffer + 25) = *((_DWORD *)PreallocatedPacketBuffer + 4) - 100;
    *((_QWORD *)*a2 + 3) = PreallocatedPacketBuffer + 108;
    *((_DWORD *)*a2 + 2) += 100;
  }
  return v5;
}
