__int64 __fastcall GetPropertyFromPropArray(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rdx

  *a3 = 0;
  v5 = 0LL;
  *a4 = 0;
  v10 = -1073741275;
  *a5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v11 + 48 * v5 + 16) == *(_DWORD *)(a2 + 16) )
      {
        v13 = *(_QWORD *)(v11 + 48 * v5) - *(_QWORD *)a2;
        if ( !v13 )
          v13 = *(_QWORD *)(v11 + 48 * v5 + 8) - *(_QWORD *)(a2 + 8);
        if ( !v13 && *(_DWORD *)(v11 + 48 * v5 + 20) == *(_DWORD *)(a2 + 20) )
        {
          v14 = *(const wchar_t **)(v11 + 48 * v5 + 24);
          v15 = *(const wchar_t **)(a2 + 24);
          if ( v14 == v15 || v14 && v15 && !wcsicmp(v14, v15) )
            break;
        }
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return v10;
    }
    v10 = 0;
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 48 * v5 + 32);
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 48 * v5 + 36);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48 * v5 + 40);
  }
  return v10;
}
