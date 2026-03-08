/*
 * XREFs of EtwpApplyExeFilter @ 0x1409F2064
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140695404 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1409F2338 (EtwpApplyTransientFilters.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

char __fastcall EtwpApplyExeFilter(__int64 a1, _WORD *a2)
{
  unsigned __int16 *v3; // rcx
  const wchar_t *v4; // rdx
  unsigned int v5; // esi
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  unsigned __int16 v8; // r14
  unsigned int v9; // esi
  char v10; // bl

  if ( !a2 )
    return 1;
  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 80) + 1472LL);
  if ( !v3 )
    return 1;
  v4 = (const wchar_t *)*((_QWORD *)v3 + 1);
  v5 = *v3 >> 1;
  v6 = &v4[v5];
  while ( v6 != v4 )
  {
    v7 = v6--;
    if ( *v6 == 92 )
    {
      v6 = v7;
      break;
    }
  }
  v8 = 0;
  v9 = v5 - (v6 - v4);
  if ( !*a2 )
    return 0;
  v10 = 1;
  while ( (unsigned __int16)a2[8 * v8 + 4] != v9 || wcsnicmp(*(const wchar_t **)&a2[8 * v8 + 8], v6, v9) )
  {
    if ( ++v8 >= *a2 )
      return 0;
  }
  return v10;
}
