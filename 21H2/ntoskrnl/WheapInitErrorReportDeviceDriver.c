/*
 * XREFs of WheapInitErrorReportDeviceDriver @ 0x140644930
 * Callers:
 *     WheaCreateHwErrorReportDeviceDriver @ 0x140644220 (WheaCreateHwErrorReportDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14024F6E4 (RtlStringCchCopyA.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406447D0 (WheapErrDescIsDeviceDriver.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140644878 (WheapGetPreallocatedPacketBuffer.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapInitErrorReportDeviceDriver(unsigned int a1, ULONG_PTR *a2)
{
  char v4; // bl
  unsigned int v5; // edi
  __int64 *ErrorSource; // rax
  __int64 v7; // rsi
  signed __int32 v8; // eax
  int v9; // edx
  signed __int32 v10; // r8d
  __int64 v11; // r13
  __int64 v12; // r14
  ULONG_PTR PreallocatedPacketBuffer; // r15
  void *Pool2; // rax
  _DWORD Src[16]; // [rsp+30h] [rbp-50h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v7 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
  if ( WheapErrDescIsDeviceDriver(v7) )
  {
    v8 = *(_DWORD *)(v7 + 152);
    if ( v8 != -1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = v8;
        if ( v8 == -1 )
          goto LABEL_19;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 152), v8 + 1, v8);
        if ( v10 == v8 )
          break;
        if ( (unsigned int)++v9 >= 0xA )
        {
          Src[5] = -2147483604;
          goto LABEL_18;
        }
      }
      v11 = *(unsigned int *)(v7 + 16);
      if ( KeGetCurrentIrql() >= 2u )
      {
        PreallocatedPacketBuffer = (ULONG_PTR)WheapGetPreallocatedPacketBuffer(a1);
        if ( !PreallocatedPacketBuffer )
          goto LABEL_13;
        Pool2 = (void *)*a2;
        v4 = 1;
        v12 = v11;
      }
      else
      {
        v12 = (unsigned int)v11;
        PreallocatedPacketBuffer = ExAllocatePool2(66LL, (unsigned int)v11, 1095059543LL);
        if ( !PreallocatedPacketBuffer
          || (Pool2 = (void *)ExAllocatePool2(66LL, 104LL, 1095059543LL), (*a2 = (ULONG_PTR)Pool2) == 0) )
        {
LABEL_13:
          v5 = -1073741670;
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 152));
          if ( PreallocatedPacketBuffer )
            ExFreeHeapPool(PreallocatedPacketBuffer);
          goto LABEL_20;
        }
      }
      memset(Pool2, 0, 0x68uLL);
      *(_DWORD *)*a2 = 1095059543;
      *(_DWORD *)(*a2 + 12) = a1;
      *(_DWORD *)(*a2 + 52) = 2;
      *(_BYTE *)(*a2 + 48) = v4;
      *(_QWORD *)(*a2 + 40) = PreallocatedPacketBuffer + 8;
      *(_QWORD *)(*a2 + 32) = PreallocatedPacketBuffer;
      memset((void *)(PreallocatedPacketBuffer + 8), 0, v12 - 8);
      *(_DWORD *)(PreallocatedPacketBuffer + 8) = 1095059543;
      *(_DWORD *)(PreallocatedPacketBuffer + 12) = 3;
      *(_DWORD *)(PreallocatedPacketBuffer + 16) = v11 - 112;
      *(_DWORD *)(PreallocatedPacketBuffer + 76) = v11 - 192;
      *(_DWORD *)(PreallocatedPacketBuffer + 24) = 6;
      *(_DWORD *)(PreallocatedPacketBuffer + 28) = -2147483646;
      *(_DWORD *)(PreallocatedPacketBuffer + 32) = a1;
      *(_DWORD *)(PreallocatedPacketBuffer + 36) = 12;
      *(_OWORD *)(PreallocatedPacketBuffer + 40) = DEVICE_DRIVER_NOTIFY_TYPE_GUID;
      *(_DWORD *)(PreallocatedPacketBuffer + 64) = 7;
      *(_DWORD *)(PreallocatedPacketBuffer + 72) = 80;
      *(_QWORD *)(*a2 + 16) = PreallocatedPacketBuffer + 88;
      *(_DWORD *)(PreallocatedPacketBuffer + 88) &= 0xFFFFC00F;
      *(_DWORD *)(PreallocatedPacketBuffer + 104) = 2;
      *(_DWORD *)(PreallocatedPacketBuffer + 100) = *(_DWORD *)(PreallocatedPacketBuffer + 16) - 100;
      *(_QWORD *)(*a2 + 24) = PreallocatedPacketBuffer + 108;
      *(_DWORD *)(*a2 + 8) += 100;
      return v5;
    }
  }
  Src[5] = -2147483605;
LABEL_18:
  Src[0] = 1733060695;
  Src[7] = 32;
  Src[1] = 1;
  Src[2] = 64;
  Src[3] = 1;
  Src[4] = 1280201291;
  Src[6] = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "InitErrorReportDeviceDriver");
  WheaLogInternalEvent(Src);
LABEL_19:
  v5 = -1073741811;
LABEL_20:
  if ( *a2 )
    ExFreeHeapPool(*a2);
  return v5;
}
