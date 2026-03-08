/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01C2790
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03B80A4 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000806C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000B000 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01C2C00 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C01C2C34 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01C30A0 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, char a2)
{
  unsigned int v2; // r14d
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  unsigned int j; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r12
  unsigned int v12; // edi
  __int64 v13; // rcx
  struct tagRECT *v14; // r13
  unsigned int k; // r15d
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  void *v18; // rbx
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // r15d
  int v22; // ebx
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rax
  __int64 v26; // r9
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // rax
  LONG left; // r12d
  UINT v33; // r14d
  LONG top; // r13d
  __int64 cy; // rcx
  struct _D3DKMDT_2DREGION v36; // rax
  __int64 v37; // rcx
  int v38; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v40; // rcx
  UINT v41; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // r14
  CCD_TOPOLOGY *v44; // rcx
  int v45; // r11d
  UINT cx; // edx
  __int64 v48; // r11
  unsigned int v49; // ecx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ecx
  int v54; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  int v59; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-51h] BYREF
  struct _D3DKMDT_2DREGION v61; // [rsp+68h] [rbp-49h] BYREF
  struct _D3DKMDT_2DREGION v62; // [rsp+70h] [rbp-41h] BYREF
  __int64 v63; // [rsp+78h] [rbp-39h]
  struct tagRECT *v64; // [rsp+80h] [rbp-31h]
  __int64 v65; // [rsp+88h] [rbp-29h]
  struct tagRECT v66[4]; // [rsp+98h] [rbp-19h] BYREF

  v2 = 0;
  v59 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        WdLogSingleEntry1(1LL, 5227LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5227LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v62 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v62);
      v40 = *((_QWORD *)PathDescriptor + 31);
      if ( v40 )
      {
        *(_QWORD *)(v40 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 31) + 72LL) |= 0x20u;
      }
      v41 = v59;
      if ( (signed int)(v62.cx + *((_DWORD *)PathDescriptor + 36)) > v59 )
        v41 = v62.cx + *((_DWORD *)PathDescriptor + 36);
      v59 = v41;
    }
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(unsigned __int16 *)(v8 + 20) : 0LL;
    if ( j >= (unsigned __int16)v9 )
      break;
    v42 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v42 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v42 + 36) = v59;
      v49 = *((_DWORD *)v42 + 33);
      *((_DWORD *)v42 + 37) = 0;
      *(_QWORD *)v42 = v48 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v49) != 1 )
      {
        WdLogSingleEntry1(1LL, 5272LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5272LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v62 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v42, 0, &v62);
      v50 = *((_QWORD *)v42 + 31);
      if ( v50 )
      {
        *(_DWORD *)(v50 + 76) = v59;
        *(_DWORD *)(*((_QWORD *)v42 + 31) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v42 + 31) + 72LL) |= 0x20u;
      }
      v59 += v62.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
    return 0LL;
  v11 = *((_QWORD *)Current + 11);
  if ( !v11 )
    return 0LL;
  v60 = 0;
  v12 = -1;
  memset(v66, 0, sizeof(v66));
  v13 = *((_QWORD *)this + 8);
  v14 = v66;
  v64 = v66;
  v62 = 0LL;
  if ( v13 && *(_WORD *)(v13 + 20) > 4u )
  {
    v51 = 16LL * *(unsigned __int16 *)(v13 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v13 + 20), 0x10uLL) )
      v51 = -1LL;
    v52 = operator new[](v51, 0x4B677844u, 256LL);
    v62 = (struct _D3DKMDT_2DREGION)v52;
    v18 = (void *)v52;
    if ( !v52 )
    {
      WdLogSingleEntry0(2LL);
LABEL_84:
      v20 = -1073741801;
      goto LABEL_86;
    }
    v14 = (struct tagRECT *)v52;
    v64 = (struct tagRECT *)v52;
  }
  for ( k = 0; ; ++k )
  {
    v16 = *((_QWORD *)this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( k >= v17 )
      break;
    v43 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k)
      && !*((_DWORD *)v43 + 53)
      && (a2 || !CCD_TOPOLOGY::IsVirtualSlate(v44, v43)) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v43 + 33)) != 1 )
      {
        WdLogSingleEntry1(1LL, 5342LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5342LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v61 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v61);
      cx = v61.cx;
      v14[v60].left = *((_DWORD *)v43 + 36);
      v14[v60].top = *((_DWORD *)v43 + 37);
      v14[v60].right = *((_DWORD *)v43 + 36) + cx;
      v14[v60].bottom = *((_DWORD *)v43 + 37) + v61.cy;
      if ( v12 == -1 && *((_DWORD *)v43 + 36) == v45 && *((_DWORD *)v43 + 37) == v45 )
        v12 = v60;
      ++v60;
    }
    v2 = 0;
  }
  v18 = (void *)v62;
  if ( v12 == -1 )
  {
    WdLogSingleEntry0(3LL);
    v12 = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v11 + 320))(v14, v60, v12) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 8));
    goto LABEL_84;
  }
  v59 = 0;
  if ( a2 || (v19 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v14, &v60, &v59), v20 = v19, v19 >= 0) )
  {
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = *((_QWORD *)this + 8);
      v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
      if ( v21 >= v24 )
        break;
      v25 = CCD_TOPOLOGY::GetPathDescriptor(this, v21);
      v27 = v25;
      if ( *((_DWORD *)v25 + 53) )
      {
        v53 = v59;
        v54 = *((_DWORD *)v25 + 24);
        *(_QWORD *)v25 |= 0x800uLL;
        v65 = v53;
        *((_QWORD *)v25 + 18) = v53;
        *((_DWORD *)v25 + 39) = *((_DWORD *)v25 + 25);
        *((_DWORD *)v25 + 38) = v54;
        v59 += v54;
      }
      else
      {
        v28 = *((_QWORD *)this + 8);
        v29 = *(unsigned __int16 *)(v28 + 20);
        v30 = *(unsigned int *)(296LL * v21 + v28 + 240);
        if ( *(_WORD *)(v28 + 20) )
        {
          v31 = (_DWORD *)(v28 + 240);
          while ( *v31 != (_DWORD)v30 )
          {
            ++v2;
            v31 += 74;
            if ( v2 >= (unsigned int)v29 )
              goto LABEL_92;
          }
        }
        else
        {
LABEL_92:
          v2 = -559038737;
        }
        if ( v2 == v21 )
        {
          left = v14[v22].left;
          v33 = v64[v22].right - left;
          top = v14[v22].top;
          cy = (unsigned int)(v64[v22++].bottom - top);
          v61 = (struct _D3DKMDT_2DREGION)__PAIR64__(cy, v33);
          v36.cy = cy;
        }
        else
        {
          v63 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v2) + 18);
          v55 = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
          top = HIDWORD(v63);
          left = v63;
          v36 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v55 + 19);
          v61 = v36;
          cy = v36.cy;
          v33 = v36.cx;
        }
        LODWORD(v63) = cy;
        if ( *((_QWORD *)v27 + 19) != __PAIR64__(v36.cy, v33) )
          WdLogSingleEntry0(1LL);
        if ( *((_DWORD *)v27 + 36) != left )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v29, v30, v26);
          v56[3] = v21;
          v56[4] = *((int *)v27 + 36);
          cy = left;
          v56[5] = left;
        }
        *((_DWORD *)v27 + 36) = left;
        if ( *((_DWORD *)v27 + 37) != top )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v29, v30, v26);
          v57[3] = v21;
          v57[4] = *((int *)v27 + 37);
          v57[5] = top;
        }
        *(_QWORD *)v27 |= 0x800uLL;
        v37 = *((_QWORD *)v27 + 31);
        *((_DWORD *)v27 + 37) = top;
        v14 = v64;
        if ( v37 )
        {
          *(_QWORD *)(v37 + 76) = *((_QWORD *)v27 + 18);
          v38 = v63;
          *(_DWORD *)(*((_QWORD *)v27 + 31) + 172LL) = v33;
          *(_DWORD *)(*((_QWORD *)v27 + 31) + 176LL) = v38;
          *(_DWORD *)(*((_QWORD *)v27 + 31) + 72LL) |= 0x180020u;
        }
        v2 = 0;
      }
      ++v21;
    }
    if ( v62 )
      operator delete(*(void **)&v62);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v19);
LABEL_86:
  if ( v18 )
    operator delete(v18);
  return v20;
}
