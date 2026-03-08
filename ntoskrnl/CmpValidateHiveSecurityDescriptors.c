/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14071C9C4
 * Callers:
 *     CmCheckRegistry @ 0x14072DEB4 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     CmpResetCachedSecurity @ 0x14067D510 (CmpResetCachedSecurity.c)
 *     CmpAddSecurityCellToCache @ 0x14071CF00 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14071D120 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpInitSecurityCache @ 0x14072CC90 (CmpInitSecurityCache.c)
 *     CmpDestroySecurityCache @ 0x14074ADE4 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x14074C9BC (CmpCheckSecurityCellAccess.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpAdjustSecurityCacheSize @ 0x14079179C (CmpAdjustSecurityCacheSize.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _BYTE *a3,
        RTL_BITMAP *a4,
        __int64 a5)
{
  RTL_BITMAP *v6; // rdi
  _DWORD *v7; // r14
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 CellFlat; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // esi
  unsigned int v16; // r14d
  __int64 CellPaged; // rax
  unsigned int v18; // eax
  ULONG v19; // edx
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ecx
  ULONG v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  int v31; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+30h] [rbp-28h]
  int v35; // [rsp+38h] [rbp-20h] BYREF
  int v36; // [rsp+3Ch] [rbp-1Ch] BYREF
  _QWORD v37[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+48h]

  v37[0] = 0xFFFFFFFFLL;
  v6 = a4;
  HvpGetBinContextInitialize((char *)v37 + 4);
  v7 = 0LL;
  v36 = 0;
  v35 = v8;
  HvpGetBinContextInitialize(&v36);
  v34 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter3,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
                           0LL) )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 0;
LABEL_5:
    v10 = -1073741492;
    SetFailureLocation(v9, 0, 9, -1073741492, v31);
    return v10;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL));
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v12 = CellFlat;
  if ( !CellFlat )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 16;
    goto LABEL_5;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v13 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v32 = 24;
LABEL_90:
    v10 = -1073741492;
    v21 = -1073741492;
LABEL_91:
    SetFailureLocation(v13, 0, 9, v21, v32);
    goto LABEL_92;
  }
  v14 = *(_DWORD *)(CellFlat + 44);
  v15 = 0;
  v16 = v14;
  v38 = v14;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter3, v14, v6) )
    {
      if ( v16 != v14 )
      {
        v7 = 0LL;
        goto LABEL_69;
      }
      v10 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, 128);
      v7 = 0LL;
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v14);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v7 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v32 = 144;
      goto LABEL_89;
    }
    v18 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v18 < 0x14 )
      break;
    v19 = v7[4];
    if ( v19 + 20 < v19 || v19 + 20 > v18 )
      break;
    if ( v14 != v38 && v7[2] != v15 )
    {
      v32 = 160;
      goto LABEL_89;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v19, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v35);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v35);
      v33 = 168;
      goto LABEL_60;
    }
    if ( v34 )
    {
      v20 = CmpResetCachedSecurity(BugCheckParameter3, v14);
      v10 = v20;
      if ( v20 < 0 )
      {
        v32 = 184;
        goto LABEL_32;
      }
    }
    else
    {
      v20 = CmpAddSecurityCellToCache(BugCheckParameter3, v14);
      v10 = v20;
      if ( v20 < 0 )
      {
        v32 = 176;
LABEL_32:
        v21 = v20;
        v13 = a5;
        goto LABEL_91;
      }
    }
    v15 = v14;
    v14 = v7[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v35);
    v16 = v38;
    if ( v14 == v38 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v22 = HvpGetCellFlat(BugCheckParameter3, v14);
      else
        v22 = HvpGetCellPaged(BugCheckParameter3);
      v7 = (_DWORD *)v22;
      if ( *(_DWORD *)(v22 + 8) != v15 )
      {
        v32 = 200;
        goto LABEL_89;
      }
      if ( !v34 )
        CmpAdjustSecurityCacheSize(BugCheckParameter3);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
      {
        v23 = 0;
        while ( 1 )
        {
          v24 = CmpCheckSecurityCellAccess(
                  BugCheckParameter3,
                  *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v23),
                  0);
          v10 = v24;
          if ( v24 < 0 )
            break;
          if ( ++v23 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
            goto LABEL_52;
        }
        SetFailureLocation(a5, 0, 9, v24, 208);
        if ( v10 != -1073741670 )
          v10 = -1073741492;
      }
      else
      {
LABEL_52:
        v10 = 0;
      }
      goto LABEL_92;
    }
    v6 = a4;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v35);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v35);
  v33 = 152;
LABEL_60:
  v7 = 0LL;
  SetFailureLocation(a5, 1, 9, -1073741492, v33);
LABEL_69:
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v32 = 112;
    goto LABEL_89;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v12 + 44), 0LL) )
  {
    v32 = 32;
    goto LABEL_89;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v25 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v12 + 44));
  else
    v25 = HvpGetCellPaged(BugCheckParameter3);
  v7 = (_DWORD *)v25;
  if ( !v25 )
  {
    v32 = 48;
    goto LABEL_89;
  }
  v26 = -4 - *(_DWORD *)(v25 - 4);
  if ( v26 < 0x14 || (v27 = *(_DWORD *)(v25 + 16), v27 + 20 < v27) || v27 + 20 > v26 )
  {
    v32 = 80;
LABEL_89:
    v13 = a5;
    goto LABEL_90;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v25 + 20), v27, 0) )
  {
    v32 = 64;
    goto LABEL_89;
  }
  v20 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 44));
  v10 = v20;
  if ( v20 < 0 )
  {
    v32 = 96;
    goto LABEL_32;
  }
  v28 = *(_DWORD *)(v12 + 44);
  v7[2] = v28;
  v7[1] = v28;
  CmpDestroySecurityCache(BugCheckParameter3);
  CmpInitSecurityCache(BugCheckParameter3);
  v10 = -1073741267;
  v29 = *(_QWORD *)(BugCheckParameter3 + 64);
  *a3 = 1;
  *(_DWORD *)(v29 + 4088) |= 4u;
LABEL_92:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v37);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v37);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v35);
  }
  return v10;
}
