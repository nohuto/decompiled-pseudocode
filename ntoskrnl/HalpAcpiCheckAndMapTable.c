/*
 * XREFs of HalpAcpiCheckAndMapTable @ 0x14029AD4C
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x14029ABA0 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetFacsMapping @ 0x1403705F8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 */

__int64 __fastcall HalpAcpiCheckAndMapTable(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *Str1,
        char *a6,
        char a7,
        _DWORD *a8)
{
  __int64 v8; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax
  int v18; // ecx
  char v19; // dl
  char *v20; // r8
  char v21; // al
  char v22; // al

  v8 = 0LL;
  if ( a2 )
  {
    LODWORD(v13) = 36;
    v14 = a1 ? HalpMap(a2, ((unsigned __int64)(a2 & 0xFFF) + 4131) >> 12, 1, 0, 4) : MmMapIoSpaceEx(a2, 36LL, 516LL);
    v15 = v14;
    if ( v14 )
    {
      if ( *(_DWORD *)(v14 + 4) < a3
        || a4 && *(_DWORD *)v14 != a4
        || Str1 && strncmp(Str1, (const char *)(v14 + 10), 6uLL)
        || a6 && strncmp(a6, (const char *)(v15 + 16), 8uLL) )
      {
        if ( !v15 )
          return v8;
        goto LABEL_9;
      }
      v13 = *(unsigned int *)(v15 + 4);
      if ( a1 )
      {
        HalpUnmapVirtualAddress(v15, ((unsigned __int64)(v15 & 0xFFF) + 4131) >> 12, 0LL);
        v17 = HalpMap(a2, (v13 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12, 1, 0, 4);
      }
      else
      {
        MmUnmapIoSpace((PVOID)v15, 0x24uLL);
        v17 = MmMapIoSpaceEx(a2, (unsigned int)v13, 516LL);
      }
      v15 = v17;
      if ( v17 )
      {
        if ( !a7 )
          goto LABEL_24;
        v18 = *(_DWORD *)(v17 + 4);
        v19 = 0;
        if ( !v18 )
          goto LABEL_24;
        v20 = (char *)v17;
        do
        {
          v21 = *v20++;
          v22 = v19 + v21;
          v19 = v22;
          --v18;
        }
        while ( v18 );
        if ( !v22 )
        {
LABEL_24:
          v8 = v15;
          *a8 = v13;
          return v8;
        }
LABEL_9:
        if ( a1 )
          HalpUnmapVirtualAddress(v15, ((v15 & 0xFFF) + 4095 + (unsigned __int64)(unsigned int)v13) >> 12, 0LL);
        else
          MmUnmapIoSpace((PVOID)v15, (unsigned int)v13);
      }
    }
  }
  return v8;
}
