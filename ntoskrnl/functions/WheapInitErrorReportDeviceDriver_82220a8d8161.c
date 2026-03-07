__int64 __fastcall WheapInitErrorReportDeviceDriver(unsigned int a1, void **a2)
{
  char v4; // bl
  unsigned int v5; // edi
  volatile signed __int32 *PreallocatedPacketBuffer; // r15
  __int64 *ErrorSource; // rax
  __int64 v8; // r14
  signed __int32 v9; // eax
  unsigned int i; // edx
  signed __int32 v11; // r8d
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 Pool2; // rax
  _DWORD Src[16]; // [rsp+30h] [rbp-50h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  PreallocatedPacketBuffer = 0LL;
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v8 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
  if ( !WheapErrDescIsDeviceDriver(v8) || (v9 = *(_DWORD *)(v8 + 152), v9 == -1) )
  {
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 64;
    Src[3] = 1;
    Src[5] = -2147483605;
    Src[7] = 32;
    Src[4] = 1280201291;
    Src[6] = 2;
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "InitErrorReportDeviceDriver");
    WheaLogInternalEvent(Src);
LABEL_19:
    v5 = -1073741811;
    goto LABEL_20;
  }
  for ( i = 0; i < 0xA; ++i )
  {
    v11 = v9;
    if ( v9 == -1 )
      goto LABEL_19;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 152), v9 + 1, v9);
    if ( v11 == v9 )
    {
      v12 = *(unsigned int *)(v8 + 16);
      if ( KeGetCurrentIrql() >= 2u )
      {
        PreallocatedPacketBuffer = WheapGetPreallocatedPacketBuffer(a1);
        if ( !PreallocatedPacketBuffer )
        {
LABEL_13:
          v5 = -1073741670;
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 152));
          goto LABEL_14;
        }
        v4 = 1;
        v13 = v12;
      }
      else
      {
        v13 = (unsigned int)v12;
        PreallocatedPacketBuffer = (volatile signed __int32 *)ExAllocatePool2(66LL, (unsigned int)v12, 1095059543LL);
        if ( !PreallocatedPacketBuffer )
          goto LABEL_13;
        Pool2 = ExAllocatePool2(66LL, 104LL, 1095059543LL);
        *a2 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_13;
      }
      memset(*a2, 0, 0x68uLL);
      *(_DWORD *)*a2 = 1095059543;
      *((_DWORD *)*a2 + 3) = a1;
      *((_DWORD *)*a2 + 13) = 2;
      *((_BYTE *)*a2 + 48) = v4;
      *((_QWORD *)*a2 + 5) = PreallocatedPacketBuffer + 2;
      *((_QWORD *)*a2 + 4) = PreallocatedPacketBuffer;
      memset((void *)(PreallocatedPacketBuffer + 2), 0, v13 - 8);
      *((_DWORD *)PreallocatedPacketBuffer + 2) = 1095059543;
      *((_DWORD *)PreallocatedPacketBuffer + 3) = 3;
      *((_DWORD *)PreallocatedPacketBuffer + 4) = v12 - 112;
      *((_DWORD *)PreallocatedPacketBuffer + 19) = v12 - 192;
      *((_DWORD *)PreallocatedPacketBuffer + 6) = 6;
      *((_DWORD *)PreallocatedPacketBuffer + 7) = -2147483646;
      *((_DWORD *)PreallocatedPacketBuffer + 8) = a1;
      *((_DWORD *)PreallocatedPacketBuffer + 9) = 12;
      *(_OWORD *)(PreallocatedPacketBuffer + 10) = DEVICE_DRIVER_NOTIFY_TYPE_GUID;
      *((_DWORD *)PreallocatedPacketBuffer + 16) = 7;
      *((_DWORD *)PreallocatedPacketBuffer + 18) = 80;
      *((_QWORD *)*a2 + 2) = PreallocatedPacketBuffer + 22;
      *((_DWORD *)PreallocatedPacketBuffer + 22) &= 0xFFFFC00F;
      *((_DWORD *)PreallocatedPacketBuffer + 26) = 2;
      *((_DWORD *)PreallocatedPacketBuffer + 25) = *((_DWORD *)PreallocatedPacketBuffer + 4) - 100;
      *((_QWORD *)*a2 + 3) = PreallocatedPacketBuffer + 27;
      *((_DWORD *)*a2 + 2) += 100;
      return v5;
    }
  }
  Src[0] = 1733060695;
  Src[7] = 32;
  Src[1] = 1;
  Src[2] = 64;
  Src[3] = 1;
  Src[5] = -2147483604;
  Src[4] = 1280201291;
  Src[6] = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "InitErrorReportDeviceDriver");
  WheaLogInternalEvent(Src);
  v5 = -1073741811;
LABEL_14:
  if ( PreallocatedPacketBuffer )
    ExFreePoolWithTag((PVOID)PreallocatedPacketBuffer, 0x41454857u);
LABEL_20:
  if ( *a2 )
    ExFreePoolWithTag(*a2, 0x41454857u);
  return v5;
}
