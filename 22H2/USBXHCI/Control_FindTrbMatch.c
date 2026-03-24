/*
 * XREFs of Control_FindTrbMatch @ 0x1C0019398
 * Callers:
 *     Control_ProcessTransferEventPointer @ 0x1C00192AC (Control_ProcessTransferEventPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall Control_FindTrbMatch(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5, int *a6)
{
  __int64 v6; // rax
  bool v7; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 i; // r9
  unsigned __int8 v13; // al
  int v14; // ecx

  v6 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v9 = v6 + 16LL * a3;
  v10 = v6 + 16LL * a4;
  if ( v9 <= v10 )
  {
    for ( i = v9 + *(_QWORD *)(a2 + 24) - v6; ; i += 16LL )
    {
      if ( v7 )
        return v7;
      v7 = i == *(_QWORD *)a1;
      if ( (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 != 1 && (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 != 3 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 12) >> 10 == 7 && i != *(_QWORD *)a1 )
        {
          *a6 = 0;
          ++*a5;
        }
        goto LABEL_7;
      }
      if ( i != *(_QWORD *)a1 )
        break;
      v13 = *(_BYTE *)(a1 + 11);
      if ( v13 >= 2u )
      {
        if ( v13 != 6 && v13 > 4u && v13 != 26 )
        {
          if ( v13 == 28 )
          {
            *a6 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
            goto LABEL_7;
          }
          if ( v13 != 36 )
            goto LABEL_7;
        }
        v14 = (*(_DWORD *)(v9 + 8) & 0x1FFFF) - (*(_DWORD *)(a1 + 8) & 0xFFFFFF);
        goto LABEL_13;
      }
LABEL_7:
      v9 += 16LL;
      if ( v9 > v10 )
        return v7;
    }
    v14 = *(_DWORD *)(v9 + 8) & 0x1FFFF;
LABEL_13:
    *a6 += v14;
    goto LABEL_7;
  }
  return v7;
}
