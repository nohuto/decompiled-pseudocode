/*
 * XREFs of LogSenseTemperature @ 0x1C0014D00
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
 *     TemperatureFromKelvinToCelsius @ 0x1C001B714 (TemperatureFromKelvinToCelsius.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2)
{
  _BYTE *SrbDataBuffer; // rax
  __int64 v5; // rdx
  unsigned int *v6; // r8
  __int64 v7; // r9
  _BYTE *v8; // rbx
  unsigned int v9; // esi
  char v10; // al
  char v11; // al
  unsigned int *v13; // [rsp+40h] [rbp-28h] BYREF

  v13 = 0LL;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v13);
  v8 = SrbDataBuffer;
  if ( SrbDataBuffer && (v6 = v13, v9 = *v13, *v13 >= 0xA) )
  {
    NVMeZeroMemory(SrbDataBuffer, v9);
    v10 = v8[6];
    *((_WORD *)v8 + 2) = 0;
    *(_DWORD *)v8 = 201326605;
    v8[6] = v10 & 0x40 | 3;
    v8[7] = 2;
    v8[9] = -1;
    if ( v9 >= 0x10 )
    {
      *((_WORD *)v8 + 5) = 256;
      v11 = v8[12] & 0x40;
      v8[13] = 2;
      v8[12] = v11 | 3;
      v8[15] = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 228));
    }
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
