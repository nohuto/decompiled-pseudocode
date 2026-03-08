/*
 * XREFs of NtRIMGetDevicePreparsedData @ 0x1C01A1FC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedData @ 0x1C01A4FD0 (RIMGetDevicePreparsedData.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedData(int a1, int a2, int a3, int a4)
{
  return RIMGetDevicePreparsedData(a1, a2, a3, a4, 1);
}
