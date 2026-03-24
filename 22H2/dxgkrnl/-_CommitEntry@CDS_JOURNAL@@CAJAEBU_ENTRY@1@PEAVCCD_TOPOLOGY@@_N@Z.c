/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0150028
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0150174 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0150390 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02F121C (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000CA54 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000DAE8 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C000DB0C (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C014CDE4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02EB8D4 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02F1678 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // bp
  int v3; // r12d
  unsigned int v4; // r14d
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int j; // ebp
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // r15
  __int64 v20; // r8
  char v21; // r11
  __int64 result; // rax
  _QWORD *v23; // rax

  IsPrimaryClonePathByModality = 0;
  v3 = -1;
  v4 = -1;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    if ( i >= v9 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a1 + 5)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v4 = *((_DWORD *)PathDescriptor + 6);
      v3 = *((_DWORD *)PathDescriptor + 46);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  v11 = 0;
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v4 == -1 || !IsPrimaryClonePathByModality )
    {
LABEL_28:
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v23[3] = *((int *)a1 + 6);
      v23[4] = *((unsigned int *)a1 + 5);
      v23[5] = *((unsigned int *)a1 + 8);
      v23[6] = this;
      v23[7] = *((_QWORD *)this + 8);
      WdLogEvent5_WdWarning(v23);
      return 0LL;
    }
    result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v4);
  }
  else
  {
    if ( v4 != -1 )
    {
      if ( IsPrimaryClonePathByModality )
      {
        for ( j = 0; ; ++j )
        {
          v16 = *((_QWORD *)this + 8);
          v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
          if ( j >= v17 )
            break;
          v18 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
          v19 = v18;
          if ( v3 == *((_DWORD *)v18 + 46) )
          {
            CCD_TOPOLOGY::IsMatchingSource(v18, (const struct _LUID *)((char *)a1 + 20), v4);
            LOBYTE(v20) = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
            CDS_JOURNAL::_FillPathDescriptor(v19, a1, v20, v21, 0LL);
          }
        }
        return v11;
      }
      goto LABEL_28;
    }
    result = CDS_JOURNAL::_ExtendTopology(this, a1);
  }
  v11 = result;
  if ( (int)result >= 0 )
    return v11;
  return result;
}
