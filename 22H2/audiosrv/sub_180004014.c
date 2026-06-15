/*
 * XREFs of sub_180004014 @ 0x180004014
 * Callers:
 *     sub_180003ECC @ 0x180003ECC (sub_180003ECC.c)
 * Callees:
 *     sub_1800040C4 @ 0x1800040C4 (sub_1800040C4.c)
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 *     sub_180004130 @ 0x180004130 (sub_180004130.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004014(__int64 a1)
{
  char *v2; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( *(_QWORD *)(a1 + 128) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E640 + 96LL))(qword_18019E640);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    if ( (int)sub_180004130(a1, &v4) >= 0 )
      sub_18000410C(*(_QWORD *)(a1 + 120));
    WaitForSingleObjectEx(*(HANDLE *)(a1 + 88), 0xFFFFFFFF, 0);
    v2 = *(char **)(a1 + 88);
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_1800040C4(v2);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 144) = GetTickCount();
  }
  return 0LL;
}
