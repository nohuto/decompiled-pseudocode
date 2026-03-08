/*
 * XREFs of PfpPfnPrioRequest @ 0x1406AE8C4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406AE494 (PfQuerySuperfetchInformation.c)
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1406AEA90 (PfpCopyUserPfnPrioRequest.c)
 *     MmQueryPfnList @ 0x1406E0A60 (MmQueryPfnList.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPfnPrioRequest(__int64 a1, char a2, unsigned int *a3)
{
  _OWORD *v6; // rbx
  unsigned int v7; // edx
  int PfnList; // edi
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v15) = 0;
  v6 = 0LL;
  Src = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 6 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 >= 0xD8 )
    {
      PfnList = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v7, 6, (unsigned int)&Src, a2, 1);
      if ( PfnList >= 0 )
      {
        v6 = Src;
        PfnList = MmQueryPfnList(*((_QWORD *)Src + 1), (char *)Src + 192);
        if ( PfnList >= 0 && (*((_DWORD *)v6 + 1) & 1) != 0 )
          MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v6 + 1, 0xB0u, v9, &v15);
        if ( a2 )
          ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
        goto LABEL_9;
      }
LABEL_23:
      v6 = Src;
      goto LABEL_11;
    }
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 8) == 7 || *(_DWORD *)(a1 + 8) == 22 || *(_DWORD *)(a1 + 8) == 29 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    if ( v12 >= 0xD8 )
    {
      PfnList = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v12, *(_DWORD *)(a1 + 8), (unsigned int)&Src, a2, 0);
      if ( PfnList >= 0 )
      {
        v13 = *(_DWORD *)(a1 + 8);
        if ( v13 == 7 || v13 == 29 )
        {
          v6 = Src;
          v14 = MmSetPfnListInfo(*((_QWORD *)Src + 1), (unsigned __int64 *)Src + 24, v13 == 29);
        }
        else
        {
          v6 = Src;
          v14 = MmRelocatePfnList(
                  *((_QWORD *)Src + 1),
                  (char *)Src + 192,
                  *((unsigned __int16 *)Src + 2),
                  *((unsigned __int16 *)Src + 3));
        }
        PfnList = v14;
        v10 = 0;
        if ( *(_DWORD *)(a1 + 8) != 22 && v14 >= 0 )
          goto LABEL_10;
        if ( a2 )
          ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
LABEL_9:
        v10 = 24 * (*((_DWORD *)v6 + 2) + 8);
        memmove(*(void **)(a1 + 16), v6, v10);
LABEL_10:
        *a3 = v10;
        goto LABEL_11;
      }
      goto LABEL_23;
    }
LABEL_22:
    PfnList = -1073741306;
    goto LABEL_11;
  }
  PfnList = -1073741821;
LABEL_11:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)PfnList;
}
