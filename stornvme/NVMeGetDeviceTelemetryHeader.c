/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x1C0015718
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C0010F38 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 SrbDataBuffer; // rax
  void *v7; // r14
  int v9; // edx
  __int64 SrbExtension; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // [rsp+28h] [rbp-38h]
  __int64 PhysicalAddress; // [rsp+50h] [rbp-10h]
  _DWORD *v15; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+30h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  void *v18; // [rsp+A8h] [rbp+48h]

  v17 = a3;
  v5 = 0;
  v15 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  v18 = 0LL;
  LODWORD(v17) = 512;
  v7 = (void *)SrbDataBuffer;
  PhysicalAddress = 0LL;
  HIWORD(v16) = 0;
  if ( SrbDataBuffer && *v15 >= 0x30u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 261LL) & 8) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002690LL;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v17);
      if ( !PhysicalAddress || (v9 = v17, (unsigned int)v17 < 0x200) )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      if ( (unsigned int)v17 > 0x200 )
        v9 = 512;
      v18 = v7;
      LODWORD(v17) = v9;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x200u);
      v7 = v18;
    }
    if ( v7 )
    {
      SrbExtension = GetSrbExtension(a2);
      NVMeZeroMemory(v7, v11);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      LOBYTE(v12) = 7;
      BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v12, v17, PhysicalAddress, v13, 0LL, 1, 1u);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageTelemetryHeaderCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v18;
      *(_QWORD *)(SrbExtension + 4208) = PhysicalAddress;
      LOWORD(v16) = 7;
      *(_DWORD *)(SrbExtension + 4240) = v17;
      *(_QWORD *)(SrbExtension + 4232) = v16;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v5;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
