/*
 * XREFs of sub_1800FF6F8 @ 0x1800FF6F8
 * Callers:
 *     sub_1800F9C30 @ 0x1800F9C30 (sub_1800F9C30.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FA320 @ 0x1800FA320 (sub_1800FA320.c)
 *     sub_1800FEE1C @ 0x1800FEE1C (sub_1800FEE1C.c)
 *     sub_1800FF8CC @ 0x1800FF8CC (sub_1800FF8CC.c)
 *     sub_1800FF980 @ 0x1800FF980 (sub_1800FF980.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FF6F8(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v7; // [rsp+28h] [rbp-8h]
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v2 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x15u, (__int64)&unk_180172650);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v7 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    v2 = -2147024809;
LABEL_15:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x16u, (__int64)&unk_180172650, v2);
    }
    goto LABEL_19;
  }
  *(_DWORD *)(a1 + 56) = 2;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, a1);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  while ( *(_QWORD *)(a1 + 128) )
  {
    v4 = sub_1800FEE1C((__int64 *)(a1 + 112), &v8);
    sub_180048790(&v9, *v4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v9;
    sub_1800FF8CC(*(_QWORD *)(v9 + 200));
    sub_1800FF980(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  LeaveCriticalSection(lpCriticalSection);
  v7 = 0;
  sub_1800FA320(a1);
  sub_180057764((__int64)&lpCriticalSection);
  sub_180071C14((_QWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 56) = 3;
  if ( v2 < 0 )
    goto LABEL_15;
LABEL_19:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
