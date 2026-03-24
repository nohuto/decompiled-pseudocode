/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0144C54
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C000C464 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00EC5A8 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C013CF0C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C013F2D0 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C0144EAC (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C014A0BC (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C014E93C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01605F8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016A360 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686 @ 0x1C016B5A8 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1686--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02EBA30 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02EBAE0 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, __int64 a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  char v6; // si
  unsigned int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // r14d
  unsigned int i; // ecx
  unsigned __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // esi
  unsigned __int16 v23; // r8
  __int64 v24; // rcx
  int v25; // r10d
  int v26; // r9d
  __int64 v27; // rcx
  bool v28; // al
  __int64 v29; // r13
  int PathModalityForAdapter; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v38; // rax
  unsigned __int16 v39; // di
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edi
  __int64 v48; // rsi
  __int64 v49; // rdx
  CCD_TOPOLOGY *v50; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rdx
  _QWORD *v52; // rax
  DXGADAPTER *v53[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v54; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-41h]
  _BYTE v56[144]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v57; // [rsp+F0h] [rbp+67h] BYREF
  int v58; // [rsp+F8h] [rbp+6Fh]

  v58 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v6 = a3;
  v7 = *(unsigned __int16 *)(v5 + 20);
  v54 = v5 + 48;
  v55 = v7;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 280);
    v9 = v7;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 68;
      --v9;
    }
    while ( v9 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( v5 )
    v10 = *(_WORD *)(v5 + 20);
  else
    v10 = 0;
  if ( v10 )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
    v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
    v14 = v11;
    if ( v11 < 0 )
      goto LABEL_64;
    v15 = *((_QWORD *)this + 8);
    v16 = 0;
    for ( i = 0; ; ++i )
    {
      v18 = v15 ? *(_WORD *)(v15 + 20) : 0;
      if ( i >= v18 )
        break;
      v19 = 272LL * i;
      if ( *(_BYTE *)(v19 + v15 + 177) )
      {
        v20 = *(_QWORD *)(v19 + v15 + 48);
        if ( (v20 & 0x101) == 0 && (v20 & 0x20000) != 0 )
          v16 = 1;
      }
    }
    if ( v16 )
    {
      v39 = 8;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v56, 8u, 0);
      v57 = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v56, v39) >= v39 )
      {
        v42 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v56, 1, v6, 1, &v57);
        if ( v42 != -1073741789 )
          goto LABEL_44;
        v39 = v57;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40);
      v45[3] = v39;
      v45[4] = this;
      v44 = *((_QWORD *)this + 8);
      v45[5] = v44;
      v42 = -1073741801;
LABEL_44:
      if ( v42 >= 0 )
      {
        v46 = *((_QWORD *)this + 8);
        v47 = 0;
        if ( *(_WORD *)(v46 + 20) )
        {
          while ( 1 )
          {
            v48 = 272LL * v47;
            v53[0] = 0LL;
            if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v53, (struct _LUID *)(v48 + v46 + 64)) )
              break;
            if ( *(_BYTE *)(v48 + *((_QWORD *)this + 8) + 177) )
            {
              if ( *((_QWORD *)v53[0] + 338) )
              {
                if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v53[0] + 337)) )
                {
                  v51 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v48 + v49 + 48);
                  if ( (*(_DWORD *)v51 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v50, v51, (const struct CCD_TOPOLOGY *)v56);
                }
              }
            }
            DXGADAPTER_REFERENCE::Assign(v53, 0LL);
            v46 = *((_QWORD *)this + 8);
            if ( ++v47 >= *(unsigned __int16 *)(v46 + 20) )
              goto LABEL_56;
          }
          v16 = 0;
          DXGADAPTER_REFERENCE::Assign(v53, 0LL);
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v44, v43);
        v16 = 0;
      }
LABEL_56:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v56);
    }
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
    v21 = *((_QWORD *)this + 8);
    v22 = 0;
    if ( *(_WORD *)(v21 + 20) )
    {
      while ( 1 )
      {
        if ( v21 && *(_WORD *)(v21 + 20) )
        {
          v23 = 0;
          v24 = 272LL * v22;
          v25 = *(_DWORD *)(v24 + v21 + 64);
          v26 = *(_DWORD *)(v24 + v21 + 68);
          while ( 1 )
          {
            v27 = 272LL * v23;
            if ( *(_DWORD *)(v27 + v21 + 64) == v25 && *(_DWORD *)(v27 + v21 + 68) == v26 )
              break;
            ++v23;
          }
          v28 = v23 == v22;
        }
        else
        {
          v28 = 0;
        }
        if ( v28 )
          break;
LABEL_28:
        v21 = *((_QWORD *)this + 8);
        if ( ++v22 >= *(unsigned __int16 *)(v21 + 20) )
          goto LABEL_29;
      }
      v29 = 272LL * v22;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   (struct _LUID *)(v29 + *((_QWORD *)this + 8) + 64LL),
                                   *((_BYTE *)this + 76) & 1,
                                   *((_DWORD *)this + 20),
                                   v58);
        v14 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v16
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v29 + *((_QWORD *)this + 8) + 64LL))
          || v4 )
        {
          goto LABEL_63;
        }
        v4 = 1;
        WdLogNewEntry5_WdTrace(v32, v31);
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        goto LABEL_28;
LABEL_63:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v52[3] = v14;
      v52[4] = *((_QWORD *)this + 8);
      v52[5] = v22;
      v52[6] = *(int *)(272LL * v22 + *((_QWORD *)this + 8) + 68);
      v52[7] = *(unsigned int *)(272LL * v22 + *((_QWORD *)this + 8) + 64);
      goto LABEL_65;
    }
LABEL_29:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
    v33 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v14 = v33;
    if ( v33 < 0
      || (CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL),
          v36 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0LL, v34, v35),
          v14 = v36,
          v36 < 0) )
    {
LABEL_64:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v52[3] = *((_QWORD *)this + 8);
      v52[4] = v14;
LABEL_65:
      WdLogEvent5_WdError(v52);
      goto LABEL_32;
    }
    CCD_TOPOLOGY::FillScalingIntent(this);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    LODWORD(v14) = 0;
  }
  else
  {
    v38 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v38);
    LODWORD(v14) = -1073741823;
  }
LABEL_32:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686(&v54);
  return (unsigned int)v14;
}
