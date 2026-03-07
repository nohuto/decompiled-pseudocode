__int64 __fastcall CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  unsigned int j; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // cx
  unsigned int m; // ebx
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v13; // rsi
  __int64 v14; // r15
  unsigned int k; // edi
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // r8
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // rdx

  for ( i = 0; ; ++i )
  {
LABEL_2:
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      v4 = *(_WORD *)(v3 + 20);
    else
      v4 = 0;
    if ( i >= v4 )
    {
      for ( j = 0; ; ++j )
      {
        v6 = *((_QWORD *)this + 8);
        if ( v6 )
          v7 = *(_WORD *)(v6 + 20);
        else
          v7 = 0;
        if ( j >= v7 )
          goto LABEL_9;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        v19 = PathDescriptor;
        if ( !*((_BYTE *)PathDescriptor + 129) )
        {
          v22 = *(_QWORD *)PathDescriptor;
          if ( (*(_QWORD *)PathDescriptor & 0x20100LL) == 0x20100 )
          {
            if ( (v22 & 0x200) == 0 || ((*((_DWORD *)PathDescriptor + 33) - 2) & 0xFFFFFFFD) != 0 )
            {
              v23 = *((_DWORD *)PathDescriptor + 38);
              if ( *((_DWORD *)PathDescriptor + 24) != v23
                || *((_DWORD *)PathDescriptor + 25) != *((_DWORD *)PathDescriptor + 39) )
              {
                v24 = *((_DWORD *)PathDescriptor + 39);
                v25 = v22 & 0xFFFFFFFFFF7DFF78uLL;
                goto LABEL_44;
              }
            }
            else
            {
              v23 = *((_DWORD *)PathDescriptor + 39);
              if ( *((_DWORD *)PathDescriptor + 24) != v23
                || *((_DWORD *)PathDescriptor + 25) != *((_DWORD *)PathDescriptor + 38) )
              {
                v24 = *((_DWORD *)PathDescriptor + 38);
                v25 = v22 & 0xFFFFFFFFFF7FFFFFuLL;
LABEL_44:
                *((_QWORD *)v19 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
                *(_QWORD *)v19 = v25;
                *((_DWORD *)v19 + 25) = v24;
                *((_DWORD *)v19 + 24) = v23;
                WdLogSingleEntry2(3LL, *((unsigned int *)v19 + 7), *((_QWORD *)v19 + 2));
                continue;
              }
            }
          }
        }
      }
    }
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v13 = v12;
    if ( (*(_QWORD *)v12 & 0x8000000000000LL) != 0 )
      break;
  }
  v14 = *((unsigned int *)v12 + 46);
  for ( k = i + 1; ; ++k )
  {
    v16 = *((_QWORD *)this + 8);
    if ( v16 )
      v17 = *(_WORD *)(v16 + 20);
    else
      v17 = 0;
    if ( k >= v17 )
    {
      ++i;
      goto LABEL_2;
    }
    v21 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    if ( *((_DWORD *)v21 + 46) == (_DWORD)v14 )
    {
      *(_QWORD *)v21 &= ~0x8000000000000uLL;
      if ( ((*((_BYTE *)v21 + 129) ^ *((_BYTE *)v13 + 129)) & 3) != 0 )
      {
        WdLogSingleEntry3(3LL, i, k, v14);
        goto LABEL_9;
      }
      if ( !*((_BYTE *)v13 + 129)
        && (*((_DWORD *)v13 + 4) != *((_DWORD *)v21 + 4) || *((_DWORD *)v13 + 5) != *((_DWORD *)v21 + 5)) )
      {
        break;
      }
    }
  }
  WdLogSingleEntry4(3LL, i, *((_QWORD *)v13 + 2), k, *((_QWORD *)v21 + 2));
LABEL_9:
  for ( m = 0; ; ++m )
  {
    v9 = *((_QWORD *)this + 8);
    v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
    if ( m >= v10 )
      break;
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, m);
    *(_QWORD *)v11 |= 0x8000000000000uLL;
  }
  return 0LL;
}
