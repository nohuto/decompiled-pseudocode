/*
 * XREFs of sub_1800FE268 @ 0x1800FE268
 * Callers:
 *     sub_1800FF500 @ 0x1800FF500 (sub_1800FF500.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_18010274C @ 0x18010274C (sub_18010274C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FE268(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  const wchar_t *v9; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x30u, (__int64)&unk_180172650, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v11 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v5 = *(_QWORD **)(a1 + 112);
  v12 = v5;
  while ( v5 )
  {
    v6 = sub_1800B91A0(v4, &v12);
    sub_180048790(&v13, *v6);
    v8 = (_QWORD *)v13;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v9 = (const wchar_t *)(v13 + 128);
      if ( *(_QWORD *)(v13 + 152) >= 8uLL )
        v9 = *(const wchar_t **)v9;
      sub_1800CD21C(
        *((_QWORD *)off_18019C348 + 2),
        0x31u,
        (__int64)&unk_180172650,
        v9,
        *(_QWORD *)(*(_QWORD *)(v13 + 200) + 72LL));
    }
    LOBYTE(v7) = a2;
    sub_18010274C(v8[25], v7);
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v5 = v12;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
