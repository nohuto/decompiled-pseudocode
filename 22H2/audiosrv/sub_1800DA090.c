/*
 * XREFs of sub_1800DA090 @ 0x1800DA090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DA090(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF

  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(
    pv,
    (struct _TP_TIMER *)v4[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigSetMixedRealitySpatialAudioFormatPolicy");
  v11 = 0LL;
  if ( a2 < 2 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
           qword_18019E618,
           a1,
           &v11);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 512LL))(v11, a2);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = -2147024809;
  }
  sub_18000F690((__int64)pv, v6, v7);
  return (unsigned int)v8;
}
