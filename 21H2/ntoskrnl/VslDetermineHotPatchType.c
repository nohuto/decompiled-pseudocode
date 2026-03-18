/*
 * XREFs of VslDetermineHotPatchType @ 0x140931E28
 * Callers:
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // ecx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a1;
  memset(v8, 0, 0x68uLL);
  v8[1] = v5;
  v8[2] = v3;
  result = VslpEnterIumSecureMode(2u, 69, 0, (__int64)v8);
  if ( (int)result >= 0 )
  {
    LOBYTE(v7) = v8[2];
    *a3 = v8[2];
    if ( (v7 & 1) != 0 )
    {
      _InterlockedIncrement(&dword_140C487E4);
      v7 = *a3;
    }
    if ( (v7 & 2) != 0 )
      _InterlockedIncrement(&dword_140C487E8);
  }
  return result;
}
