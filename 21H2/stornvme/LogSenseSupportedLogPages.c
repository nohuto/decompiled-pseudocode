/*
 * XREFs of LogSenseSupportedLogPages @ 0x1C001C858
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C00206FC (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseSupportedLogPages(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_DWORD **)(a2 + 64);
    v4 = 60LL;
  }
  else
  {
    v3 = *(_DWORD **)(a2 + 24);
    v4 = 16LL;
  }
  if ( v3 && (v5 = *(_DWORD *)(a2 + v4), v5 >= 7) )
  {
    NVMeZeroMemory(v3, v5);
    *v3 = 50331648;
    result = 0LL;
    *((_WORD *)v3 + 2) = 3328;
    *((_BYTE *)v3 + 6) = 47;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  return result;
}
