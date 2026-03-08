/*
 * XREFs of ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C01B1480
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01C1700 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01DBB90 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  unsigned int j; // esi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  int v13; // ecx
  int v14; // edx

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
    if ( *(__int64 *)PathDescriptor < 0 )
    {
      for ( j = 0; ; ++j )
      {
        v10 = *((_QWORD *)this + 8);
        v11 = v10 ? *(_WORD *)(v10 + 20) : 0;
        if ( j >= v11 )
          break;
        v12 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 4)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 5) )
        {
          v13 = *((_DWORD *)v12 + 7);
          if ( *((_DWORD *)PathDescriptor + 7) == v13 )
            *(_QWORD *)v12 |= 0x2000000000000000uLL;
          v14 = *((_DWORD *)v12 + 6);
          if ( *((_DWORD *)PathDescriptor + 6) == v14 )
            *(_QWORD *)v12 |= 0x4000000000000000uLL;
          if ( *((_DWORD *)PathDescriptor + 7) == v13 && *((_DWORD *)PathDescriptor + 6) == v14 )
            *(_QWORD *)v12 |= 0x8000000000000000uLL;
        }
      }
    }
  }
  return 0LL;
}
