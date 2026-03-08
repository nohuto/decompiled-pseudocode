/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x140543D18
 * Callers:
 *     HvlFlushPasid @ 0x140541A50 (HvlFlushPasid.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(int a1, int a2, __int64 a3, const void *a4, char a5)
{
  __int16 v5; // bx
  unsigned int v6; // edi
  signed __int64 v7; // r9
  __int64 *v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-98h]
  _DWORD v11[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h]
  _BYTE v13[96]; // [rsp+50h] [rbp-78h] BYREF

  v12 = 0LL;
  v5 = a3;
  v11[1] = a1;
  v11[0] = a2;
  v6 = 8 * a3 + 16;
  if ( a5 )
  {
    memmove(v13, a4, 8LL * (unsigned int)a3);
    LODWORD(v12) = v12 | 1;
  }
  else if ( (_DWORD)a3 )
  {
    a3 = (unsigned int)a3;
    v7 = (_BYTE *)a4 - v13;
    v8 = (__int64 *)v13;
    do
    {
      *v8 = *(__int64 *)((char *)v8 + v7) & 0x800 | (*(__int64 *)((char *)v8 + v7)
                                                   + (*(__int64 *)((char *)v8 + v7) & 0xC00));
      ++v8;
      --a3;
    }
    while ( a3 );
  }
  LODWORD(v10) = 65697;
  HIDWORD(v10) = v5 & 0xFFF;
  return HvcallFastExtended(v10, (__int64)v11, v6, 0LL, 0);
}
