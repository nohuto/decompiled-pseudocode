/*
 * XREFs of sub_1800F8100 @ 0x1800F8100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8100(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"s_apmSetDuckingGainForId");
  if ( (unsigned int)IsApmDuckingGainForIdSupported() )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
           qword_18019E618,
           a1,
           &v13) >= 0 )
    {
      v9 = *(_QWORD *)qword_18019E618;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v9 + 144))(qword_18019E618, v10, a2);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019E618 + 144LL))(
           qword_18019E618,
           0LL,
           a2);
  }
  sub_18000F690((__int64)pv, v7, v8);
  return v4;
}
