__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        unsigned int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  CCD_TOPOLOGY *v5; // rcx
  unsigned int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  CCD_TOPOLOGY *v9; // r8
  int v10; // eax
  CCD_TOPOLOGY *v11; // rcx
  __int64 v12; // rdi
  int v13; // esi
  unsigned int i; // edx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int Active; // eax
  __int64 v25; // rdx
  CCD_TOPOLOGY *v26; // rcx
  unsigned int j; // edi
  CCD_TOPOLOGY *v28; // rax
  unsigned __int16 v29; // cx
  DXGGLOBAL *Global; // rax
  __int64 v31; // r14
  struct DXGADAPTER *v32; // rax
  __int64 v33; // r15
  unsigned __int8 v34; // r12
  DXGADAPTER *v35; // rdx
  CCD_TOPOLOGY *v36; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rdx
  _QWORD *v38; // rax
  CCD_TOPOLOGY *v39; // r12
  int v40; // r14d
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // r8
  int PathModeListForAdapter; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v50; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-51h]
  _BYTE v52[160]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v53; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v54; // [rsp+100h] [rbp+6Fh]
  struct CCD_MODE_RESULT_SET *v55; // [rsp+110h] [rbp+7Fh]

  v55 = a4;
  v54 = a2;
  CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
  v5 = this[8];
  v6 = *((unsigned __int16 *)v5 + 10);
  v50 = (__int64)v5 + 56;
  v51 = v6;
  if ( v6 )
  {
    v7 = (_DWORD *)((char *)v5 + 312);
    v8 = v6;
    do
    {
      *v7 |= 1u;
      v7[1] = 0;
      v7 += 74;
      --v8;
    }
    while ( v8 );
  }
  v9 = this[8];
  if ( v9 && *((_WORD *)v9 + 10) )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
    v10 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this);
    v11 = this[8];
    LODWORD(v12) = v10;
    if ( v10 >= 0 )
    {
      v13 = 0;
      for ( i = 0; ; ++i )
      {
        v15 = v11 ? *((_WORD *)v11 + 10) : 0;
        if ( i >= (unsigned int)v15 - 1 )
          break;
        v16 = 296LL * i;
        if ( *((_BYTE *)v11 + v16 + 185) && (*(_DWORD *)((_BYTE *)v11 + v16 + 56) & 0x20101) == 0x20000LL )
          v13 = 1;
      }
      if ( v13 )
      {
        v17 = 8;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v52, 8u, 0);
        LOWORD(v53) = 8;
        while ( 1 )
        {
          if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v52, v17, v18, v19) < v17 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v38[3] = v17;
            v38[4] = this;
            v26 = this[8];
            v38[5] = v26;
            goto LABEL_37;
          }
          Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v52, 1, 0, 1, (unsigned __int16 *)&v53);
          if ( Active != -1073741789 )
            break;
          v17 = v53;
        }
        if ( Active >= 0 )
        {
          for ( j = 0; ; ++j )
          {
            v28 = this[8];
            v29 = v28 ? *((_WORD *)v28 + 10) : 0;
            if ( j >= (unsigned int)v29 - 1 )
              break;
            Global = DXGGLOBAL::GetGlobal();
            v31 = 296LL * j;
            v32 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this[8] + v31 + 72), &v53);
            if ( !v32 )
              goto LABEL_38;
            v33 = *((_QWORD *)v32 + 366);
            v34 = ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v32 + 365));
            DXGADAPTER::ReleaseReference(v35);
            v36 = this[8];
            if ( *((_BYTE *)v36 + v31 + 185) )
            {
              if ( v33 )
              {
                if ( !v34 )
                {
                  v37 = (CCD_TOPOLOGY *)((char *)v36 + v31 + 56);
                  if ( (*(_DWORD *)v37 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v36, v37, (const struct CCD_TOPOLOGY *)v52);
                }
              }
            }
          }
          goto LABEL_39;
        }
LABEL_37:
        WdLogNewEntry5_WdTrace(v26, v25, v18, v19);
LABEL_38:
        v13 = 0;
LABEL_39:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v52);
      }
      CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1);
      v39 = this[8];
      v40 = 0;
      v41 = 296LL * *((unsigned __int16 *)v39 + 10);
      v42 = (__int64)v39 + v41;
      while ( 1 )
      {
        v43 = v54;
        LOBYTE(v43) = *((_BYTE *)this + 76) & 1;
        PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                   this[8],
                                   *(_QWORD *)(v42 - 224),
                                   v43,
                                   *((unsigned int *)this + 20),
                                   v54,
                                   v55,
                                   v50,
                                   v51);
        v12 = PathModeListForAdapter;
        if ( PathModeListForAdapter != -1071774970 )
          break;
        if ( !v13
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              (CCD_TOPOLOGY *)this,
                              (const struct _LUID *)(v42 - 224))
          || v40 )
        {
          goto LABEL_47;
        }
        v40 = 1;
        WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
      }
      if ( PathModeListForAdapter < 0 )
      {
LABEL_47:
        WdLogSingleEntry5(
          2LL,
          v12,
          this[8],
          *((unsigned __int16 *)this[8] + 10) - 1LL,
          *(int *)((char *)v39 + v41 - 220),
          *(unsigned int *)(v42 - 224));
        goto LABEL_50;
      }
      CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
    }
    else
    {
      WdLogSingleEntry2(2LL, this[8], v10);
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, v9);
    LODWORD(v12) = -1073741823;
  }
LABEL_50:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942(&v50);
  return (unsigned int)v12;
}
