/*
 * XREFs of __longjmp_internal @ 0x1403F9BA0
 * Callers:
 *     longjmp @ 0x1403D0670 (longjmp.c)
 * Callees:
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 */

__int64 __fastcall _longjmp_internal(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _QWORD v4[3]; // [rsp+30h] [rbp-508h] BYREF
  int v5; // [rsp+48h] [rbp-4F0h]
  __int64 v6; // [rsp+50h] [rbp-4E8h]
  _BYTE v7[1240]; // [rsp+60h] [rbp-4D8h] BYREF

  if ( !a2 )
    a2 = 1LL;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      LODWORD(v4[0]) = -2147483610;
      HIDWORD(v4[0]) = v2;
      v4[1] = v2;
      v4[2] = v2;
      v5 = v2 + 1;
      v6 = a1;
      RtlUnwindEx(*(_QWORD *)a1, *(_QWORD *)(a1 + 80), v4, a2, (__int64)v7, v2);
    }
  }
  _mm_lfence();
  _mm_setcsr(*(_DWORD *)(a1 + 88));
  return (*(__int64 (**)(void))(a1 + 80))();
}
