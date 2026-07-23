/*
 * XREFs of SmpDirtyStoreCreate @ 0x1406BF278
 * Callers:
 *     SmpKeyedStoreCreate @ 0x1406BF194 (SmpKeyedStoreCreate.c)
 *     SmpSystemStoreCreate @ 0x1407CEC30 (SmpSystemStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmProcessCreateRequest @ 0x1406BF384 (SmProcessCreateRequest.c)
 */

__int64 __fastcall SmpDirtyStoreCreate(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // r14
  int v8; // ecx
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int64 result; // rax
  _DWORD v12[24]; // [rsp+20h] [rbp-98h] BYREF

  v4 = a2;
  memset(v12, 0, 0x58uLL);
  v12[3] = 128;
  v12[4] = 0x20000;
  v12[0] = ((a3 & 1) << 9) | 0x106;
  v8 = 0;
  if ( a3 )
    v9 = (dword_140D24180 & 0xC) == 8;
  else
    v9 = (dword_140D24180 & 3) == 2;
  LOBYTE(v8) = v9;
  v10 = (8 * v4) & 0x7FFFFFFFFFFFLL;
  v12[2] = v12[2] & 0xFFF4FF00 | ((dword_140D24180 & 0x10 | 0x40) << 12) & 0xFFF5FFFF | (((16 * v8) | dword_140D24180 & 0x40) << 13);
  if ( v10 >= 0x40000 )
    LODWORD(v10) = 0x40000;
  v12[5] = v10;
  result = SmProcessCreateRequest(a1, v12, 88LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a4 = v12[20];
    return 0LL;
  }
  return result;
}
