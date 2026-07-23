/*
 * XREFs of VslDetermineHotPatchType @ 0x14088F738
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A9332C (MmRegisterHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  NTSTATUS result; // eax
  int v7; // ecx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a1;
  memset(v8, 0, 0x68uLL);
  v8[1] = v5;
  v8[2] = v3;
  result = VslpEnterIumSecureMode(2u, 67, 0, (__int64)v8);
  if ( result >= 0 )
  {
    LOBYTE(v7) = v8[2];
    *a3 = v8[2];
    if ( (v7 & 1) != 0 )
    {
      _InterlockedIncrement(&dword_140C47484);
      v7 = *a3;
    }
    if ( (v7 & 2) != 0 )
      _InterlockedIncrement(&dword_140C47488);
  }
  return result;
}
