/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C000E2A4
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0012370 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C013AD14 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C000E3EC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v10; // rdx
  char *v11; // rsi
  unsigned __int64 v12; // r13
  int v13; // r12d
  char v14; // al
  _BYTE *v15; // rdi
  unsigned __int8 v16; // cl
  int v17; // esi
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF
  int v22; // [rsp+80h] [rbp+50h]

  v22 = a3;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = a5;
  v21 = 0LL;
  v20[0] = a2;
  v10 = *(int *)(v5 + 40);
  LODWORD(v21) = a3;
  BYTE5(v21) = a5;
  v11 = (char *)(v5 + v10);
  v12 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    BYTE4(v21) = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v14 = *v11;
      else
        v14 = *(_BYTE *)(v5 + 44);
      BYTE5(v21) = v14;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
  if ( v13 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v15 = v11 + 1;
        v16 = v11[1];
        if ( v16 != 1 )
        {
          v17 = v22;
          do
          {
            if ( v16 > 0xFDu )
              break;
            if ( (unsigned __int64)v15 >= v12 )
              break;
            BYTE5(v21) = v16;
            LODWORD(v21) = v17;
            BYTE4(v21) = 2;
            HIWORD(v21) = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
            v16 = *++v15;
          }
          while ( *v15 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    BYTE4(v21) = 3;
    do
    {
      v19 = *(unsigned __int8 *)(v6 + a2 + 140);
      HIWORD(v21) = *(unsigned __int8 *)(v6 + a2 + 140);
      BYTE5(v21) = *((_BYTE *)gpfsTable + 196 * v19 + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
