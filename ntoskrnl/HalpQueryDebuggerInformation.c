/*
 * XREFs of HalpQueryDebuggerInformation @ 0x140AAEF8C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryDebuggerInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r8d
  char *v11; // rcx
  unsigned int v12; // eax
  unsigned int v14; // r9d
  int v15; // r8d
  unsigned int v16; // eax
  const wchar_t *v17; // r8

  *a3 = 4;
  v3 = (__int64 *)qword_140C5FDE8;
  v4 = 0;
  if ( (__int64 *)qword_140C5FDE8 == &qword_140C5FDE8 )
    return 3221225473LL;
  do
  {
    v8 = v3[2];
    v9 = *a3;
    v10 = *(_DWORD *)(v8 + 220);
    v11 = (char *)a1 + v9;
    if ( v10 )
    {
      if ( v10 != 1 )
        return 3221225473LL;
      v14 = *(_DWORD *)(v8 + 232) + 2;
      v15 = *(_DWORD *)(v8 + 232) + 22;
      v16 = v15 + v9;
      *a3 = v16;
      if ( v16 <= a2 )
      {
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 1) = v15;
        *((_DWORD *)v11 + 2) = *(_DWORD *)(v8 + 232);
        if ( *(_DWORD *)(v8 + 232) )
        {
          v17 = *(const wchar_t **)(v8 + 224);
          if ( v17 )
            wcscpy_s((wchar_t *)v11 + 6, (unsigned __int64)v14 >> 1, v17);
        }
      }
    }
    else
    {
      v12 = v9 + 20;
      *a3 = v12;
      if ( v12 <= a2 )
      {
        *(_DWORD *)v11 = 0;
        *((_DWORD *)v11 + 1) = 20;
        *((_DWORD *)v11 + 3) = *(_DWORD *)v8;
        *((_DWORD *)v11 + 4) = *(_DWORD *)(v8 + 4);
        *((_WORD *)v11 + 4) = *(_WORD *)(v8 + 8);
      }
    }
    v3 = (__int64 *)*v3;
    ++v4;
  }
  while ( v3 != &qword_140C5FDE8 );
  if ( !v4 )
    return 3221225473LL;
  if ( *a3 > a2 )
    return 2147483653LL;
  *a1 = DevicesList;
  return 0LL;
}
