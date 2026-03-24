/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C013A5C0
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C013A4AC (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016BFBC (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000DAE8 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(
        CCD_TOPOLOGY **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r12
  __int64 v6; // rcx
  __int16 v7; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned int i; // edi
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v16; // rax
  SESSION_VIEW *v17; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int j; // ebp
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rdx
  __int64 v26; // rax
  unsigned int v28; // eax
  unsigned int k; // ebp
  __int64 v30; // rax
  unsigned __int16 v31; // cx
  const struct _LUID *v32; // rax
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax

  v5 = a2;
  v6 = *((_QWORD *)*this + 8);
  if ( v6 )
    v7 = *(_WORD *)(v6 + 20);
  else
    v7 = 0;
  if ( !v7 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v6, a2, a3, a4);
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 11);
    if ( v11 )
    {
      for ( i = 0; ; ++i )
      {
        v13 = *((_QWORD *)*this + 8);
        if ( v13 )
          v14 = *(_WORD *)(v13 + 20);
        else
          v14 = 0;
        if ( i >= v14 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v16 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v16 | 0x4000000000000LL;
          if ( (v16 & 0x1000000000LL) != 0 )
          {
            v28 = i | 0xFE5A0000;
            goto LABEL_26;
          }
          if ( v16 >= 0 )
          {
            v28 = i | 0xFE580000;
LABEL_26:
            *((_DWORD *)PathDescriptor + 46) = v28;
            continue;
          }
          v17 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 32);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v17 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v17);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v19 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v11 + 296))(
                      (__int64)PathDescriptor + 16,
                      v19,
                      (__int64)PathDescriptor + 144) )
              {
                v40 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
                v40[3] = *((int *)PathDescriptor + 5);
                v40[4] = *((unsigned int *)PathDescriptor + 4);
                v40[5] = *((unsigned int *)PathDescriptor + 6);
                v40[6] = *this;
                v40[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v40);
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v23 = *((_QWORD *)*this + 8);
                v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
                if ( j >= v24 )
                  break;
                v25 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v26 = *(_QWORD *)v25;
                if ( (*(_QWORD *)v25 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 32) == *((_QWORD *)v25 + 32) )
                {
                  *((_DWORD *)v25 + 46) = i | 0xFE590000;
                  *(_QWORD *)v25 = v26 | 0x4000000000800LL;
                  *((_QWORD *)v25 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( v5 )
          {
            for ( k = i; ; ++k )
            {
              v30 = *((_QWORD *)*this + 8);
              v31 = v30 ? *(_WORD *)(v30 + 20) : 0;
              if ( k >= v31 )
                break;
              v32 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v32 + 2, v32[3].LowPart) )
              {
                *(_QWORD *)v33 |= 0x4000000000000uLL;
                *(_DWORD *)(v33 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdError(0LL, 0x1000000000LL);
            v34[3] = *((int *)PathDescriptor + 5);
            v34[4] = *((unsigned int *)PathDescriptor + 4);
            v34[5] = *((unsigned int *)PathDescriptor + 6);
            v34[6] = *((unsigned int *)PathDescriptor + 7);
            WdLogEvent5_WdError(v34);
          }
        }
      }
    }
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v35[3] = PsGetCurrentProcess(v37, v36, v38, v39);
  v35[4] = *this;
  v35[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v35);
  return 3221225473LL;
}
