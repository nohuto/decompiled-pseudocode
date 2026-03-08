/*
 * XREFs of ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C0213A70
 * Callers:
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputConfig::Validate(const struct INPUT_SPACE *a1, const struct INPUT_SPACE_REGION *a2, int a3)
{
  unsigned int v5; // r8d
  char *v6; // rdx
  int v7; // ecx
  int v8; // r9d
  int v10; // r10d
  int v11; // ecx
  int v12; // ebx
  int v13; // r9d
  int v14; // r9d
  int v15; // ecx
  int v16; // r11d
  int v17; // edx

  if ( *(_QWORD *)a1 == 0xFFFFFFFE00000000uLL || *((_DWORD *)a1 + 2) )
    return 0;
  v5 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = (char *)a2 + 200 * v5;
      if ( ((*((_DWORD *)v6 + 4) & 2) != 0) == ((*((_DWORD *)v6 + 4) & 4) != 0) )
        break;
      v7 = *((_DWORD *)v6 + 2) - *(_DWORD *)v6;
      if ( (*((_DWORD *)v6 + 4) & 4) != 0 )
      {
        if ( v7 < 0 )
          return 0;
        v8 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
        if ( v8 < 0 || !v7 && !v8 )
          return 0;
      }
      else if ( v7 <= 0 || *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1) <= 0 )
      {
        return 0;
      }
      if ( (unsigned __int16)(*((_WORD *)v6 + 10) - 1) <= 0x5Eu )
        return 0;
      if ( (*((_DWORD *)v6 + 4) & 2) != 0 )
      {
        if ( (unsigned int)(*((_DWORD *)v6 + 41) - 1) > 3 )
          return 0;
        v10 = *((_DWORD *)v6 + 44);
        v11 = *((_DWORD *)v6 + 42);
        if ( v10 - v11 <= 0 )
          return 0;
        v12 = *((_DWORD *)v6 + 45);
        v13 = *((_DWORD *)v6 + 43);
        if ( v12 - v13 <= 0 )
          return 0;
        if ( v11 )
          return 0;
        if ( v13 )
          return 0;
        v14 = *((_DWORD *)v6 + 48);
        v15 = *((_DWORD *)v6 + 46);
        if ( v14 - v15 <= 0 )
          return 0;
        v16 = *((_DWORD *)v6 + 49);
        v17 = *((_DWORD *)v6 + 47);
        if ( v16 - v17 <= 0 || v15 < 0 || v10 < v14 || v17 < 0 || v12 < v16 )
          return 0;
      }
      if ( ++v5 == a3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
