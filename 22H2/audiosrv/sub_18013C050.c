/*
 * XREFs of sub_18013C050 @ 0x18013C050
 * Callers:
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C520 @ 0x18013C520 (sub_18013C520.c)
 *     sub_18013C654 @ 0x18013C654 (sub_18013C654.c)
 */

__int64 __fastcall sub_18013C050(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax

  if ( (!*((_DWORD *)a1 + 35)
     || (*(int (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, ", ", 2LL) >= 0)
    && (int)sub_18013C520(a1, L"endpointid") >= 0
    && (*(int (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, " : ", 3LL) >= 0 )
  {
    if ( a3 )
      v5 = sub_18013C520(a1, a3);
    else
      v5 = sub_18013C654(a1, "null");
    if ( v5 >= 0 )
      *((_DWORD *)a1 + 35) = 1;
  }
  return 0LL;
}
