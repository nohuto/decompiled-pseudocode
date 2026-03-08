/*
 * XREFs of HvlQueryMinrootInfo @ 0x14053DCD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HvlQueryMinrootInfo(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int i; // edi
  __int64 v10; // rcx

  if ( a2 >= 0x2298 )
  {
    v5 = 0;
    memset(a1, 0, 0x2298uLL);
    *a1 = KeHypervisorNumprocSpecified;
    a1[1] = KeRootProcSpecified;
    v7 = KeRootProcNumaNodesSpecified;
    a1[2] = KeRootProcNumaNodesSpecified;
    if ( v7 )
    {
      *(_OWORD *)(a1 + 3) = KeRootProcNumaNodes;
      *(_OWORD *)(a1 + 7) = xmmword_140D1F4D0;
      *(_OWORD *)(a1 + 11) = xmmword_140D1F4E0;
      *(_OWORD *)(a1 + 15) = xmmword_140D1F4F0;
      *(_OWORD *)(a1 + 19) = xmmword_140D1F500;
      *(_OWORD *)(a1 + 23) = xmmword_140D1F510;
      *(_OWORD *)(a1 + 27) = xmmword_140D1F520;
      *(_OWORD *)(a1 + 31) = xmmword_140D1F530;
    }
    a1[35] = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
    a1[36] = KeRootProcPerNodeSpecified;
    if ( KeRootProcNumaNodeLpsSpecified )
    {
      v8 = 0;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( KeRootProcNumaNodeLps[2 * i] )
        {
          v10 = 34LL * v8;
          a1[v10 + 38] = i;
          memmove(
            &a1[v10 + 40],
            (const void *)KeRootProcNumaNodeLps[2 * i + 1],
            (unsigned __int64)KeRootProcNumaNodeLps[2 * i] >> 3);
          ++v8;
        }
      }
      a1[37] = v8;
    }
    *a3 = 8856;
  }
  else
  {
    v5 = -1073741584;
    *a3 = 0;
  }
  return v5;
}
