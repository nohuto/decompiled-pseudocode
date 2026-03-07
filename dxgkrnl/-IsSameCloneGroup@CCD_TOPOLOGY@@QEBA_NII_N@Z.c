bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r9

  v4 = 0LL;
  v5 = a3;
  v7 = a2;
  if ( !*((_QWORD *)this + 8) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)this + 8);
  if ( !v9 )
    goto LABEL_15;
  v10 = *(unsigned __int16 *)(v9 + 20);
  if ( (unsigned int)v7 >= v10 || (unsigned int)v5 >= v10 )
  {
    v4 = *(unsigned __int16 *)(v9 + 20);
LABEL_15:
    WdLogSingleEntry5(1LL, v7, v5, this, v9, v4);
    return 0;
  }
  v11 = 296 * v7;
  v12 = 296 * v5;
  if ( !a4 )
    return *(_DWORD *)(v9 + v11 + 240) == *(_DWORD *)(v9 + v12 + 240);
  if ( !CCD_TOPOLOGY::IsMatchingSource(
          (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v11 + v9 + 56),
          (const struct _LUID *)(v12 + v9 + 72),
          *(_DWORD *)(v9 + v12 + 80)) )
    return 0;
  if ( *(_DWORD *)(v13 + v11 + 240) != *(_DWORD *)(v13 + v12 + 240) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + v11 + 84) == *(_DWORD *)(*((_QWORD *)this + 8) + v12 + 84) )
    WdLogSingleEntry0(1LL);
  return 1;
}
