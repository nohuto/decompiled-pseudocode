/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01615F4
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C01615C0 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000C40C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000D300 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C013E5A0 (_CcdOpenRegistrySubkey.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013F638 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C01406DC (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C016189C (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdWriteRegistryValues @ 0x1C01619F8 (_CcdWriteRegistryValues.c)
 *     ?MapModalitySetIdPath@CCD_TOPOLOGY@@QEBAJIPEAG@Z @ 0x1C0161B14 (-MapModalitySetIdPath@CCD_TOPOLOGY@@QEBAJIPEAG@Z.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C0161B88 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  void **ModalitySetId; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned __int16 *v11; // r14
  int v12; // r12d
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  CCD_TOPOLOGY *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r12
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // edx
  int v33; // eax
  unsigned int BitsPerPixel; // eax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r15
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v47; // rax
  int v48; // ebx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int16 v52[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v54; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  ULONG v56; // [rsp+48h] [rbp-28h] BYREF
  int v57; // [rsp+4Ch] [rbp-24h]
  __int64 v58; // [rsp+50h] [rbp-20h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v59; // [rsp+58h] [rbp-18h]
  wchar_t Dest; // [rsp+60h] [rbp-10h] BYREF

  v59 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v6 = v3;
  if ( v3 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v47[3] = v6;
LABEL_40:
    v47[4] = a2;
    v47[5] = *((_QWORD *)a2 + 8);
    v47[6] = 1LL;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v6;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v10 = 0;
  v11 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v47[3] = *(int *)v11;
    goto LABEL_40;
  }
  v12 = -1;
  Handle = 0LL;
  v13 = 0;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v54 = v10;
      v53 = v10;
      v14 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v11, v13, &v54, 0LL, &v53);
      v17 = v14;
      if ( v14 < 0 )
        break;
      v52[0] = 0;
      v18 = CCD_TOPOLOGY::MapModalitySetIdPath(a2, v13, v52);
      v17 = v18;
      if ( v18 < 0 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v16, v52[0]);
      v21 = v54;
      v22 = (__int64)PathDescriptor;
      if ( v12 != v54 )
      {
        v23 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", v54);
        v26 = v23;
        if ( v23 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24);
          v51[3] = v26;
          v51[4] = v13;
          v51[5] = v21;
          v51[6] = a2;
          v51[7] = *((_QWORD *)a2 + 8);
          goto LABEL_38;
        }
        if ( Handle )
          ZwClose(Handle);
        v56 = 0;
        v27 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v59 + 8), &Dest, &v56);
        v29 = v27;
        if ( v27 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v20, v28);
          v50[3] = v29;
          v50[4] = v13;
          v50[5] = v21;
          goto LABEL_34;
        }
        v12 = v21;
        if ( !v53 )
        {
          v30 = *(_DWORD *)(v22 + 96);
          *(_DWORD *)v52 = *(_DWORD *)(v22 + 100);
          v57 = *(_DWORD *)(v22 + 112);
          v31 = *(_QWORD *)v22;
          v54 = v30;
          if ( (v31 & 0x20000) != 0 )
          {
            if ( (v31 & 0x200) != 0 && ((*(_DWORD *)(v22 + 132) - 2) & 0xFFFFFFFD) == 0 )
            {
              v32 = *(_DWORD *)(v22 + 156);
              v33 = *(_DWORD *)(v22 + 152);
            }
            else
            {
              v32 = *(_DWORD *)(v22 + 152);
              v33 = *(_DWORD *)(v22 + 156);
            }
            *(_DWORD *)(v22 + 100) = v33;
            *(_DWORD *)(v22 + 96) = v32;
          }
          BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v22 + 116));
          *(_DWORD *)(v22 + 112) = v35 * (BitsPerPixel >> 3);
          v36 = CcdWriteRegistryValues((int)Handle, 0LL, v22);
          v38 = v36;
          if ( v36 < 0
            || (*(_DWORD *)(v22 + 96) = v54,
                *(_DWORD *)(v22 + 100) = *(_DWORD *)v52,
                *(_DWORD *)(v22 + 112) = v57,
                LODWORD(v58) = 3,
                v39 = CcdWriteRegistryValues((int)Handle, 0LL, (__int64)&v58),
                v38 = v39,
                v39 < 0) )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdError(v20, v37);
            v50[3] = v38;
            v50[4] = Handle;
            v50[5] = 0LL;
            v50[6] = v13;
            goto LABEL_35;
          }
        }
      }
      v40 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v20,
              Handle,
              v53,
              (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v22);
      v10 = 0;
      v43 = v40;
      if ( v40 < 0 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
        v50[4] = v13;
        v50[5] = v53;
        v50[3] = v43;
LABEL_34:
        v50[6] = a2;
        v50[7] = *((_QWORD *)a2 + 8);
LABEL_35:
        WdLogEvent5_WdError(v50);
        goto LABEL_24;
      }
      if ( (*(_QWORD *)v22 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v22 + 88))
        && (v44 & 0x200) != 0 )
      {
        v48 = *(_DWORD *)(v22 + 132);
        Global = DXGGLOBAL::GetGlobal(v45, v44);
        v10 = 0;
        *((_DWORD *)Global + 310) = v48;
      }
      if ( ++v13 >= v11[16] )
        goto LABEL_24;
    }
    v51 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16, v15);
    v51[3] = v17;
    v51[4] = v13;
    v51[5] = a2;
    v51[6] = *((_QWORD *)a2 + 8);
LABEL_38:
    WdLogEvent5_WdAssertion(v51);
LABEL_24:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
