/*
 * XREFs of NVMeGetDeviceTelemetryData @ 0x1C001476C
 * Callers:
 *     ScsiToNVMe @ 0x1C0004A30 (ScsiToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0002AA4 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryData(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // edi
  void *v6; // r15
  __int64 v7; // rax
  int v8; // r14d
  unsigned int v9; // r14d
  __int64 SrbExtension; // rbx
  void *v12; // [rsp+40h] [rbp-10h]
  __int64 PhysicalAddress; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+88h] [rbp+38h]
  unsigned __int64 v15; // [rsp+88h] [rbp+38h]
  unsigned int v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(void **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(void **)(a2 + 24);
    v7 = 16LL;
  }
  v12 = 0LL;
  PhysicalAddress = 0LL;
  v16 = 0;
  if ( v6 && *(_DWORD *)(a2 + v7) >= 0x200u )
  {
    HIBYTE(v14) = a3[10];
    BYTE2(v14) = a3[11];
    BYTE1(v14) = a3[12];
    LOBYTE(v14) = a3[13];
    v8 = v14;
    HIBYTE(v15) = a3[2];
    BYTE6(v15) = a3[3];
    BYTE5(v15) = a3[4];
    BYTE4(v15) = a3[5];
    BYTE3(v15) = a3[6];
    BYTE2(v15) = a3[7];
    BYTE1(v15) = a3[8];
    v9 = v8 << 9;
    LOBYTE(v15) = a3[9];
    if ( *(_BYTE *)(a1 + 16) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v6, &v16);
      if ( !PhysicalAddress || !v16 )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      v12 = v6;
      if ( v9 >= v16 )
        v9 = v16;
      v9 &= 0xFFFFFE00;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, v9);
      v6 = 0LL;
    }
    if ( v6 )
    {
      SrbExtension = GetSrbExtension(a2);
      NVMeZeroMemory(v6, v9);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(a1, SrbExtension, 7u, v9, PhysicalAddress, -1, v15, 0);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageTelemetryDataCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v12;
      *(_QWORD *)(SrbExtension + 4208) = PhysicalAddress;
      *(_QWORD *)(SrbExtension + 4232) = (unsigned int)v15;
      *(_DWORD *)(SrbExtension + 4240) = v9;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v3;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
