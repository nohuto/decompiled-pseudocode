/*
 * XREFs of AccessCheckObject @ 0x1C00C3CE0
 * Callers:
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

_BOOL8 __fastcall AccessCheckObject(__int64 a1, unsigned int a2, char a3, void *a4)
{
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD v11[4]; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v12[160]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v13[224]; // [rsp+E0h] [rbp-118h] BYREF

  v11[0] = 0;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  SeCreateAccessState(v12, v13, a2, a4);
  LOBYTE(v8) = a3;
  LOBYTE(v9) = a4 == &KeyMapping;
  LOBYTE(a2) = ObCheckObjectAccess(a1, v12, v9, v8, v11);
  SeDeleteAccessState(v12);
  return (_BYTE)a2 == 1;
}
