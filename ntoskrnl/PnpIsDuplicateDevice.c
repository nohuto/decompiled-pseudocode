/*
 * XREFs of PnpIsDuplicateDevice @ 0x140950E0C
 * Callers:
 *     IopIsReportedAlready @ 0x140803270 (IopIsReportedAlready.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsDuplicateDevice(_DWORD *a1, _DWORD *a2)
{
  int v2; // r14d
  _DWORD *v3; // r8
  unsigned int v4; // ebp
  unsigned int v5; // edi
  _DWORD *v6; // r10
  char v7; // bl
  unsigned int v8; // esi
  unsigned int v9; // r9d
  _DWORD *v10; // r11
  _DWORD *v11; // rax

  v2 = 0;
  v3 = a1;
  if ( *a1 && *a2 )
  {
    while ( 1 )
    {
      v4 = v3[4];
      v5 = 0;
      if ( v4 )
        break;
LABEL_15:
      if ( v2 )
        return 1LL;
      v11 = a2;
      v2 = 1;
      a2 = v3;
      v3 = v11;
    }
    v6 = v3 + 5;
    while ( 1 )
    {
      v7 = *(_BYTE *)v6;
      if ( ((*(_BYTE *)v6 - 1) & 0xF9) == 0 && v7 != 5 )
      {
        v8 = a2[4];
        v9 = 0;
        if ( v8 )
        {
          v10 = a2 + 5;
          do
          {
            if ( v7 == *(_BYTE *)v10 && *(_QWORD *)(v6 + 1) == *(_QWORD *)(v10 + 1) && (v7 == 1) == (*(_BYTE *)v10 == 1) )
              break;
            ++v9;
            v10 += 5;
          }
          while ( v9 < v8 );
        }
        if ( v9 == v8 )
          break;
      }
      ++v5;
      v6 += 5;
      if ( v5 >= v4 )
        goto LABEL_15;
    }
  }
  return 0LL;
}
