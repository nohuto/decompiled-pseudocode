/*
 * XREFs of sub_1800FEE8C @ 0x1800FEE8C
 * Callers:
 *     sub_1800F9F94 @ 0x1800F9F94 (sub_1800F9F94.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800FED78 @ 0x1800FED78 (sub_1800FED78.c)
 *     sub_1800FF930 @ 0x1800FF930 (sub_1800FF930.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FEE8C(__int64 a1, _QWORD *a2, char a3)
{
  void *v6; // rcx
  __int64 *v7; // rsi
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+20h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v13 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v6 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x5Du, (__int64)&unk_180172650);
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    v7 = (__int64 *)(a1 + 112);
    v8 = *(_QWORD **)(a1 + 112);
    v14 = v8;
    while ( 1 )
    {
      v9 = sub_1800B91A0((__int64)v6, &v14);
      sub_180048790(&v15, *v9);
      v10 = v15;
      if ( v15 == a2 )
        break;
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v8 = v14;
      if ( !v14 )
        goto LABEL_22;
    }
    sub_1800FED78(v7, v8);
    if ( a3 )
    {
      v11 = v10[25];
      if ( *(_DWORD *)(v11 + 56) == 3 )
        sub_180104244(v11);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x5Eu, (__int64)&unk_180172650, v10);
      }
      sub_1800FF930(v10);
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
LABEL_22:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
