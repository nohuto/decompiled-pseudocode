/*
 * XREFs of RaiseException @ 0x1403D8350
 * Callers:
 *     _raise_exc_ex @ 0x1403D8440 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall RaiseException(int a1, char a2, unsigned int a3, const void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-C8h] BYREF
  void *v14; // [rsp+30h] [rbp-B8h]
  __int64 v15[17]; // [rsp+38h] [rbp-B0h] BYREF

  memset((char *)v15 + 4, 0, 0x7CuLL);
  HIDWORD(v13) = 0;
  v14 = &RaiseException;
  LODWORD(v13) = a1;
  *(_QWORD *)((char *)&v13 + 4) = a2 & 1;
  if ( a4 )
  {
    v11 = 15;
    if ( a3 <= 0xF )
      v11 = a3;
    LODWORD(v15[0]) = v11;
    if ( v11 )
      memmove(&v15[1], a4, 8LL * v11);
  }
  else
  {
    LODWORD(v15[0]) = 0;
  }
  return RtlRaiseException(
           (ULONG_PTR)&v13,
           v8,
           v9,
           v10,
           v13,
           *((__int64 *)&v13 + 1),
           (__int64)v14,
           v15[0],
           v15[1],
           v15[2],
           v15[3],
           v15[4],
           v15[5],
           v15[6],
           v15[7],
           v15[8],
           v15[9],
           v15[10],
           v15[11],
           v15[12],
           v15[13],
           v15[14],
           v15[15],
           v15[16]);
}
