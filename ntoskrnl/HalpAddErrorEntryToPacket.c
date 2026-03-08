/*
 * XREFs of HalpAddErrorEntryToPacket @ 0x1405165F0
 * Callers:
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404FFE04 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAddErrorEntryToPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ecx
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // r9d
  char v11; // al
  __int64 v12; // rax
  _OWORD *v13; // rax

  if ( !a1 )
    return 3221225485LL;
  v6 = -1073741637;
  if ( (*(_BYTE *)a3 & 2) != 0 )
    v7 = *(_QWORD *)(a3 + 16);
  else
    v7 = 0LL;
  if ( (*(_DWORD *)a1 & 0x3FF0) != 0 )
  {
    v8 = a1 + 20;
    v9 = *(_WORD *)(a1 + 40) < 0x300u ? 64 : 72;
    v10 = v9 + *(_DWORD *)(a1 + 44);
    if ( v10 < v9 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v11 = *(_BYTE *)(v8 + 22);
      *(_BYTE *)(a2 + 10) = v11;
      if ( (v11 & 1) != 0 )
        *(_OWORD *)(a2 + 32) = *(_OWORD *)(v8 + 28);
      if ( (v11 & 2) != 0 )
      {
        *(_OWORD *)(a2 + 52) = *(_OWORD *)(v8 + 44);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(v8 + 60);
      }
      v12 = *(_QWORD *)v8 - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
      if ( *(_QWORD *)v8 == *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1 )
        v12 = *(_QWORD *)(v8 + 8) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
      if ( !v12 )
      {
        v13 = (_OWORD *)(v8 + v9);
        *(_OWORD *)a3 = *v13;
        *(_OWORD *)(a3 + 16) = v13[1];
        *(_OWORD *)(a3 + 32) = v13[2];
        *(_OWORD *)(a3 + 48) = v13[3];
        *(_OWORD *)(a3 + 64) = v13[4];
        if ( v7 )
        {
          if ( (*(_BYTE *)v13 & 2) == 0 )
          {
            *(_QWORD *)a3 |= 2uLL;
            *(_QWORD *)(a3 + 16) = v7;
          }
        }
      }
      return v10 >= 0xFFFFFFEC ? 0xC000000D : 0;
    }
  }
  return v6;
}
