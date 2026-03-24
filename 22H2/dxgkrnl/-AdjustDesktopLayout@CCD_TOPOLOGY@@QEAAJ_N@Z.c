/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C013CF0C
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0144C54 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02ED6D8 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000CA54 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C013F330 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C014FACC (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01650FC (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned int j; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  struct tagRECT *v18; // r12
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct tagRECT *v22; // rbx
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // ebx
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // rdi
  __int64 v35; // rcx
  unsigned int v36; // r14d
  __int64 v37; // rdx
  _DWORD *v38; // rax
  LONG top; // r13d
  LONG left; // r14d
  UINT v41; // r12d
  __int64 cy; // rcx
  struct _D3DKMDT_2DREGION v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  UINT v50; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // rdi
  CCD_TOPOLOGY *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  UINT cx; // edx
  __int64 v58; // rax
  __int64 v59; // r11
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int16 v65; // cx
  SIZE_T v66; // rax
  struct tagRECT *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // ecx
  int v74; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  char v79; // [rsp+28h] [rbp-59h]
  int v80; // [rsp+2Ch] [rbp-55h] BYREF
  unsigned int v81; // [rsp+30h] [rbp-51h] BYREF
  struct _D3DKMDT_2DREGION v82; // [rsp+38h] [rbp-49h] BYREF
  struct _D3DKMDT_2DREGION v83; // [rsp+40h] [rbp-41h] BYREF
  __int64 v84; // [rsp+48h] [rbp-39h]
  struct tagRECT *v85; // [rsp+50h] [rbp-31h]
  __int64 v86; // [rsp+58h] [rbp-29h]
  struct tagRECT v87[4]; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  v79 = a2;
  v80 = 0;
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( i >= v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v48, v47);
        *(_QWORD *)(v58 + 24) = 4941LL;
        WdLogEvent5_WdAssertion(v58);
      }
      v83 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v83);
      v49 = *((_QWORD *)PathDescriptor + 28);
      if ( v49 )
      {
        *(_QWORD *)(v49 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 28) + 72LL) |= 0x20u;
      }
      v50 = v80;
      a2 = v83.cx + *((_DWORD *)PathDescriptor + 36);
      if ( (int)a2 > v80 )
        v50 = v83.cx + *((_DWORD *)PathDescriptor + 36);
      v80 = v50;
    }
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(unsigned __int16 *)(v10 + 20) : 0LL;
    if ( j >= (unsigned __int16)v11 )
      break;
    v51 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v51 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v51 + 36) = v80;
      v60 = *((_DWORD *)v51 + 33);
      *((_DWORD *)v51 + 37) = 0;
      *(_QWORD *)v51 = v59 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v60) != 1 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v62, v61);
        *(_QWORD *)(v63 + 24) = 4986LL;
        WdLogEvent5_WdAssertion(v63);
      }
      v83 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v51, 0, &v83);
      v64 = *((_QWORD *)v51 + 28);
      if ( v64 )
      {
        *(_DWORD *)(v64 + 76) = v80;
        *(_DWORD *)(*((_QWORD *)v51 + 28) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v51 + 28) + 72LL) |= 0x20u;
      }
      v80 += v83.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v11, a2, a3, a4);
  if ( !Current )
    return 0LL;
  v13 = *((_QWORD *)Current + 11);
  if ( !v13 )
    return 0LL;
  v81 = 0;
  v14 = -1;
  memset(v87, 0, sizeof(v87));
  v17 = *((_QWORD *)this + 8);
  v18 = v87;
  v85 = v87;
  v83 = 0LL;
  if ( v17 )
    v19 = *(_WORD *)(v17 + 20);
  else
    v19 = 0;
  if ( v19 > 4u )
  {
    if ( v17 )
      v65 = *(_WORD *)(v17 + 20);
    else
      v65 = 0;
    v66 = 16LL * v65;
    if ( !is_mul_ok(v65, 0x10uLL) )
      v66 = -1LL;
    v67 = (struct tagRECT *)operator new[](v66, 0x4B677844u, PagedPool);
    v83 = (struct _D3DKMDT_2DREGION)v67;
    v22 = v67;
    if ( !v67 )
    {
      v69 = WdLogNewEntry5_WdError(v68, v15);
LABEL_89:
      WdLogEvent5_WdError(v69);
      LODWORD(v29) = -1073741801;
      goto LABEL_91;
    }
    v18 = v67;
    v85 = v67;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)this + 8);
    v21 = v20 ? *(unsigned __int16 *)(v20 + 20) : 0LL;
    if ( v4 >= (unsigned __int16)v21 )
      break;
    v52 = CCD_TOPOLOGY::GetPathDescriptor(this, v4);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v4)
      && !*((_DWORD *)v52 + 53)
      && (v79 || !CCD_TOPOLOGY::IsVirtualSlate(v53, v52)) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v52 + 33)) != 1 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v55, v54);
        *(_QWORD *)(v70 + 24) = 5056LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v82 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v52, 0, &v82);
      cx = v82.cx;
      v18[v81].left = *((_DWORD *)v52 + 36);
      v18[v81].top = *((_DWORD *)v52 + 37);
      v18[v81].right = *((_DWORD *)v52 + 36) + cx;
      v15 = *((_DWORD *)v52 + 37) + v82.cy;
      v18[v81].bottom = v15;
      if ( v14 == -1 && !*((_DWORD *)v52 + 36) && !*((_DWORD *)v52 + 37) )
        v14 = v81;
      ++v81;
    }
    ++v4;
  }
  v22 = (struct tagRECT *)v83;
  if ( v14 == -1 )
  {
    v71 = WdLogNewEntry5_WdWarning(v21, v15, v16);
    WdLogEvent5_WdWarning(v71);
    v23 = 0;
    v14 = 0;
  }
  else
  {
    v23 = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v13 + 320))(v18, v81, v14) )
  {
    v69 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v69 + 24) = *((_QWORD *)this + 8);
    goto LABEL_89;
  }
  v80 = 0;
  if ( v79 || (v26 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v18, &v81, &v80), v29 = v26, v26 >= 0) )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = *((_QWORD *)this + 8);
      v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
      if ( v23 >= v32 )
        break;
      v33 = CCD_TOPOLOGY::GetPathDescriptor(this, v23);
      v34 = v33;
      if ( *((_DWORD *)v33 + 53) )
      {
        v73 = v80;
        HIDWORD(v86) = 0;
        v74 = *((_DWORD *)v33 + 24);
        *(_QWORD *)v33 |= 0x800uLL;
        LODWORD(v86) = v73;
        *((_QWORD *)v33 + 18) = v86;
        *((_DWORD *)v33 + 39) = *((_DWORD *)v33 + 25);
        *((_DWORD *)v33 + 38) = v74;
        v80 += v74;
      }
      else
      {
        v35 = *((_QWORD *)this + 8);
        v36 = 0;
        v37 = *(unsigned __int16 *)(v35 + 20);
        if ( *(_WORD *)(v35 + 20) )
        {
          v38 = (_DWORD *)(v35 + 232);
          while ( *v38 != *(_DWORD *)(272LL * v23 + v35 + 232) )
          {
            ++v36;
            v38 += 68;
            if ( v36 >= (unsigned int)v37 )
              goto LABEL_97;
          }
        }
        else
        {
LABEL_97:
          v36 = -559038737;
        }
        if ( v36 == v23 )
        {
          top = v18[v30].top;
          left = v18[v30].left;
          v41 = v18[v30].right - left;
          cy = (unsigned int)(v85[v30].bottom - top);
          v82 = (struct _D3DKMDT_2DREGION)__PAIR64__(cy, v41);
          ++v30;
          v43.cy = cy;
        }
        else
        {
          v84 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v36) + 18);
          v75 = CCD_TOPOLOGY::GetPathDescriptor(this, v36);
          top = HIDWORD(v84);
          left = v84;
          v43 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v75 + 19);
          v82 = v43;
          cy = v43.cy;
          v41 = v43.cx;
        }
        LODWORD(v84) = cy;
        if ( *((_QWORD *)v34 + 19) != __PAIR64__(v43.cy, v41) )
        {
          v76 = WdLogNewEntry5_WdAssertion(cy, v37);
          WdLogEvent5_WdAssertion(v76);
        }
        if ( *((_DWORD *)v34 + 36) != left )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v37);
          v77[3] = v23;
          v77[4] = *((int *)v34 + 36);
          cy = left;
          v77[5] = left;
        }
        *((_DWORD *)v34 + 36) = left;
        if ( *((_DWORD *)v34 + 37) != top )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v37);
          v78[3] = v23;
          v78[4] = *((int *)v34 + 37);
          v78[5] = top;
        }
        *(_QWORD *)v34 |= 0x800uLL;
        v44 = *((_QWORD *)v34 + 28);
        *((_DWORD *)v34 + 37) = top;
        if ( v44 )
        {
          *(_QWORD *)(v44 + 76) = *((_QWORD *)v34 + 18);
          v45 = v84;
          *(_DWORD *)(*((_QWORD *)v34 + 28) + 172LL) = v41;
          *(_DWORD *)(*((_QWORD *)v34 + 28) + 176LL) = v45;
          *(_DWORD *)(*((_QWORD *)v34 + 28) + 72LL) |= 0x180020u;
        }
        v18 = v85;
      }
      ++v23;
    }
    if ( v83 )
      operator delete[](*(void **)&v83);
    return 0LL;
  }
  v72 = WdLogNewEntry5_WdError(v28, v27);
  *(_QWORD *)(v72 + 24) = *((_QWORD *)this + 8);
  *(_QWORD *)(v72 + 32) = v29;
  WdLogEvent5_WdError(v72);
LABEL_91:
  if ( v22 )
    operator delete[](v22);
  return (unsigned int)v29;
}
