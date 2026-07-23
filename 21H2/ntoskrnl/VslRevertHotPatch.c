/*
 * XREFs of VslRevertHotPatch @ 0x1404FD6AC
 * Callers:
 *     MiUnapplyDriverHotPatch @ 0x1408CE800 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408CE928 (MiUnloadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslRevertHotPatch(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  volatile signed __int32 *v7; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a3;
  memset(v8, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C4746C);
  v8[1] = a1;
  v8[2] = v3;
  v8[3] = v5;
  result = VslpEnterIumSecureMode(2u, 71, 0, (__int64)v8);
  v7 = (volatile signed __int32 *)&unk_140C47470;
  if ( result < 0 )
    v7 = (volatile signed __int32 *)&unk_140C47474;
  _InterlockedIncrement(v7);
  return result;
}
