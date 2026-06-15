/*
 * XREFs of sub_1800E5F48 @ 0x1800E5F48
 * Callers:
 *     sub_1800E4C40 @ 0x1800E4C40 (sub_1800E4C40.c)
 * Callees:
 *     sub_1800CD878 @ 0x1800CD878 (sub_1800CD878.c)
 *     sub_1800D0290 @ 0x1800D0290 (sub_1800D0290.c)
 */

void __fastcall sub_1800E5F48(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  sub_1800CD878((char **)&v3, *(char **)(a1 + 216), *(char **)(a1 + 224));
  sub_1800D0290(a1 + 216, &v3, v3, *(char **)(a1 + 224));
  if ( v1 )
    LeaveCriticalSection(v1);
}
