/*
 * XREFs of DxgkEngAssertGdiOutput @ 0x1C00C0BD0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  BOOL v8; // edi
  struct PDEV **i; // rcx
  struct PDEV *v10; // rax
  struct PDEV *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rax
  int v15; // esi
  struct PDEV **j; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct PDEV *v19; // rax
  struct PDEV *v20; // rbx
  _BOOL8 result; // rax
  __int64 (__fastcall *v22)(_QWORD, __int64); // rax

  if ( gOldModeChange )
    WdLogSingleEntry0(1LL);
  v8 = 1;
  for ( i = 0LL; ; i = (struct PDEV **)v11 )
  {
    v10 = hdevEnumerate(i, a2, a3);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*((_DWORD *)v10 + 10) & 0x20400) == 0 )
    {
      v12 = *((_QWORD *)v10 + 319);
      if ( *(_QWORD *)(v12 + 240) == a1 )
      {
        v13 = *(unsigned int *)(v12 + 256);
        if ( (unsigned int)v13 < a3 )
        {
          *((_DWORD *)v11 + 648) = -(*(_BYTE *)(v13 + a2) != 0) - 2147483645;
          v14 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v11 + 338);
          if ( v14 )
            LODWORD(v14) = v14(*((_QWORD *)v11 + 221), 0LL);
          *((_DWORD *)v11 + 648) = 0;
          v8 = v8 && (_DWORD)v14;
        }
      }
    }
  }
  v15 = 0;
  for ( j = 0LL; ; j = (struct PDEV **)v20 )
  {
    v19 = hdevEnumerate(j, a2, a3);
    v20 = v19;
    if ( !v19 )
      break;
    if ( (*((_DWORD *)v19 + 10) & 0x20400) == 0 )
    {
      v17 = *((_QWORD *)v19 + 319);
      if ( *(_QWORD *)(v17 + 240) == a1 )
      {
        v18 = *(unsigned int *)(v17 + 256);
        if ( (unsigned int)v18 < a3 )
        {
          if ( *(_BYTE *)(v18 + a2) )
          {
            *((_DWORD *)v20 + 648) = 0x80000000;
            v22 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v20 + 338);
            if ( v22 )
              LODWORD(v22) = v22(*((_QWORD *)v20 + 221), 1LL);
            *((_DWORD *)v20 + 648) = 0;
            v8 = v8 && (_DWORD)v22;
            v15 = 1;
          }
        }
      }
    }
  }
  result = v8;
  *a4 = v15 != 0;
  return result;
}
