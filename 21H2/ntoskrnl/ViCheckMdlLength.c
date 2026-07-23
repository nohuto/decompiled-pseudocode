/*
 * XREFs of ViCheckMdlLength @ 0x1409CEC54
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViCheckMdlLength(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // eax

  if ( !a3 )
    return 0LL;
  if ( a1 )
  {
    do
    {
      v4 = *((unsigned int *)a1 + 10);
      if ( a2 <= v4 )
        break;
      a1 = (__int64 *)*a1;
      a2 -= v4;
    }
    while ( a1 );
    while ( a1 && a3 )
    {
      v5 = *((_DWORD *)a1 + 10);
      a1 = (__int64 *)*a1;
      v6 = v5 - a2;
      if ( v6 >= a3 )
        v6 = a3;
      a3 -= v6;
      LODWORD(a2) = 0;
    }
  }
  return a3;
}
