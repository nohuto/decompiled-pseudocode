__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r15d
  unsigned int i; // edx
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned __int16 v23; // cx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r13d
  __int64 v27; // r12
  int PathModalityForAdapter; // eax
  int v29; // eax
  int v30; // eax
  __int64 v32; // rdx
  unsigned __int16 v33; // si
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int Active; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // r14
  __int64 v46; // rdx
  CCD_TOPOLOGY *v47; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  DXGADAPTER *v54[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v55; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-51h]
  _BYTE v57[160]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v58; // [rsp+100h] [rbp+67h] BYREF
  int v59; // [rsp+108h] [rbp+6Fh]

  v59 = a2;
  v3 = 0;
  v5 = *((_QWORD *)this + 8);
  v7 = *(unsigned __int16 *)(v5 + 20);
  v55 = v5 + 56;
  v56 = v7;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 312);
    v9 = v7;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 74;
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 || !*(_WORD *)(v10 + 20) )
  {
    WdLogSingleEntry2(3LL, this, v10);
    LODWORD(v13) = -1073741823;
    goto LABEL_64;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v12 = *((_QWORD *)this + 8);
  v13 = v11;
  if ( v11 < 0 )
  {
    v32 = *((_QWORD *)this + 8);
    goto LABEL_34;
  }
  v14 = 0;
  for ( i = 0; ; ++i )
  {
    v16 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( i >= v16 )
      break;
    v17 = 296LL * i;
    if ( *(_BYTE *)(v17 + v12 + 185) )
    {
      v18 = *(_QWORD *)(v17 + v12 + 56);
      if ( (v18 & 0x101) == 0 && (v18 & 0x20000) != 0 )
        v14 = 1;
    }
  }
  if ( !v14 )
    goto LABEL_15;
  v33 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v57, 8u, 0);
  LOWORD(v58) = 8;
  while ( 1 )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v57, v33, v34, v35) < v33 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
      v49[3] = v33;
      v49[4] = this;
      v42 = *((_QWORD *)this + 8);
      v49[5] = v42;
      goto LABEL_55;
    }
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v57, 1, a3, 1, (unsigned __int16 *)&v58);
    if ( Active != -1073741789 )
      break;
    v33 = v58;
  }
  if ( Active < 0 )
  {
LABEL_55:
    WdLogNewEntry5_WdTrace(v42, v41, v34, v35);
    v14 = 0;
    goto LABEL_56;
  }
  v43 = *((_QWORD *)this + 8);
  v44 = 0;
  if ( *(_WORD *)(v43 + 20) )
  {
    while ( 1 )
    {
      v45 = 296LL * v44;
      v54[0] = 0LL;
      if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v54, (const struct _LUID *)(v45 + v43 + 72)) )
        break;
      if ( *(_BYTE *)(*((_QWORD *)this + 8) + v45 + 185) )
      {
        if ( *((_QWORD *)v54[0] + 366) )
        {
          if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v54[0] + 365)) )
          {
            v48 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v45 + v46 + 56);
            if ( (*(_DWORD *)v48 & 0x20101) == 0x20000LL )
              CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v47, v48, (const struct CCD_TOPOLOGY *)v57);
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v54, 0LL);
      v43 = *((_QWORD *)this + 8);
      if ( ++v44 >= *(unsigned __int16 *)(v43 + 20) )
        goto LABEL_56;
    }
    v14 = 0;
    DXGADAPTER_REFERENCE::Assign(v54, 0LL);
  }
LABEL_56:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v57);
LABEL_15:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v19 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v20 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v20 + 20) )
  {
    do
    {
      v21 = v19++;
      *(_DWORD *)(296 * v21 + v20 + 276) = 0;
      v20 = *((_QWORD *)this + 8);
    }
    while ( v19 < *(unsigned __int16 *)(v20 + 20) );
  }
  v22 = 0;
  if ( !*(_WORD *)(v20 + 20) )
  {
LABEL_28:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
    v29 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v13 = v29;
    if ( v29 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
      v30 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0);
      v13 = v30;
      if ( v30 >= 0 )
      {
        CCD_TOPOLOGY::FillScalingIntent(this);
        CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
        goto LABEL_31;
      }
    }
    v32 = *((_QWORD *)this + 8);
LABEL_34:
    WdLogSingleEntry2(2LL, v32, v13);
    goto LABEL_64;
  }
  while ( 1 )
  {
    if ( v20 && *(_WORD *)(v20 + 20) )
    {
      v23 = 0;
      v24 = 296LL * v22;
      v58 = v22;
      while ( 1 )
      {
        v25 = 296LL * v23;
        if ( *(_DWORD *)(v25 + v20 + 72) == *(_DWORD *)(v24 + v20 + 72)
          && *(_DWORD *)(v25 + v20 + 76) == *(_DWORD *)(v24 + v20 + 76) )
        {
          break;
        }
        ++v23;
      }
      if ( v23 == v22 )
        break;
    }
LABEL_27:
    v20 = *((_QWORD *)this + 8);
    if ( ++v22 >= *(unsigned __int16 *)(v20 + 20) )
      goto LABEL_28;
  }
  v26 = 0;
  v27 = 296LL * v22;
  while ( 1 )
  {
    PathModalityForAdapter = BmlGetPathModalityForAdapter(
                               *((_QWORD *)this + 8),
                               (const struct _LUID *)(v27 + *((_QWORD *)this + 8) + 72LL),
                               *((_BYTE *)this + 76) & 1,
                               *((_DWORD *)this + 20),
                               v59);
    v13 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v14
      || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                          this,
                          (const struct _LUID *)(v27 + *((_QWORD *)this + 8) + 72LL))
      || v26 )
    {
      goto LABEL_62;
    }
    v26 = 1;
    WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
  }
  if ( PathModalityForAdapter >= 0 )
    goto LABEL_27;
LABEL_62:
  WdLogSingleEntry5(
    2LL,
    v13,
    *((_QWORD *)this + 8),
    v58,
    *(int *)(*((_QWORD *)this + 8) + v27 + 76),
    *(unsigned int *)(*((_QWORD *)this + 8) + v27 + 72));
LABEL_64:
  v3 = v13;
LABEL_31:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942(&v55);
  return v3;
}
