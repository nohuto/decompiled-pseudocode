/*
 * XREFs of HvlpFastFlushListTb @ 0x1403C6998
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1403C68E4 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     HvlpCopyFlushVaList @ 0x1403C6E98 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VslFastFlushSecureRangeList @ 0x140456FD8 (VslFastFlushSecureRangeList.c)
 */

void __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // xmm1_8
  ULONG v9; // eax
  __int128 v10; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+50h] [rbp-78h]
  _BYTE v12[88]; // [rsp+58h] [rbp-70h] BYREF

  if ( (_BYTE)a3 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v10 = *a1;
    v11 = v8;
    v9 = (HvlpFlags >> 13) & 1;
    if ( !v9 )
      *((_QWORD *)&v10 + 1) |= 8uLL;
    LOBYTE(a3) = v9;
    HvlpCopyFlushVaList(a4, a5, a3, v12);
    HvcallFastExtended(65539, (unsigned int)&v10, 8 * a6 + 24, 0, 0);
  }
  if ( a2 )
    VslFastFlushSecureRangeList(a5, a4);
}
