/*
 * XREFs of VslDetermineHotPatchUndoTableSize @ 0x14093F1B4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslDetermineHotPatchUndoTableSize(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  result = VslpEnterIumSecureMode(2u, 70, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
