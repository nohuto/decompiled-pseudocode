/*
 * XREFs of HvpMapHiveImageFromViewMap @ 0x14073051C
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x14072C8EC (CmpClaimGlobalQuota.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMapHiveImageFromViewMap(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  char v6; // al
  _QWORD *v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // ebx
  __int64 CellMap; // rax
  __int64 v11; // r8
  int v12; // r11d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx

  v5 = a2;
  v6 = CmpClaimGlobalQuota(a3, a2);
  LODWORD(v7) = 0;
  if ( v6 )
  {
    v8 = 0;
    v9 = v5 + a3;
    if ( v9 )
    {
      do
      {
        CellMap = HvpGetCellMap(a1, v8);
        v8 = v12 + 4096;
        v13 = *(_QWORD *)v11;
        v14 = CellMap;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( v13 )
            v13 ^= v11;
          else
            v13 = (unsigned __int64)v7;
        }
        while ( v13 )
        {
          if ( v8 >= *(__int64 *)(v13 + 40) )
          {
            if ( v8 < *(__int64 *)(v13 + 48) )
              break;
            v15 = *(_QWORD *)(v13 + 8);
          }
          else
          {
            v15 = *(_QWORD *)v13;
          }
          if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v15 )
            v13 ^= v15;
          else
            v13 = v15;
        }
        v16 = *(_QWORD *)(v13 + 56) - *(_QWORD *)(v13 + 24);
        *(_QWORD *)v14 = v7;
        *(_DWORD *)(v14 + 16) = 4096;
        *(_QWORD *)(v14 + 8) = (v8 + v16) | 1;
      }
      while ( v8 < v9 );
    }
  }
  else
  {
    LODWORD(v7) = -1073741670;
  }
  return (unsigned int)v7;
}
