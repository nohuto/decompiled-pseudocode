__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned int i; // edi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v12; // rax
  unsigned int v13; // eax
  SESSION_VIEW *v15; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v17; // rdx
  unsigned int j; // ebp
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rdx
  __int64 v22; // rax
  unsigned int k; // ebp
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct _LUID *v26; // rax
  __int64 v27; // r9
  CCD_TOPOLOGY *v28; // rdi
  __int64 v29; // rbx
  __int64 CurrentProcess; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( !v4 || !*(_WORD *)(v4 + 20) )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v7 = *((_QWORD *)Current + 11);
    if ( v7 )
    {
      for ( i = 0; ; ++i )
      {
        v9 = *((_QWORD *)*this + 8);
        if ( v9 )
          v10 = *(_WORD *)(v9 + 20);
        else
          v10 = 0;
        if ( i >= v10 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v12 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v12 | 0x4000000000000LL;
          if ( (v12 & 0x1000000000LL) != 0 )
          {
            v13 = i | 0xFE5A0000;
            goto LABEL_13;
          }
          if ( v12 >= 0 )
          {
            v13 = i | 0xFE580000;
LABEL_13:
            *((_DWORD *)PathDescriptor + 46) = v13;
            continue;
          }
          v15 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 35);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v15 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v15);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v17 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v7 + 296))(
                      (__int64)PathDescriptor + 16,
                      v17,
                      (__int64)PathDescriptor + 144) )
                WdLogSingleEntry5(
                  2LL,
                  *((int *)PathDescriptor + 5),
                  *((unsigned int *)PathDescriptor + 4),
                  *((unsigned int *)PathDescriptor + 6),
                  *this,
                  *((_QWORD *)*this + 8));
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v19 = *((_QWORD *)*this + 8);
                v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
                if ( j >= v20 )
                  break;
                v21 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v22 = *(_QWORD *)v21;
                if ( (*(_QWORD *)v21 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 35) == *((_QWORD *)v21 + 35) )
                {
                  *((_DWORD *)v21 + 46) = i | 0xFE590000;
                  *(_QWORD *)v21 = v22 | 0x4000000000800LL;
                  *((_QWORD *)v21 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v24 = *((_QWORD *)*this + 8);
              v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
              if ( k >= v25 )
                break;
              v26 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v26 + 2, v26[3].LowPart) )
              {
                *(_QWORD *)v27 |= 0x4000000000000uLL;
                *(_DWORD *)(v27 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((int *)PathDescriptor + 5),
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7));
          }
        }
      }
    }
  }
  v28 = *this;
  v29 = *((_QWORD *)*this + 8);
  CurrentProcess = PsGetCurrentProcess(v6);
  WdLogSingleEntry3(2LL, CurrentProcess, v28, v29);
  return 3221225473LL;
}
