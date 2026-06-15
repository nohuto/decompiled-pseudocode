/*
 * XREFs of sub_18002AFE0 @ 0x18002AFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002AFE0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"AudioSessionManagerDestroy");
  v5 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 56LL, &unk_18015DFC8, *v2);
      v5 = off_18019C348;
    }
    if ( v5 != &off_18019C348 && (*((_BYTE *)v5 + 28) & 0x40) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      sub_1800BD7DC(v5[2], 57LL, &unk_18015DFC8, *v2);
  }
  sub_18002B930(*v2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2[1] + 16LL))(v2[1]);
  sub_18006A148(v2, 16LL);
  *a1 = 0LL;
  sub_18000F690((__int64)pv, v6, v7);
  return 0LL;
}
