/*
 * XREFs of sub_180138DF4 @ 0x180138DF4
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_180139698 @ 0x180139698 (sub_180139698.c)
 * Callees:
 *     sub_1800F5128 @ 0x1800F5128 (sub_1800F5128.c)
 */

char __fastcall sub_180138DF4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rax

  v5 = 0;
  if ( !(unsigned int)o__wcsicmp(a1 + 16, a2 + 16)
    && (unsigned int)sub_1800F5128((const wchar_t *)(a1 + 418), v4, (const wchar_t *)(a2 + 418))
    && *(_DWORD *)(a1 + 940) == *(_DWORD *)(a2 + 940) )
  {
    v6 = *(_QWORD *)(a1 + 944) - *(_QWORD *)(a2 + 944);
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 952) - *(_QWORD *)(a2 + 952);
    if ( !v6 && *(_DWORD *)(a1 + 960) == *(_DWORD *)(a2 + 960) )
      return 1;
  }
  return v5;
}
