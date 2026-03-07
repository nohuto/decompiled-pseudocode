__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  void **ModalitySetId; // r12
  unsigned int v7; // r8d
  unsigned int v8; // esi
  int v9; // eax
  CCD_TOPOLOGY *v10; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdi
  int v15; // eax
  int v16; // r15d
  int v17; // edx
  int v18; // eax
  unsigned int BitsPerPixel; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int16 v24; // dx
  struct DXGGLOBAL *Global; // rax
  HANDLE v26; // r8
  const struct CCD_TOPOLOGY *v27; // r9
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int16 v33[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v35; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  int v37; // [rsp+48h] [rbp-28h]
  int v38; // [rsp+4Ch] [rbp-24h] BYREF
  int v39; // [rsp+50h] [rbp-20h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v40; // [rsp+58h] [rbp-18h]
  unsigned __int16 v41; // [rsp+60h] [rbp-10h] BYREF

  v40 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = v3;
LABEL_41:
    WdLogSingleEntry4(2LL, v5, a2, *((_QWORD *)a2 + 8), 1LL);
    return v4;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v7 = 0;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v5 = *(int *)ModalitySetId;
    goto LABEL_41;
  }
  v37 = -1;
  v8 = 0;
  Handle = 0LL;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v35 = v7;
      v34 = v7;
      v9 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)ModalitySetId, v8, &v35, 0LL, &v34);
      if ( v9 < 0 )
        break;
      v33[0] = 0;
      v9 = CCD_TOPOLOGY::MapModalitySetIdPath(a2, v8, v33);
      if ( v9 < 0 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v10, v33[0]);
      v13 = v35;
      v14 = (__int64)PathDescriptor;
      if ( v37 != v35 )
      {
        v15 = RtlStringCbPrintfW(&v41, 6uLL, L"%02x", v35);
        if ( v15 < 0 )
        {
          v31 = 1LL;
          goto LABEL_32;
        }
        if ( Handle )
          ZwClose(Handle);
        v38 = 0;
        v15 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v40 + 8), &v41, (__int64)&v38);
        if ( v15 < 0 )
        {
          v31 = 2LL;
LABEL_32:
          WdLogSingleEntry5(v31, v15, v8, v13, a2, *((_QWORD *)a2 + 8));
          goto LABEL_37;
        }
        v37 = v13;
        if ( !v34 )
        {
          v16 = *(_DWORD *)(v14 + 96);
          v35 = *(_DWORD *)(v14 + 100);
          *(_DWORD *)v33 = *(_DWORD *)(v14 + 112);
          if ( (*(_QWORD *)v14 & 0x20000LL) != 0 )
          {
            if ( (*(_QWORD *)v14 & 0x200LL) == 0 || ((*(_DWORD *)(v14 + 132) - 2) & 0xFFFFFFFD) != 0 )
            {
              v17 = *(_DWORD *)(v14 + 152);
              v18 = *(_DWORD *)(v14 + 156);
            }
            else
            {
              v17 = *(_DWORD *)(v14 + 156);
              v18 = *(_DWORD *)(v14 + 152);
            }
            *(_DWORD *)(v14 + 100) = v18;
            *(_DWORD *)(v14 + 96) = v17;
          }
          BitsPerPixel = GetBitsPerPixel((enum _D3DDDIFORMAT)*(_DWORD *)(v14 + 116));
          *(_DWORD *)(v14 + 112) = v20 * (BitsPerPixel >> 3);
          v21 = CcdWriteRegistryValues((_DWORD)Handle, 0, (unsigned int)&unk_1C013A6A0, 8, v14);
          v12 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v21;
          if ( v21 < 0
            || (*(_DWORD *)(v14 + 100) = v35,
                *(_DWORD *)(v14 + 112) = *(_DWORD *)v33,
                *(_DWORD *)(v14 + 96) = v16,
                v39 = 4,
                v22 = CcdWriteRegistryValues((_DWORD)Handle, 0, (unsigned int)&unk_1C013A630, 2, (__int64)&v39),
                v12 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v22,
                v22 < 0) )
          {
            v26 = Handle;
            v27 = 0LL;
            v28 = v12;
            v29 = v8;
            v30 = 2LL;
            goto LABEL_36;
          }
        }
      }
      v23 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v12,
              Handle,
              v34,
              (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v14);
      v7 = 0;
      if ( v23 < 0 )
      {
        WdLogSingleEntry5(2LL, v23, v8, v34, a2, *((_QWORD *)a2 + 8));
        goto LABEL_37;
      }
      if ( (*(_QWORD *)v14 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v14 + 88))
        && (v24 & 0x200) != 0 )
      {
        Global = DXGGLOBAL::GetGlobal();
        v7 = 0;
        *((_DWORD *)Global + 339) = *(_DWORD *)(v14 + 132);
      }
      if ( ++v8 >= *((unsigned __int16 *)ModalitySetId + 16) )
        goto LABEL_37;
    }
    v28 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v9;
    v30 = 1LL;
    v29 = *((_QWORD *)a2 + 8);
    v27 = a2;
    v26 = (HANDLE)v8;
LABEL_36:
    WdLogSingleEntry4(v30, v28, v26, v27, v29);
LABEL_37:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
