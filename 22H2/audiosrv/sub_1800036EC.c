/*
 * XREFs of sub_1800036EC @ 0x1800036EC
 * Callers:
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180003160 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800036EC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  HKEY v4; // rcx
  void *v5; // rcx

  *(_QWORD *)a1 = off_180146340;
  *(_QWORD *)(a1 + 8) = off_180146320;
  *(_QWORD *)(a1 + 16) = off_1801462E0;
  *(_QWORD *)(a1 + 24) = off_1801462C0;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  sub_180003AA0(a1 + 16);
  while ( *(_QWORD *)(a1 + 56) )
  {
    PropVariantClear((PROPVARIANT *)(*(_QWORD *)(a1 + 56) + 24LL));
    v3 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v3 + 48);
    sub_18006A148(v3, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  DeleteCriticalSection(v2);
  v4 = *(HKEY *)(a1 + 64);
  if ( v4 )
    RegCloseKey(v4);
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    CoTaskMemFree(v5);
  return sub_1800036C4(a1);
}
