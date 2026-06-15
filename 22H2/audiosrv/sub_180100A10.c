/*
 * XREFs of sub_180100A10 @ 0x180100A10
 * Callers:
 *     sub_180100800 @ 0x180100800 (sub_180100800.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 *     sub_180104898 @ 0x180104898 (sub_180104898.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180100A10(__int64 a1, __int64 a2, int a3)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v6 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_180104898(*((_QWORD *)off_18019C348 + 2), 47LL);
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 56) == 3 )
      sub_180104244(a1);
  }
  else if ( *(_DWORD *)(a1 + 56) == 4 )
  {
    sub_18010393C(a1);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
