/*
 * XREFs of HalpDmaGetReservedRegionsForTranslateDomain @ 0x140510718
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14038C660 (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuGetReservedRanges @ 0x140515DE0 (HalpIommuGetReservedRanges.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForTranslateDomain(__int64 a1, char *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  char v5; // al
  unsigned int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0;
  v17 = 0LL;
  v16 = 0;
  if ( !a1 )
    goto LABEL_5;
  if ( (int)HalpIommuGetReservedRanges(a1, &v16, &v17) < 0 )
    return v2;
  v3 = v16;
  if ( v16 )
    v5 = 1;
  else
LABEL_5:
    v5 = 0;
  *a2 = v5;
  v6 = v3 + HalpDmaReservedLaRegionsCount;
  if ( v3 + HalpDmaReservedLaRegionsCount )
  {
    v2 = HalpMmAllocCtxAlloc(a1, 32 * v6);
    if ( v2 )
    {
      v7 = HalpDmaReservedLaRegions;
      v8 = 0;
      while ( v7 )
      {
        v9 = 32LL * v8++;
        *(_QWORD *)(v9 + v2 + 8) = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v9 + v2 + 16) = *(_QWORD *)(v7 + 16);
        *(_BYTE *)(v9 + v2 + 24) = *(_BYTE *)(v7 + 24);
        *(_QWORD *)(v9 + v2) = v2 + 32LL * v8;
        v7 = *(_QWORD *)v7;
      }
      if ( v3 )
      {
        v10 = v3;
        v11 = v17 + 8;
        do
        {
          if ( *(_BYTE *)(v11 + 8) )
          {
            --v6;
          }
          else
          {
            v12 = *(_QWORD *)(v11 - 8) & 0xFFFFFFFFFFFFF000uLL;
            v13 = 32LL * v8;
            v14 = ((*(_QWORD *)v11 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v12;
            *(_QWORD *)(v13 + v2 + 8) = v12;
            *(_BYTE *)(v13 + v2 + 24) = 1;
            *(_QWORD *)(v13 + v2 + 16) = (v14 >> 12) + ((v14 & 0xFFF) != 0);
            *(_QWORD *)(v13 + v2) = v2 + 32LL * ++v8;
          }
          v11 += 24LL;
          --v10;
        }
        while ( v10 );
      }
      *(_QWORD *)(32LL * (v6 - 1) + v2) = 0LL;
    }
  }
  return v2;
}
