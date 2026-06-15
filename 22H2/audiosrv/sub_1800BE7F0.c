/*
 * XREFs of sub_1800BE7F0 @ 0x1800BE7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800BE7F0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x13u, (__int64)&unk_18016DA10, a1, a2);
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2, a1 + 68);
  else
    return 2147500035LL;
}
