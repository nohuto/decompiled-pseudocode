/*
 * XREFs of Control_FindTrbMatch @ 0x1C00425F4
 * Callers:
 *     Control_ProcessTransferEventPointer @ 0x1C00427B4 (Control_ProcessTransferEventPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall Control_FindTrbMatch(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5, int *a6)
{
  __int64 v6; // rax
  bool v7; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 i; // r8
  int v12; // ecx

  v6 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v9 = v6 + 16LL * a4;
  v10 = v6 + 16LL * a3;
  if ( v10 <= v9 )
  {
    for ( i = 16LL * a3 + *(_QWORD *)(a2 + 24); ; i += 16LL )
    {
      if ( v7 )
        return v7;
      v7 = i == *(_QWORD *)a1;
      if ( (unsigned __int16)*(_DWORD *)(v10 + 12) >> 10 != 1 && (unsigned __int16)*(_DWORD *)(v10 + 12) >> 10 != 3 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v10 + 12) >> 10 == 7 && i != *(_QWORD *)a1 )
        {
          *a6 = 0;
          ++*a5;
        }
        goto LABEL_21;
      }
      if ( i != *(_QWORD *)a1 )
        break;
      switch ( *(_BYTE *)(a1 + 11) )
      {
        case 2:
        case 3:
        case 4:
        case 6:
        case 0x1A:
LABEL_17:
          v12 = (*(_DWORD *)(v10 + 8) & 0x1FFFF) - (*(_DWORD *)(a1 + 8) & 0xFFFFFF);
LABEL_20:
          *a6 += v12;
          break;
        case 0x1C:
          *a6 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
          break;
        case 0x24:
          goto LABEL_17;
      }
LABEL_21:
      v10 += 16LL;
      if ( v10 > v9 )
        return v7;
    }
    v12 = *(_DWORD *)(v10 + 8) & 0x1FFFF;
    goto LABEL_20;
  }
  return v7;
}
