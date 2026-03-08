/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x14077D36C
 * Callers:
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HvpFreeHiveFreeDisplay(__int64 a1)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 328);
  v4 = 2LL;
  do
  {
    v5 = v3;
    v6 = 24LL;
    do
    {
      if ( *v5 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*v5, *((unsigned int *)v5 - 4));
        *((_DWORD *)v5 - 2) = 0;
        *v5 = 0LL;
        *((_DWORD *)v5 - 4) = 0;
      }
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 += 79;
    --v4;
  }
  while ( v4 );
  return result;
}
