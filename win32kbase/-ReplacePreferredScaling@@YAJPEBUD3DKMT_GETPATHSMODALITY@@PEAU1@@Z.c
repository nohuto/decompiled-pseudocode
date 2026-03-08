/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C01913D4
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0191FA8 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018D294 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(const struct D3DKMT_GETPATHSMODALITY *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int i; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rdi

  v2 = a2;
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 20); ++i )
  {
    v5 = v2 + 296LL * i;
    v6 = *(_QWORD *)(v5 + 56);
    if ( (v6 & 0x10000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v6 = *(_QWORD *)(v5 + 56);
    }
    if ( *(_DWORD *)(v5 + 192) == 253 )
    {
      if ( (v6 & 0x1000000000LL) != 0 )
      {
        ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v5 + 56), a2);
      }
      else
      {
        if ( v5 == -72 )
          goto LABEL_14;
        if ( !a1 )
          goto LABEL_14;
        a2 = 0LL;
        if ( !*((_WORD *)a1 + 10) )
          goto LABEL_14;
        while ( 1 )
        {
          v7 = (char *)a1 + 296 * (unsigned int)a2 + 56;
          if ( *((_DWORD *)v7 + 7) == *(_DWORD *)(v5 + 84)
            && *((_DWORD *)v7 + 4) == *(_DWORD *)(v5 + 72)
            && *((_DWORD *)v7 + 5) == *(_DWORD *)(v5 + 76) )
          {
            break;
          }
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= *((unsigned __int16 *)a1 + 10) )
            goto LABEL_14;
        }
        if ( !v7 )
        {
LABEL_14:
          WdLogSingleEntry2(2LL, *(unsigned int *)(v5 + 80));
          return 3221225473LL;
        }
        if ( !_bittest64((const signed __int64 *)v7, 0x2Au) )
          WdLogSingleEntry0(1LL);
        if ( (*(_DWORD *)v7 & 0x10000) == 0 )
          WdLogSingleEntry0(1LL);
        *(_DWORD *)(v5 + 192) = *((_DWORD *)v7 + 34);
        *(_DWORD *)(v5 + 196) = *((_DWORD *)v7 + 35);
        *(_QWORD *)(v5 + 56) |= 0x40000010000uLL;
      }
    }
  }
  return 0LL;
}
