/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C08E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000AB7C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C017CA1C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C01BF27C (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01BFDD8 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@.c)
 *     _CcdReadRegistryValues @ 0x1C01BFEF0 (_CcdReadRegistryValues.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01C0040 (_CcdOpenRegistrySubkey.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C01C0978 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01C2EEC (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rax
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // r15
  int v15; // eax
  int v16; // eax
  __int64 v17; // r15
  int v18; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rsi
  int RegistryValues; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // edx
  CCD_SET_STRING_ID *v29; // rbx
  const struct CCD_SET_STRING_ID *v30; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned int v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-4Ch] BYREF
  int v41; // [rsp+38h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  int v43; // [rsp+48h] [rbp-38h]
  unsigned int v44; // [rsp+4Ch] [rbp-34h]
  CCD_SET_STRING_ID *SetId; // [rsp+50h] [rbp-30h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v46; // [rsp+58h] [rbp-28h]
  unsigned __int16 v47; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int16 v48; // [rsp+68h] [rbp-18h] BYREF

  v46 = this;
  v3 = 0;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  if ( !SetId )
  {
    WdLogSingleEntry0(2LL);
    return 3221225473LL;
  }
  v4 = *((_QWORD *)a2 + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 22);
  else
    v5 = 0;
  v6 = *((_WORD *)SetId + 16);
  v7 = *((_QWORD *)a2 + 8);
  if ( !v4 )
    v7 = 0LL;
  if ( v6 > v5 )
  {
    if ( v4 )
      v3 = *(_WORD *)(v7 + 22);
    WdLogSingleEntry2(1LL, v3, *((unsigned __int16 *)SetId + 16));
    return 3221225507LL;
  }
  v8 = 0;
  if ( v6 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v8);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v8;
    }
    while ( v8 < *((unsigned __int16 *)SetId + 16) );
  }
  v43 = -1;
  LODWORD(v10) = -1073741823;
  Handle = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !*((_WORD *)SetId + 16) )
    return (unsigned int)v10;
  while ( 1 )
  {
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v13 = CCD_SET_STRING_ID::QueryCloneInfo(SetId, v12, &v39, 0LL, &v40);
    LODWORD(v10) = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry4(1LL, v13, v12, a2, *((_QWORD *)a2 + 8));
      goto LABEL_43;
    }
    v14 = v39;
    if ( v43 != v39 )
    {
      v15 = RtlStringCbPrintfW(&v48, 6uLL, L"%02x", v39);
      v10 = v15;
      if ( v15 < 0 )
      {
        v37 = 1LL;
      }
      else
      {
        if ( Handle )
          ZwClose(Handle);
        v16 = CcdOpenRegistrySubkey(&Handle, 131097LL, *((_QWORD *)v46 + 8), &v48, 0LL);
        v10 = v16;
        if ( v16 >= 0 )
        {
          v43 = v14;
          goto LABEL_17;
        }
        v37 = 2LL;
      }
      WdLogSingleEntry5(v37, v10, v12, v14, a2, *((_QWORD *)a2 + 8));
      goto LABEL_43;
    }
