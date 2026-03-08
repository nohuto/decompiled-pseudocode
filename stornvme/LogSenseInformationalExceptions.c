/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C0014B14
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0019D6C (ScsiLogSenseRequest.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2)
{
  char *SrbDataBuffer; // rax
  __int64 v5; // rdx
  unsigned int *v6; // r8
  __int64 v7; // r9
  char *v8; // rbx
  char v9; // al
  unsigned int *v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  SrbDataBuffer = (char *)GetSrbDataBuffer(a2, &v11);
  v8 = SrbDataBuffer;
  if ( SrbDataBuffer && (v6 = v11, v5 = *v11, (unsigned int)v5 >= 0xC) )
  {
    NVMeZeroMemory(SrbDataBuffer, v5);
    v9 = v8[6];
    *((_WORD *)v8 + 2) = 0;
    *(_DWORD *)v8 = 134217775;
    *(_DWORD *)(v8 + 7) = -16777212;
    v8[6] = v9 & 0x40 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 0LL;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v6, v7);
    return 3238002694LL;
  }
}
