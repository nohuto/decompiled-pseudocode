/*
 * XREFs of sub_1800E3C78 @ 0x1800E3C78
 * Callers:
 *     unknown_libname_299 @ 0x1800E33EC (unknown_libname_299.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E2D60 @ 0x1800E2D60 (sub_1800E2D60.c)
 */

LPCRITICAL_SECTION __fastcall sub_1800E3C78(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)&lpCriticalSection[1];
  sub_1800E2D60(
    (__int64)&lpCriticalSection[1],
    (__int64)&lpCriticalSection[1],
    (__int64)lpCriticalSection[1].DebugInfo->CriticalSection);
  sub_1800472E0(*v1, 0x28uLL);
  DeleteCriticalSection(lpCriticalSection);
  sub_18006A148(lpCriticalSection);
  return lpCriticalSection;
}
