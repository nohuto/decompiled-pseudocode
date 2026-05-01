/*
 * XREFs of ?_LUAIsElevatedToken@@YAJPEAXPEA_N1@Z @ 0x1802F0B20
 * Callers:
 *     ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x1802E1594 (-IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall _LUAIsElevatedToken(HANDLE TokenHandle, bool *a2, bool *a3)
{
  NTSTATUS result; // eax
  int TokenInformation; // [rsp+58h] [rbp+10h] BYREF
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  *a2 = 0;
  TokenInformation = 1;
  result = NtQueryInformationToken(TokenHandle, TokenElevationType, &TokenInformation, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( TokenInformation == 2
      || TokenInformation == 1
      && (*a3 = 0, result = NtQueryInformationToken(TokenHandle, TokenElevation, &v9, 4u, &ReturnLength), result >= 0)
      && v9 )
    {
      *a2 = 1;
    }
  }
  return result;
}
