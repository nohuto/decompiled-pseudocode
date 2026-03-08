/*
 * XREFs of __longjmp_internal @ 0x140411B40
 * Callers:
 *     longjmp @ 0x1403D2360 (longjmp.c)
 * Callees:
 *     RtlUnwind @ 0x1403BE7D0 (RtlUnwind.c)
 */

__int64 __fastcall _longjmp_internal(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp-8h]

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
      RtlUnwind(*(_QWORD *)a1, *(_QWORD *)(a1 + 80), v4, a2);
    }
  }
  _mm_lfence();
  _mm_setcsr(*(_DWORD *)(a1 + 88));
  return (*(__int64 (**)(void))(a1 + 80))();
}
