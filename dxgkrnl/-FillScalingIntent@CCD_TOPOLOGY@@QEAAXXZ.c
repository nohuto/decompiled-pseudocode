/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01C538C
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA088 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA164 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C01C5434 (EnforceDriverModelScalingPolicy.c)
 */

void __fastcall CCD_TOPOLOGY::FillScalingIntent(CCD_TOPOLOGY *this)
{
  unsigned int i; // esi
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v6; // eax
  int v7; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_QWORD *)PathDescriptor & 0x10000LL) != 0 )
    {
      v6 = *((_DWORD *)PathDescriptor + 34);
      v7 = *((_DWORD *)PathDescriptor + 35);
      if ( v6 != v7 && (unsigned int)(v7 - 4) <= 1 )
      {
        if ( v6 == 1 )
          DxgkGetAdapterDefaultScaling(
            (struct _LUID *)PathDescriptor + 2,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
        else
          *((_DWORD *)PathDescriptor + 35) = v6;
      }
      EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16);
    }
    else
    {
      if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) != 0
        && (*((_DWORD *)PathDescriptor + 34) == 2
         || *((_DWORD *)PathDescriptor + 34) == 3
         || (unsigned int)(*((_DWORD *)PathDescriptor + 34) - 4) <= 1) )
      {
        *((_DWORD *)PathDescriptor + 35) = *((_DWORD *)PathDescriptor + 34);
        EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16);
      }
      else
      {
        DxgkGetAdapterDefaultScaling(
          (struct _LUID *)PathDescriptor + 2,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
      }
      *(_QWORD *)PathDescriptor |= 0x10000uLL;
    }
  }
}
