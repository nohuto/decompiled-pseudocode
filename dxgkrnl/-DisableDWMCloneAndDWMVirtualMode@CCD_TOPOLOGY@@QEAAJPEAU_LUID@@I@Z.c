/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C03B67E0
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E4780 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C03BA400 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(CCD_TOPOLOGY *this, struct _LUID *a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v10; // rcx
  int v11; // ebp
  unsigned int j; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  unsigned int k; // ebx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 20);
    else
      v8 = 0;
    if ( i >= v8 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, a2, a3) )
      break;
  }
  v11 = *(_DWORD *)(v10 + 184);
  if ( v11 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( j >= v14 )
      break;
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v15 + 46) == v11 && (*((_DWORD *)v15 + 4) != a2->LowPart || *((_DWORD *)v15 + 5) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v17 = *((_QWORD *)this + 8);
    v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
    if ( k >= v18 )
      break;
    v19 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v20 = v19;
    if ( *((_DWORD *)v19 + 46) == v11 )
    {
      *((_DWORD *)v19 + 6) = a3;
      *((_BYTE *)v19 + 129) = 0;
      v21 = *(_QWORD *)v19;
      if ( (v21 & 0x20100) == 0x20100 )
      {
        if ( (v21 & 0x200) == 0 || ((*((_DWORD *)v20 + 33) - 2) & 0xFFFFFFFD) != 0 )
        {
          v22 = *((_DWORD *)v20 + 39);
          v23 = *((_DWORD *)v20 + 38);
        }
        else
        {
          v22 = *((_DWORD *)v20 + 38);
          v23 = *((_DWORD *)v20 + 39);
        }
        *((_DWORD *)v20 + 24) = v23;
        *((_DWORD *)v20 + 25) = v22;
        *((_QWORD *)v20 + 1) |= 0x100uLL;
      }
    }
  }
  return 0LL;
}
