/*
 * XREFs of sub_1800F357C @ 0x1800F357C
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_1800F3170 @ 0x1800F3170 (sub_1800F3170.c)
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 * Callees:
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 *     sub_1800F568C @ 0x1800F568C (sub_1800F568C.c)
 */

__int64 __fastcall sub_1800F357C(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v8; // esi
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r9
  const wchar_t *v13; // rax

  v8 = a3;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v11 = L"Check";
    LODWORD(v12) = a2;
    if ( !a7 )
      v11 = L"Acquire";
    v13 = L"Render";
    if ( a6 )
      v13 = L"Capture";
    if ( !a2 )
      v12 = L"n/a";
    sub_1800F568C(
      *((_QWORD *)off_18019C348 + 2),
      (_DWORD)v11,
      (unsigned int)L"n/a",
      (_DWORD)v12,
      a3,
      a4,
      a5,
      (__int64)v13,
      (__int64)v11);
  }
  return sub_1800F3680(a1, a2, v8, a4, a5, a6, a7, 0);
}
