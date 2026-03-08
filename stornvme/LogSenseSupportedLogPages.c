/*
 * XREFs of LogSenseSupportedLogPages @ 0x1C0014C80
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0019D6C (ScsiLogSenseRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseSupportedLogPages(__int64 a1, __int64 a2)
{
  _WORD *SrbDataBuffer; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD *v7; // rbx
  __int64 result; // rax
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  SrbDataBuffer = (_WORD *)GetSrbDataBuffer(a2, &v9);
  v7 = SrbDataBuffer;
  if ( SrbDataBuffer && (v4 = *v9, (unsigned int)v4 >= 7) )
  {
    NVMeZeroMemory(SrbDataBuffer, v4);
    *(_DWORD *)v7 = 50331648;
    result = 0LL;
    v7[2] = 3328;
    *((_BYTE *)v7 + 6) = 47;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v6) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v4) = 6;
    NVMeSetSenseData(a2, v4, v5, v6);
    return 3238002694LL;
  }
  return result;
}
