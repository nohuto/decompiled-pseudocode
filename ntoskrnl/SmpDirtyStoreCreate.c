/*
 * XREFs of SmpDirtyStoreCreate @ 0x1407DD540
 * Callers:
 *     SmpKeyedStoreCreate @ 0x1407DD424 (SmpKeyedStoreCreate.c)
 *     SmpSystemStoreCreate @ 0x140858420 (SmpSystemStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 */

__int64 __fastcall SmpDirtyStoreCreate(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 result; // rax
  _DWORD v13[24]; // [rsp+20h] [rbp-98h] BYREF

  v4 = a2;
  memset(v13, 0, 0x58uLL);
  v8 = *(_DWORD *)(a1 + 2064);
  v13[3] = 128;
  v13[4] = 0x20000;
  v13[0] = ((a3 & 1) << 9) | 0x106;
  v9 = 0;
  if ( a3 )
    v10 = (v8 & 0xC) == 8;
  else
    v10 = (v8 & 3) == 2;
  LOBYTE(v9) = v10;
  v11 = (8 * v4) & 0x7FFFFFFFFFFFLL;
  v13[2] = v13[2] & 0xFFF4FF00 | ((v8 & 0x10 | 0x40) << 12) & 0xFFF5FFFF | (((16 * v9) | v8 & 0x40) << 13);
  if ( v11 >= 0x40000 )
    LODWORD(v11) = 0x40000;
  v13[5] = v11;
  result = SmProcessCreateRequest(a1, v13, 88LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a4 = v13[20];
    return 0LL;
  }
  return result;
}
