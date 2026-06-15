/*
 * XREFs of sub_1800DD8C0 @ 0x1800DD8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800DD8C0(__int64 a1)
{
  int v2; // eax
  LPCRITICAL_SECTION v3; // rbx
  int v6; // [rsp+20h] [rbp-48h]
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF

  sub_1800462E4(&v7, a1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x2Cu, (__int64)&unk_18015E3E8, a1);
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v6 = v2;
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x2Du, (__int64)&unk_18015E3E8, a1, v6);
  }
  v3 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    sub_1800103D4((__int64)v3);
  LeaveCriticalSection(v3);
  return EtwEventActivityIdControl(4LL, v8);
}
