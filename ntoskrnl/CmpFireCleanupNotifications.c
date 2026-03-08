/*
 * XREFs of CmpFireCleanupNotifications @ 0x14078CDC4
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpCallbackFatalFilter @ 0x140A0C930 (CmpCallbackFatalFilter.c)
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]

  result = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v3 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v3; i = (_QWORD *)*i )
  {
    v5 = i[5];
    *(_QWORD *)&v6 = a1;
    *((_QWORD *)&v6 + 1) = i[7];
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(v5 + 40))(*(_QWORD *)(v5 + 32), 40LL, &v6);
  }
  return result;
}
