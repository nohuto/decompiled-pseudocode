/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C478C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01C4704 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01C2C00 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r13
  _DWORD *v3; // rbx
  char v4; // r15
  unsigned int v6; // r12d
  UINT v7; // esi
  UINT cy; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v10; // r8d
  _DWORD *v11; // rcx
  int v12; // ecx
  unsigned int v14; // r12d
  UINT cx; // r13d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rbx
  struct _LUID *v18; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v19; // r11
  int IsVirtualizationDisabledForTarget; // eax
  unsigned int v21; // r15d
  __int64 v22; // r12
  unsigned int v23; // ebx
  int *v24; // rax
  int *v25; // rcx
  signed int v26; // r9d
  __int64 v27; // r8
  __int128 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  UINT v35; // edx
  UINT v36; // eax
  struct _D3DKMDT_2DREGION v37; // [rsp+98h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  v4 = 1;
  v6 = 0;
  v37.cx = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v7 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_35;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( *((_DWORD *)PathDescriptor + 46) == v37.cx )
      break;
LABEL_12:
    if ( ++v6 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      if ( !v2 )
        return 0LL;
LABEL_35:
      v22 = 0x3FFFFFFF00000001LL;
      v23 = 0;
      if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
        goto LABEL_62;
      cx = v37.cx;
      while ( 1 )
      {
        v24 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v23);
        v25 = v24;
        if ( v24[46] == cx )
        {
          if ( v4 )
          {
            v26 = v24[40];
            v27 = v24[41];
            v28 = v24[38] * (__int64)v24[39] - v27 * v26;
            v29 = (*((_QWORD *)&v28 + 1) ^ v28) - *((_QWORD *)&v28 + 1);
            if ( v29 < v22 )
            {
              v7 = v26;
              cy = v27;
              v22 = v29;
            }
          }
          else
          {
            v35 = v24[40];
            if ( v24[38] == v35 )
            {
              v36 = v24[41];
              if ( v25[39] == v36 )
              {
                v7 = v35;
                cy = v36;
                goto LABEL_42;
              }
            }
          }
        }
        if ( ++v23 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_42;
      }
    }
  }
  if ( (*(_QWORD *)PathDescriptor & 0x20000LL) == 0 )
    goto LABEL_20;
  v10 = *((_DWORD *)PathDescriptor + 38);
  v11 = (_DWORD *)((char *)PathDescriptor + 152);
  if ( v3 )
    v11 = v3;
  v3 = v11;
  if ( v10 )
  {
    v12 = *((_DWORD *)PathDescriptor + 39);
    if ( v12 )
    {
      if ( *v3 == v10 && v3[1] == v12 )
      {
        if ( (*(_QWORD *)PathDescriptor & 0x20000000000000LL) != 0 )
        {
          if ( v10 == *((_DWORD *)PathDescriptor + 40) && v12 == *((_DWORD *)PathDescriptor + 41) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_12;
      }
    }
  }
  *((_DWORD *)PathDescriptor + 65) |= 0x400u;
LABEL_20:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_62;
  cx = v37.cx;
  while ( 2 )
  {
    v16 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    v17 = v16;
    if ( *((_DWORD *)v16 + 46) != cx )
    {
LABEL_29:
      if ( ++v14 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v37 = 0LL;
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v16, 1, &v37);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        v18[2],
                                        v18[3].HighPart,
                                        (__int64)v19,
                                        v19,
                                        v19,
                                        (__int64)v19);
  v21 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    WdLogSingleEntry1(2LL, IsVirtualizationDisabledForTarget);
    return v21;
  }
  if ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v17 + 22)) )
  {
    if ( v37.cx < v7 )
    {
      v7 = v37.cx;
      *((_DWORD *)v17 + 65) |= 0x4000u;
    }
    if ( v37.cy < cy )
    {
      cy = v37.cy;
      *((_DWORD *)v17 + 65) |= 0x4000u;
    }
    goto LABEL_29;
  }
  if ( (*(_DWORD *)v17 & 0x20000) != 0 )
  {
    v7 = *((_DWORD *)v17 + 38);
    cy = *((_DWORD *)v17 + 39);
  }
  else
  {
    v7 = v37.cx;
    cy = v37.cy;
  }
LABEL_42:
  if ( !v7 || !cy || v7 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_62;
  v30 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v31 = CCD_TOPOLOGY::GetPathDescriptor(this, v30);
    v32 = v31;
    if ( *((_DWORD *)v31 + 46) != cx
      || (v33 = *(_QWORD *)v31, (*(_QWORD *)v31 & 0x20000LL) != 0)
      && *((_DWORD *)v31 + 38) == v7
      && *((_DWORD *)v31 + 39) == cy )
    {
LABEL_54:
      if ( ++v30 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v31 + 2) & 0x20000) == 0 )
  {
    v34 = *((_QWORD *)v31 + 31);
    *((_DWORD *)v32 + 38) = v7;
    *((_DWORD *)v32 + 39) = cy;
    *(_QWORD *)v32 = v33 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v34 )
    {
      *(_DWORD *)(v34 + 172) = v7;
      *(_DWORD *)(*((_QWORD *)v32 + 31) + 176LL) = cy;
    }
    goto LABEL_54;
  }
  if ( (*(_QWORD *)v31 & 0x20000LL) == 0 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)v32 + 65) |= 0x80000000;
LABEL_62:
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), v7, cy);
  return 3221225473LL;
}
