/*
 * XREFs of sub_1800F503C @ 0x1800F503C
 * Callers:
 *     sub_1800F23D8 @ 0x1800F23D8 (sub_1800F23D8.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_1800F48E4 @ 0x1800F48E4 (sub_1800F48E4.c)
 */

int __fastcall sub_1800F503C(__int64 a1)
{
  bool v2; // zf
  char *v3; // rcx
  char *v4; // rcx
  int result; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 216) )
  {
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 232));
    v2 = v7 == 0;
    *(_DWORD *)(a1 + 320) = 1;
    if ( !v2 )
      LeaveCriticalSection(lpCriticalSection);
    SetThreadpoolWait(*(PTP_WAIT *)(a1 + 216), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*(PTP_WAIT *)(a1 + 216), 1);
    CloseThreadpoolWait(*(PTP_WAIT *)(a1 + 216));
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  sub_1800F48E4(a1);
  v3 = *(char **)(a1 + 224);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  v4 = *(char **)(a1 + 104);
  result = (_DWORD)v4 - 1;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = CloseHandle(v4);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
