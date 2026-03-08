/*
 * XREFs of EtwpClockSourceRunDown @ 0x1409EBC38
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeGetDynamicTickDisableReason @ 0x14056D328 (KeGetDynamicTickDisableReason.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  char v11; // [rsp+5Ch] [rbp-24h]
  __int64 *v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    ((void (__fastcall *)(__int128 *))off_140C01C80[0])(&v8);
    v6 = *(_QWORD *)((char *)&v8 + 4);
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v14 = 0;
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1096);
    v12 = &v6;
    v7 = DynamicTickDisableReason;
    v13 = 12;
    EtwpLogKernelEvent((__int64)&v12, v5, v4, 1u, 0xF5Au, 0x401802u);
  }
}
