/*
 * XREFs of DxgkEngAssertGdiOutput @ 0x1C000FD50
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0010E40 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  __int64 v8; // rcx
  BOOL v9; // edi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rax
  int v15; // esi
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  _BOOL8 result; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD, __int64); // rax

  if ( gOldModeChange )
  {
    v22 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = 0LL;
  v9 = 1;
  while ( 1 )
  {
    v10 = hdevEnumerate(v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)(v10 + 40) & 0x20400) == 0 )
    {
      v12 = *(_QWORD *)(v10 + 2576);
      if ( *(_QWORD *)(v12 + 240) == a1 )
      {
        v13 = *(unsigned int *)(v12 + 256);
        if ( (unsigned int)v13 < a3 )
        {
          *(_DWORD *)(v11 + 2616) = -(*(_BYTE *)(v13 + a2) != 0) - 2147483645;
          v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v11 + 2728);
          if ( v14 )
            LODWORD(v14) = v14(*(_QWORD *)(v11 + 1800), 0LL);
          *(_DWORD *)(v11 + 2616) = 0;
          v9 = v9 && (_DWORD)v14;
        }
      }
    }
    v8 = v11;
  }
  v15 = 0;
  for ( i = 0LL; ; i = v20 )
  {
    v19 = hdevEnumerate(i);
    v20 = v19;
    if ( !v19 )
      break;
    if ( (*(_DWORD *)(v19 + 40) & 0x20400) == 0 )
    {
      v17 = *(_QWORD *)(v19 + 2576);
      if ( *(_QWORD *)(v17 + 240) == a1 )
      {
        v18 = *(unsigned int *)(v17 + 256);
        if ( (unsigned int)v18 < a3 )
        {
          if ( *(_BYTE *)(v18 + a2) )
          {
            *(_DWORD *)(v20 + 2616) = 0x80000000;
            v23 = *(__int64 (__fastcall **)(_QWORD, __int64))(v20 + 2728);
            if ( v23 )
              LODWORD(v23) = v23(*(_QWORD *)(v20 + 1800), 1LL);
            *(_DWORD *)(v20 + 2616) = 0;
            v9 = v9 && (_DWORD)v23;
            v15 = 1;
          }
        }
      }
    }
  }
  result = v9;
  *a4 = v15 != 0;
  return result;
}
