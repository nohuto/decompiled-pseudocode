/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C03BAD88
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01C1B9C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA088 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA164 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000B000 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C006ADA8 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03B72B8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03BAF18 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // bp
  int v3; // r13d
  int v4; // r15d
  unsigned int i; // edi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  _DWORD *v10; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned int j; // ebp
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r12
  char v19; // al
  bool v20; // r11

  IsPrimaryClonePathByModality = 0;
  v3 = -1;
  v4 = -1;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    v10 = (_DWORD *)((char *)a1 + 20);
    if ( i >= v9 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *v10
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v4 = *((_DWORD *)PathDescriptor + 6);
      v3 = *((_DWORD *)PathDescriptor + 46);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  v12 = 0;
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v4 != -1 && IsPrimaryClonePathByModality )
    {
      result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v4);
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( v4 == -1 )
  {
    result = CDS_JOURNAL::_ExtendTopology(this, a1);
LABEL_15:
    v12 = result;
    if ( (int)result < 0 )
      return result;
    return v12;
  }
  if ( !IsPrimaryClonePathByModality )
  {
LABEL_18:
    WdLogSingleEntry5(3LL, *((int *)a1 + 6), (unsigned int)*v10, *((unsigned int *)a1 + 8), this, *((_QWORD *)this + 8));
    return 0LL;
  }
  for ( j = 0; ; ++j )
  {
    v15 = *((_QWORD *)this + 8);
    v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
    if ( j >= v16 )
      break;
    v17 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    v18 = v17;
    if ( v3 == *((_DWORD *)v17 + 46) )
    {
      CCD_TOPOLOGY::IsMatchingSource(v17, (const struct _LUID *)((char *)a1 + 20), v4);
      v19 = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
      CDS_JOURNAL::_FillPathDescriptor(v18, a1, v19, v20, 0LL);
    }
  }
  return v12;
}
