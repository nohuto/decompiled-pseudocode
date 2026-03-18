/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x1C001D238
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  void *v6; // r14
  __int64 v7; // rax
  int v9; // edx
  __int64 SrbExtension; // rbx
  unsigned int v11; // edx
  int v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+90h] [rbp+38h]
  void *v14; // [rsp+98h] [rbp+40h]
  __int64 v15; // [rsp+A0h] [rbp+48h] BYREF
  __int64 PhysicalAddress; // [rsp+A8h] [rbp+50h]

  v15 = a3;
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
  v14 = 0LL;
  LODWORD(v15) = 512;
  PhysicalAddress = 0LL;
  HIWORD(v13) = 0;
  if ( v6 && *(_DWORD *)(a2 + v7) >= 0x30u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 261LL) & 8) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002690LL;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v6, &v15);
      if ( !PhysicalAddress || (v9 = v15, (unsigned int)v15 < 0x200) )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      if ( (unsigned int)v15 > 0x200 )
        v9 = 512;
      v14 = v6;
      LODWORD(v15) = v9;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x200u);
      v6 = 0LL;
    }
    if ( v6 )
    {
      SrbExtension = GetSrbExtension(a2);
      NVMeZeroMemory(v6, v11);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, 7u, v15, PhysicalAddress, v12, 0LL, 1, 1u);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageTelemetryHeaderCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v14;
      *(_QWORD *)(SrbExtension + 4208) = PhysicalAddress;
      LOWORD(v13) = 7;
      *(_DWORD *)(SrbExtension + 4240) = v15;
      *(_QWORD *)(SrbExtension + 4232) = v13;
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
