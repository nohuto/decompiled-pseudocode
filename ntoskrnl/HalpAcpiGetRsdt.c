/*
 * XREFs of HalpAcpiGetRsdt @ 0x14029C328
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x14029ABA0 (HalpAcpiGetTableFromBios.c)
 * Callees:
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalpAcpiGetCachedTable @ 0x14029C6E4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

_QWORD *__fastcall HalpAcpiGetRsdt(__int64 a1)
{
  _QWORD *CachedTable; // rbx
  __int64 v3; // rcx
  int *v4; // rax
  int *v5; // rdi
  int v6; // eax
  bool v7; // bp
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rax
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  CachedTable = (_QWORD *)HalpAcpiGetCachedTable(1413763922LL, 0LL, 0LL);
  if ( !CachedTable )
    CachedTable = (_QWORD *)HalpAcpiGetCachedTable(1413763928LL, 0LL, 0LL);
  if ( CachedTable )
  {
    v3 = *(CachedTable - 1);
    if ( v3 )
    {
      v4 = (int *)(a1
                 ? HalpMap(*(CachedTable - 1), ((*(CachedTable - 1) & 0xFFFuLL) + 4131) >> 12, 1, 0, 4)
                 : MmMapIoSpaceEx(v3, 36LL, 0x204u));
      v5 = v4;
      if ( v4 )
      {
        v6 = *v4;
        if ( v6 == 1413763922 || v6 == 1413763928 )
        {
          v7 = memcmp(CachedTable, v5, 0x24uLL) == 0;
          if ( a1 )
            HalpUnmapVirtualAddress(v5, ((unsigned __int64)((unsigned __int16)v5 & 0xFFF) + 4131) >> 12, 0LL);
          else
            MmUnmapIoSpace(v5, 0x24uLL);
          if ( !v7 )
          {
            v8 = HalpAcpiCheckAndMapTable(a1, *(CachedTable - 1), 0x24u, 0, 0LL, 0LL, 1, &NumberOfBytes);
            v9 = (void *)v8;
            if ( v8 )
            {
              v10 = HalpAcpiCopyBiosTable(a1, v8, *(CachedTable - 1));
              if ( a1 )
                HalpUnmapVirtualAddress(
                  v9,
                  (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
                  0LL);
              else
                MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
              if ( v10 )
              {
                v11 = HalpAcpiTableCacheList;
                v12 = (_QWORD *)(v10 - 24);
                if ( *(__int64 **)(HalpAcpiTableCacheList + 8) != &HalpAcpiTableCacheList )
                  __fastfail(3u);
                *v12 = HalpAcpiTableCacheList;
                CachedTable = (_QWORD *)v10;
                v12[1] = &HalpAcpiTableCacheList;
                *(_QWORD *)(v11 + 8) = v12;
                HalpAcpiTableCacheList = v10 - 24;
              }
            }
          }
        }
        else if ( a1 )
        {
          HalpUnmapVirtualAddress(v5, ((unsigned __int64)((unsigned __int16)v5 & 0xFFF) + 4131) >> 12, 0LL);
        }
        else
        {
          MmUnmapIoSpace(v5, 0x24uLL);
        }
      }
    }
  }
  return CachedTable;
}
