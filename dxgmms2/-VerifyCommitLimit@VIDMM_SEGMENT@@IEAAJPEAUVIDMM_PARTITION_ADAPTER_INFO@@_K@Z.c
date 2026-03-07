__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v3 = *((_QWORD *)this + 27);
  v7 = v3 + a3;
  if ( v3 + a3 > *((_QWORD *)this + 26) || v7 < v3 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7);
      v9[3] = this;
      v9[4] = a3;
      v9[5] = *((_QWORD *)this + 27);
      v10 = *((_QWORD *)this + 26);
      goto LABEL_11;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
      return 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( v8 + a3 <= *((_QWORD *)a2 + 2) && v8 + a3 >= v8 )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
      v9[3] = this;
      v9[4] = a3;
      v9[5] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
      v10 = *((_QWORD *)a2 + 2);
LABEL_11:
      v9[6] = v10;
    }
  }
  return 3221225773LL;
}
