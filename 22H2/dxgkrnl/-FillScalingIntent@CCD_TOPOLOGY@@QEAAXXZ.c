/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016C4BC
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C016CCBC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BE948 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BEA24 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     EnforceDriverModelScalingPolicy @ 0x1C016C3B0 (EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C016D5A0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C019F020 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
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
          DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
        else
          *((_DWORD *)PathDescriptor + 35) = v6;
      }
      EnforceDriverModelScalingPolicy((struct _LUID *)PathDescriptor + 2, (__int64)PathDescriptor + 140);
    }
    else
    {
      if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) != 0
        && (*((_DWORD *)PathDescriptor + 34) == 2
         || *((_DWORD *)PathDescriptor + 34) == 3
         || (unsigned int)(*((_DWORD *)PathDescriptor + 34) - 4) <= 1) )
      {
        *((_DWORD *)PathDescriptor + 35) = *((_DWORD *)PathDescriptor + 34);
        EnforceDriverModelScalingPolicy((struct _LUID *)PathDescriptor + 2, (__int64)PathDescriptor + 140);
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
      }
      *(_QWORD *)PathDescriptor |= 0x10000uLL;
    }
  }
}
