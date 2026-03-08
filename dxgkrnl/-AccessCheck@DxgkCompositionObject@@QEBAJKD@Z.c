/*
 * XREFs of ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C006C994
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x1C035FB20 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DxgkCompositionObject::AccessCheck(DxgkCompositionObject *this)
{
  __int64 result; // rax
  __int64 v3; // r9
  _DWORD v4[4]; // [rsp+30h] [rbp-1A8h] BYREF
  _BYTE v5[160]; // [rsp+40h] [rbp-198h] BYREF
  _BYTE v6[224]; // [rsp+E0h] [rbp-F8h] BYREF

  memset(v5, 0, sizeof(v5));
  memset(v6, 0, sizeof(v6));
  result = SeCreateAccessState(v5, v6, 1LL, &xmmword_1C009A6B8);
  v4[0] = result;
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = 1;
    ObCheckObjectAccess(this, v5, 0LL, v3, v4);
    SeDeleteAccessState(v5);
    return v4[0];
  }
  return result;
}
