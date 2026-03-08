/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0003FE0
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0003EB0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C014CE5C (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00041A0 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // r14d
  __int64 v10; // rdx
  char *v11; // rbx
  unsigned __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // rcx
  char v16; // al
  __int64 v17; // rbx
  unsigned __int8 *v18; // rbx
  unsigned __int8 v19; // cl
  int v20; // esi
  _QWORD v21[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF
  int v23; // [rsp+80h] [rbp+50h]

  v23 = a3;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = a5;
  v22 = 0LL;
  v21[0] = a2;
  v10 = *(int *)(v5 + 40);
  LODWORD(v22) = a3;
  BYTE5(v22) = a5;
  v11 = (char *)(v5 + v10);
  v12 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    BYTE4(v22) = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v16 = *v11;
      else
        v16 = *(_BYTE *)(v5 + 44);
      BYTE5(v22) = v16;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)v21);
  if ( v13 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v18 = (unsigned __int8 *)(v11 + 1);
        v19 = *v18;
        if ( *v18 != 1 )
        {
          v20 = v23;
          do
          {
            if ( v19 > 0xFDu )
              break;
            if ( (unsigned __int64)v18 >= v12 )
              break;
            BYTE5(v22) = v19;
            LODWORD(v22) = v20;
            BYTE4(v22) = 2;
            HIWORD(v22) = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)v21);
            v19 = *++v18;
          }
          while ( *v18 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    BYTE4(v22) = 3;
    do
    {
      v17 = *(unsigned __int8 *)(v6 + a2 + 140);
      HIWORD(v22) = *(unsigned __int8 *)(v6 + a2 + 140);
      BYTE5(v22) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v14) + 32) + 19472LL) + 196 * v17 + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)v21);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