LABEL_17:
    v17 = v40;
    v39 = v40;
    v18 = RtlStringCbPrintfW(&v47, 6uLL, L"%02x", v40);
    LODWORD(v10) = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(1LL, v18, v17);
      return (unsigned int)v10;
    }
    v19 = CCD_TOPOLOGY::GetPathDescriptor(a2, v12);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C013A6A0, 8LL, v19);
    v21 = RegistryValues;
    if ( RegistryValues < 0 )
      break;
    *((_QWORD *)v19 + 13) = *((_QWORD *)v19 + 12);
    v22 = CcdReadRegistryValues(Handle, 0LL, &unk_1C013A630, 2LL, &v41);
    v21 = v22;
    if ( v22 == -1073741772 )
    {
      v41 = 0;
    }
    else if ( v22 < 0 )
    {
      v38 = v39;
      goto LABEL_78;
    }
    v44 = *((_DWORD *)v19 + 24);
    v40 = *((_DWORD *)v19 + 25);
    v23 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
            (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v22,
            Handle,
            v39,
            &v47,
            v19);
    if ( v23 < 0 )
    {
      WdLogSingleEntry5(2LL, v23, v12, v39, a2, *((_QWORD *)a2 + 8));
      goto LABEL_79;
    }
    *((_DWORD *)v19 + 51) = 0;
    *((_DWORD *)v19 + 52) = 4;
    switch ( v41 )
    {
      case 0:
        v32 = *(_QWORD *)v19;
        v33 = *(_QWORD *)v19 & 0x10B87LL;
        *(_QWORD *)v19 = v33;
        if ( (v32 & 0x100) != 0 )
        {
          if ( (v32 & 0x200) == 0 || ((*((_DWORD *)v19 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v34 = *((_DWORD *)v19 + 25);
            v35 = *((_DWORD *)v19 + 24);
          }
          else
          {
            v34 = *((_DWORD *)v19 + 24);
            v35 = *((_DWORD *)v19 + 25);
          }
          *((_DWORD *)v19 + 38) = v35;
          *((_DWORD *)v19 + 39) = v34;
          *(_QWORD *)v19 = v33 | 0x20000;
        }
LABEL_59:
        v36 = *(_QWORD *)v19 & 0x30B87LL;
        *(_QWORD *)v19 = v36;
        if ( v41 == 1 && (v36 & 0x10000) != 0 && *((_DWORD *)v19 + 35) == 5 )
          DxgkGetAdapterDefaultScaling((struct _LUID *)v19 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v19 + 35);
LABEL_63:
        *(_QWORD *)v19 &= 0x830B87uLL;
        if ( *((_DWORD *)v19 + 29) != 21 )
          WdLogSingleEntry3(3LL, *((int *)v19 + 29), v46, v19);
        *((_DWORD *)v19 + 29) = 21;
LABEL_66:
        *(_QWORD *)v19 &= 0x830F87uLL;
LABEL_27:
        *(_QWORD *)v19 &= 0x1830F87uLL;
        goto LABEL_28;
      case 1:
        goto LABEL_59;
      case 2:
        goto LABEL_63;
      case 3:
        goto LABEL_66;
      case 4:
        goto LABEL_27;
    }
    WdLogSingleEntry3(2LL, v41, *((unsigned int *)v19 + 6), *((unsigned int *)v19 + 7));
    CCD_TOPOLOGY::ClearPathDescriptor(v19);
LABEL_28:
    v24 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 0x1000000LL) != 0 )
    {
      v25 = CcdReadRegistryValues(Handle, &v47, &unk_1C013A400, 4LL, v19);
      if ( v25 < 0 )
      {
        WdLogSingleEntry3(3LL, v25, v12, v39);
        goto LABEL_41;
      }
    }
    else
    {
      *((_DWORD *)v19 + 60) = 1;
      if ( (v24 & 2) != 0 )
      {
        *((_QWORD *)v19 + 28) = *(_QWORD *)((char *)v19 + 52);
        *(_QWORD *)v19 = v24 | 0x1000000;
      }
    }
    v26 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 0x20000LL) != 0 )
    {
      if ( v39 )
      {
        *((_QWORD *)v19 + 19) = v11;
      }
      else
      {
        if ( (v26 & 0x200) != 0 && ((*((_DWORD *)v19 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v27 = v44;
          v28 = v40;
        }
        else
        {
          v27 = v40;
          v28 = v44;
        }
        *((_DWORD *)v19 + 38) = v28;
        *((_DWORD *)v19 + 39) = v27;
        v11 = *((_QWORD *)v19 + 19);
      }
    }
    if ( (v26 & 0x10000) != 0 )
    {
      *((_DWORD *)v19 + 34) = *((_DWORD *)v19 + 35);
      v26 |= 0x40000000000uLL;
      *(_QWORD *)v19 = v26;
    }
    if ( (v26 & 0x100) == 0 )
      *(_QWORD *)v19 = v26 & 0xFFFFFFFFFF7FFFFFuLL;
    if ( ++v12 >= *((unsigned __int16 *)SetId + 16) )
      goto LABEL_41;
  }
  v38 = v17;
LABEL_78:
  WdLogSingleEntry4(2LL, v21, Handle, v38, v12);
LABEL_79:
  CCD_TOPOLOGY::ClearPathDescriptor(v19);
LABEL_41:
  v29 = SetId;
  v30 = CCD_TOPOLOGY::SetModalitySetId(a2, SetId);
  LODWORD(v10) = *(_DWORD *)v30;
  if ( *(int *)v30 < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)v30, a2, v29);
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)v29 + 16);
    *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
  }
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v10;
}
