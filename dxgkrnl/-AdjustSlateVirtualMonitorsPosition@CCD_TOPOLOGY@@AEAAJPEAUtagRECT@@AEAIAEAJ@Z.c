__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // r14d
  int v5; // r15d
  unsigned int v6; // edi
  int v7; // r13d
  signed int cx; // ebx
  signed int v9; // r12d
  unsigned int v10; // esi
  struct tagRECT *v11; // rbp
  CCD_TOPOLOGY *v12; // r11
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  char *v16; // rsi
  unsigned int v17; // r12d
  signed int v18; // edi
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbp
  CCD_TOPOLOGY *v22; // rcx
  __int64 v23; // rax
  struct tagRECT v24; // xmm0
  __int64 v25; // rax
  CCD_TOPOLOGY *v26; // rcx
  __int64 v27; // r11
  LONG bottom; // edx
  signed int right; // r8d
  int top; // r8d
  int left; // r8d
  void *v32; // rdi
  unsigned int *v33; // r8
  unsigned int j; // ecx
  __int64 v35; // rax
  unsigned __int64 v37; // rax
  char *v38; // rax
  unsigned int i; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // rbp
  __int64 v42; // rcx
  unsigned __int16 v43; // ax
  CCD_TOPOLOGY *v44; // rcx
  bool IsVirtualSlate; // al
  __int64 v46; // rax
  unsigned __int16 v47; // cx
  __int64 v48; // r8
  UINT v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  signed int v53; // r10d
  __int64 v54; // rcx
  unsigned int v55; // [rsp+20h] [rbp-F8h]
  int v56; // [rsp+24h] [rbp-F4h]
  int v57; // [rsp+28h] [rbp-F0h]
  signed int v58; // [rsp+2Ch] [rbp-ECh]
  signed int v59; // [rsp+30h] [rbp-E8h]
  int v60; // [rsp+30h] [rbp-E8h]
  struct _D3DKMDT_2DREGION v62; // [rsp+40h] [rbp-D8h] BYREF
  struct tagRECT *v63; // [rsp+48h] [rbp-D0h]
  unsigned int v64; // [rsp+50h] [rbp-C8h]
  unsigned int *v65; // [rsp+58h] [rbp-C0h]
  signed int v66; // [rsp+60h] [rbp-B8h]
  signed int v67; // [rsp+64h] [rbp-B4h]
  void *v68; // [rsp+68h] [rbp-B0h]
  int *v69; // [rsp+70h] [rbp-A8h]
  char v70; // [rsp+80h] [rbp-98h] BYREF

  cy = 0x80000000;
  v69 = a4;
  v5 = 0x7FFFFFFF;
  v58 = 0x80000000;
  v6 = 0;
  v56 = 0x7FFFFFFF;
  v7 = 0x7FFFFFFF;
  v57 = 0x7FFFFFFF;
  cx = 0x80000000;
  v65 = a3;
  v9 = 0x80000000;
  v63 = a2;
  v10 = 0;
  v11 = a2;
  v12 = this;
  while ( 1 )
  {
    v13 = *((_QWORD *)v12 + 8);
    if ( v13 )
      v14 = *(_WORD *)(v13 + 20);
    else
      v14 = 0;
    v15 = *((_QWORD *)v12 + 8);
    if ( !v13 )
      v15 = 0LL;
    if ( v6 >= v14 || v10 >= *a3 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(v12, v6) & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !*(_DWORD *)(v27 + 212)
      && !CCD_TOPOLOGY::IsVirtualSlate(v26, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v27) )
    {
      bottom = v11[v10].bottom;
      if ( bottom > cy )
      {
        right = v58;
        cy = v11[v10].bottom;
        if ( v58 < v11[v10].right )
          right = v11[v10].right;
        v58 = right;
      }
      if ( v11[v10].right > cx )
      {
        top = v56;
        cx = v11[v10].right;
        if ( v56 > v11[v10].top )
          top = v11[v10].top;
        v56 = top;
      }
      if ( v11[v10].top < v7 )
      {
        left = v57;
        v7 = v11[v10].top;
        if ( v57 > v11[v10].left )
          left = v11[v10].left;
        v57 = left;
      }
      if ( v11[v10].left < v5 )
      {
        v5 = v11[v10].left;
        if ( v9 < bottom )
          v9 = v11[v10].bottom;
      }
      ++v10;
    }
    v12 = this;
    ++v6;
    a3 = v65;
  }
  v59 = v9;
  v68 = 0LL;
  v16 = &v70;
  if ( v13 && *(_WORD *)(v15 + 20) > 4u )
  {
    v37 = 16LL * *(unsigned __int16 *)(v15 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v15 + 20), 0x10uLL) )
      v37 = -1LL;
    v38 = (char *)operator new[](v37, 0x4B677844u, 256LL);
    v12 = this;
    v16 = v38;
    a3 = v65;
    v68 = v38;
  }
  v55 = 0;
  v17 = 0;
  if ( !*a3 )
  {
    for ( i = 0; ; i = v17 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v12, i);
      v12 = this;
      v41 = PathDescriptor;
      v42 = *((_QWORD *)this + 8);
      v43 = v42 ? *(_WORD *)(v42 + 20) : 0;
      if ( v17 >= v43 )
        break;
      if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v17) )
      {
        if ( !*((_DWORD *)v41 + 53) )
        {
          IsVirtualSlate = CCD_TOPOLOGY::IsVirtualSlate(v44, v41);
          v12 = this;
          if ( IsVirtualSlate )
            break;
        }
      }
      ++v17;
    }
    v46 = *((_QWORD *)v12 + 8);
    if ( v46 )
      v47 = *(_WORD *)(v46 + 20);
    else
      v47 = 0;
    if ( v17 < v47 )
    {
      v62 = 0LL;
      v55 = 1;
      *v65 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v41, 0, &v62);
      cx = v62.cx;
      cy = v62.cy;
      v7 = 0;
      *((_DWORD *)v16 + 1) = 0;
      v5 = 0;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 3) = cy;
      v57 = 0;
      *((_DWORD *)v16 + 2) = cx;
      v56 = 0;
      v58 = cx;
      v59 = cy;
    }
    v11 = v63;
  }
  v64 = 0;
  v18 = v59;
  while ( 1 )
  {
    v19 = *((_QWORD *)v12 + 8);
    v67 = cy;
    v66 = v5;
    v60 = v7;
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( v17 >= v20 )
      break;
    v21 = CCD_TOPOLOGY::GetPathDescriptor(v12, v17);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v17) && !*((_DWORD *)v21 + 53) )
    {
      if ( !CCD_TOPOLOGY::IsVirtualSlate(v22, v21) )
      {
        v11 = v63;
        v23 = v64;
        v12 = this;
        ++v64;
        v24 = v63[v23];
        v25 = 2LL * v55++;
        *(struct tagRECT *)&v16[8 * v25] = v24;
        goto LABEL_18;
      }
      v62 = 0LL;
      ++*v65;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v21, 0, &v62);
      v48 = v62.cy;
      v49 = v62.cx;
      if ( (__int64)(v7 - (unsigned __int64)v62.cy) < -32000 )
      {
        if ( (__int64)(v5 - (unsigned __int64)v62.cx) < -32000 )
        {
          if ( (__int64)(cy + (unsigned __int64)v62.cy) > 32000 )
          {
            if ( v62.cx + (__int64)cx > 32000 )
            {
              WdLogSingleEntry0(1LL);
            }
            else
            {
              v53 = cx;
              v54 = 2LL * v55;
              *(_DWORD *)&v16[8 * v54] = cx;
              cx += v49;
              *(_DWORD *)&v16[8 * v54 + 8] = cx;
              if ( v48 + v56 > cy )
              {
                if ( cy - v48 < -32000 )
                {
                  cy = v48 - 32000;
                  *(_DWORD *)&v16[16 * v55 + 4] = -32000;
                  *(_DWORD *)&v16[16 * v55 + 12] = v48 - 32000;
                  v7 = -32000;
                  v58 = cx;
                }
                else
                {
                  *(_DWORD *)&v16[16 * v55 + 12] = cy;
                  *(_DWORD *)&v16[16 * v55 + 4] = cy - v48;
                  if ( cy - (int)v48 < v7 )
                  {
                    v7 = cy - v48;
                    v57 = v53;
                  }
                }
              }
              else
              {
                *(_DWORD *)&v16[16 * v55 + 4] = v56;
                *(_DWORD *)&v16[16 * v55 + 12] = v48 + v56;
              }
            }
          }
          else
          {
            v52 = 2LL * v55;
            *(_DWORD *)&v16[8 * v52 + 4] = cy;
            cy += v48;
            *(_DWORD *)&v16[8 * v52 + 12] = cy;
            if ( (__int64)(v58 - (unsigned __int64)v49) < v5 )
            {
              if ( (__int64)(v5 + (unsigned __int64)v49) > 32000 )
              {
                *(_DWORD *)&v16[16 * v55 + 8] = 32000;
                v5 = 32000 - v49;
                cx = 32000;
                *(_DWORD *)&v16[16 * v55] = 32000 - v49;
                v18 = cy;
              }
              else
              {
                *(_DWORD *)&v16[16 * v55] = v5;
                *(_DWORD *)&v16[16 * v55 + 8] = v49 + v5;
                if ( (int)(v49 + v5) > cx )
                {
                  cx = v49 + v5;
                  v56 = v67;
                }
              }
            }
            else
            {
              *(_DWORD *)&v16[16 * v55 + 8] = v58;
              *(_DWORD *)&v16[16 * v55] = v58 - v49;
            }
          }
        }
        else
        {
          v51 = 2LL * v55;
          *(_DWORD *)&v16[8 * v51 + 8] = v5;
          v5 -= v49;
          *(_DWORD *)&v16[8 * v51] = v5;
          if ( v18 - v48 < v7 )
          {
            if ( v7 + v48 > 32000 )
            {
              *(_DWORD *)&v16[16 * v55 + 12] = 32000;
              v7 = 32000 - v48;
              v57 = v5;
              *(_DWORD *)&v16[16 * v55 + 4] = 32000 - v48;
              cy = 32000;
            }
            else
            {
              *(_DWORD *)&v16[16 * v55 + 4] = v7;
              *(_DWORD *)&v16[16 * v55 + 12] = v48 + v7;
              if ( (int)v48 + v7 > cy )
              {
                cy = v48 + v7;
                v58 = v66;
              }
            }
          }
          else
          {
            *(_DWORD *)&v16[16 * v55 + 12] = v18;
            *(_DWORD *)&v16[16 * v55 + 4] = v18 - v48;
          }
        }
      }
      else
      {
        v50 = 2LL * v55;
        *(_DWORD *)&v16[8 * v50 + 12] = v7;
        v7 -= v48;
        *(_DWORD *)&v16[8 * v50 + 4] = v7;
        if ( v49 + (__int64)v57 > cx )
        {
          if ( (__int64)(cx - (unsigned __int64)v49) < -32000 )
          {
            *(_DWORD *)&v16[16 * v55] = -32000;
            *(_DWORD *)&v16[16 * v55 + 8] = v49 - 32000;
            cx = v49 - 32000;
            v5 = -32000;
            v56 = v7;
          }
          else
          {
            *(_DWORD *)&v16[16 * v55 + 8] = cx;
            *(_DWORD *)&v16[16 * v55] = cx - v49;
            if ( (int)(cx - v49) < v5 )
            {
              v18 = v60;
              v5 = cx - v49;
            }
          }
        }
        else
        {
          *(_DWORD *)&v16[16 * v55] = v57;
          *(_DWORD *)&v16[16 * v55 + 8] = v49 + v57;
        }
      }
      ++v55;
      v12 = this;
    }
    v11 = v63;
LABEL_18:
    ++v17;
  }
  v32 = v68;
  if ( cx > *v69 )
    *v69 = cx;
  v33 = v65;
  for ( j = 0; j < *v33; v11[v35] = *(struct tagRECT *)&v16[16 * v35] )
    v35 = j++;
  if ( v32 )
    operator delete(v32);
  return 0LL;
}
