__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rdi
  const struct CDS_JOURNAL::_ENTRY *i; // r15
  __int64 v11; // rbx
  const struct CDS_JOURNAL::_ENTRY *v12; // rcx
  bool v13; // r8
  int v14; // eax
  const struct CDS_JOURNAL::_ENTRY *v15; // rcx
  bool v16; // r8
  int v17; // eax
  __int64 v18; // rax
  __int16 v19; // r9
  const struct CDS_JOURNAL::_ENTRY *v20; // r11
  __int16 v21; // r10
  bool IsUnextend; // al
  __int16 v23; // r10
  const struct CDS_JOURNAL::_ENTRY **v24; // r11
  __int16 v25; // cx
  unsigned __int16 v26; // r9
  __int64 v27; // r8
  unsigned __int16 v28; // ax

  v4 = (const struct CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this);
    if ( (_DWORD)v9 == -1073741266 )
    {
      WdLogSingleEntry3(3LL, this, a2, *((_QWORD *)a2 + 8));
      return 0LL;
    }
  }
  i = *v4;
  v11 = 0LL;
  while ( i != (const struct CDS_JOURNAL::_ENTRY *)v4 )
  {
    if ( CDS_JOURNAL::_IsUnextend(i) )
    {
      v14 = CDS_JOURNAL::_CommitEntry(v12, a2, v13);
      v9 = v14;
      if ( v14 < 0 )
      {
LABEL_12:
        WdLogSingleEntry4(2LL, v9, i, a2, *((_QWORD *)a2 + 8));
        return (unsigned int)v9;
      }
    }
    i = *(const struct CDS_JOURNAL::_ENTRY **)i;
  }
  for ( i = *v4; i != (const struct CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CDS_JOURNAL::_ENTRY **)i )
  {
    if ( !CDS_JOURNAL::_IsUnextend(i) )
    {
      v17 = CDS_JOURNAL::_CommitEntry(v15, a2, v16);
      v9 = v17;
      if ( v17 == -1073741789 )
      {
        v18 = *((_QWORD *)a2 + 8);
        if ( v18 )
          v19 = *(_WORD *)(v18 + 20);
        else
          v19 = 0;
        v20 = *v4;
        v21 = 0;
        while ( v20 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
        {
          IsUnextend = CDS_JOURNAL::_IsUnextend(v20);
          v20 = *v24;
          v25 = v23 + 1;
          if ( IsUnextend )
            v25 = v23;
          v21 = v25;
        }
        v26 = v21 + v19;
        if ( a4 )
          *a4 = v26;
        v27 = *((_QWORD *)a2 + 8);
        if ( v27 )
        {
          v11 = *(unsigned __int16 *)(v27 + 22);
          v28 = *(_WORD *)(v27 + 20);
        }
        else
        {
          v28 = 0;
        }
        WdLogSingleEntry5(3LL, a2, v27, v28, v11, v26);
        return 3221225507LL;
      }
      if ( v17 < 0 )
        goto LABEL_12;
    }
  }
  return (unsigned int)v9;
}
