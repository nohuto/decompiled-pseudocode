/*
 * XREFs of sub_1800C1D20 @ 0x1800C1D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 */

__int64 __fastcall sub_1800C1D20(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  float *v4; // rax
  float v5; // xmm0_4
  __int64 *v6; // rsi
  __int64 v7; // rdi
  float *v8; // rax
  __int64 v9; // r8

  v2 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v4 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
    v5 = sub_18005C878(v4);
    sub_1800C24EC(*((_QWORD *)off_18019C348 + 2), 39LL, &unk_18016DDC0, (unsigned int)v2, v5);
  }
  v6 = *(__int64 **)(a1 + 256);
  v7 = *v6;
  v8 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v2);
  sub_18005C878(v8);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(v7 + 48))(v6, (unsigned int)v2, v9, a1 + 264);
}
