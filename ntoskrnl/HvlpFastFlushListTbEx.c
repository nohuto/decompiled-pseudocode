/*
 * XREFs of HvlpFastFlushListTbEx @ 0x140547580
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1405476CC (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     HvlpCopyFlushVaList @ 0x1403C6E98 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VslFastFlushSecureRangeList @ 0x140456FD8 (VslFastFlushSecureRangeList.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405472B0 (HvlpAffinityToHvProcessorSet.c)
 */

void __fastcall HvlpFastFlushListTbEx(__int64 *a1, __int64 a2, char a3, char a4, unsigned int a5, __int64 *a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edi
  __int64 v12; // [rsp+30h] [rbp-98h]
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h]
  _QWORD v15[12]; // [rsp+50h] [rbp-78h] BYREF

  if ( a4 )
  {
    v9 = a1[1];
    v13 = *a1;
    v14 = v9;
    if ( (HvlpFlags & 0x2000) == 0 )
      v14 = v9 | 8;
    v10 = HvlpAffinityToHvProcessorSet(a2, v15, 0x50u);
    v11 = v10 + 32;
    LODWORD(v12) = ((v10 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v12) = a7 & 0xFFF;
    HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (__int64 *)((char *)&v13 + (unsigned int)(v10 + 32)));
    LODWORD(v12) = v12 | 0x10000;
    HvcallFastExtended(v12, (__int64)&v13, v11 + 8 * a7, 0LL, 0);
  }
  if ( a3 )
    VslFastFlushSecureRangeList(a6, a5);
}
