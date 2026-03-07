__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, const GUID *a5)
{
  DMMVIDEOPRESENTTARGETSET *v9; // rcx
  int v10; // edx
  _QWORD *v11; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // r8
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  bool v22; // al
  __int64 v23; // r8
  int v24; // edx
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v33; // r9
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rax
  int v37; // edx
  struct _LUID *v38; // rdx
  struct _LUID *v39; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v41; // r9
  int v42; // eax
  unsigned int v43; // edi
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  struct _GUID *v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+B4h] [rbp-4Ch]
  _BYTE v56[24]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DCh] [rbp-24h]
  int v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+E4h] [rbp-1Ch]
  BOOL v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  struct _GUID v65; // [rsp+100h] [rbp+0h] BYREF

  if ( !*(_QWORD *)(a1 + 8) )
    WdLogSingleEntry0(1LL);
  v9 = *(DMMVIDEOPRESENTTARGETSET **)(a1 + 120);
  v10 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 16LL);
  memset(v56, 0, sizeof(v56));
  v59 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v9, v10);
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, *(_DWORD *)(a2 + 8) & 0xFFFFFFLL);
    return 0LL;
  }
  v13 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v13;
  v14 = v13 & 0xFEFFFFFF | (*((_DWORD *)TargetById + 25) != 4 ? 0x1000000 : 0);
  v15 = 0;
  *(_DWORD *)(a3 + 40) = v14;
  if ( *((_DWORD *)TargetById + 21) == 15 )
    v15 = 0x200000;
  v16 = v14 & 0xFFDFFFFF | v15;
  *(_DWORD *)(a3 + 40) = v16;
  v17 = *((_DWORD *)TargetById + 20);
  if ( !v17 || (v18 = v17 - 1) == 0 || (v19 = v18 - 1) == 0 || (v20 = v19 - 1) == 0 || (v21 = 0, v20 == 11) )
    v21 = 0x400000;
  *(_DWORD *)(a3 + 40) = v21 | v16 & 0xFFBFFFFF;
  v22 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)TargetById + 20));
  v25 = v24 ^ (v24 ^ (v22 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v25;
  v26 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v27 = *(_QWORD *)(v23 + 424);
  *(_QWORD *)(a3 + 24) = v27;
  v28 = v26 - v27;
  v29 = *(_QWORD *)(v23 + 432);
  *(_QWORD *)(a3 + 32) = v29;
  if ( v26 - v27 < 100000000 || v26 - v29 < 100000000 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      *(_DWORD *)(a3 + 40) |= 0x40000u;
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  }
  v30 = *(unsigned int *)(v11[365] + 524LL);
  v31 = (unsigned int)(v30 + 100000000);
  if ( v28 < v31 || v26 - v29 < v31 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v25 )
    return 0LL;
  v33 = *(_QWORD *)(v23 + 536);
  v34 = *(_DWORD *)(a2 + 8);
  v35 = v34 & 0xF000000;
  if ( *(_BYTE *)(v33 + 172) )
  {
    if ( v35 == 0x8000000 )
    {
      *(_BYTE *)(v33 + 172) = 0;
      WdLogSingleEntry2(7LL, *(unsigned int *)(v23 + 24), 0LL);
      v34 = *(_DWORD *)(a2 + 8);
      v43 = 2;
    }
    else
    {
      v43 = 3;
    }
    v44 = *(_QWORD *)((char *)v11 + 404);
    v54 = 30;
    v61 = v34 & 0xFFFFFF;
    v55 = 72;
    v58 = 0;
    v57 = 0LL;
    memset(v56, 0, sizeof(v56));
    v62 = v43 == 3;
    v60 = 103;
    v63 = 0;
    v64 = v44;
    v45 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, 0LL, 0LL, &v45);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v54, v45);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v43;
  }
  if ( v35 != 0x8000000 )
    return 0LL;
  if ( v28 >= v30 && v26 - v29 >= v30 )
  {
    WdLogSingleEntry4(7LL, v34 & 0xFFFFFF, v11, v27, v28);
    return 0LL;
  }
  v36 = *(_QWORD *)((char *)v11 + 404);
  v54 = 30;
  v37 = *(_DWORD *)(a3 + 16);
  v61 = v34 & 0xFFFFFF;
  v55 = 72;
  v58 = 0;
  v62 = v27 >= v29;
  v38 = (struct _LUID *)(unsigned int)(v37 - v27);
  v57 = 0LL;
  v60 = 102;
  memset(v56, 0, sizeof(v56));
  v63 = (int)v38;
  v64 = v36;
  v45 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v38, 0LL, &v45);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v54, v45);
  v45 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v39, 0LL, &v45);
  v46 = 0;
  v65 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305192),
    0,
    (enum _DXGK_RAPID_HPD_TYPE *)&v46,
    &v65,
    0LL);
  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000080LL) )
    {
      v47 = -1;
      v50 = &v65;
      v51 = v45;
      v53 = *(_QWORD *)((char *)v11 + 404);
      v42 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
      v48 = 1;
      LODWORD(v45) = v42;
      v52 = 2LL;
      v49 = 0;
      LOWORD(v46) = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        (__int64)&v46,
        byte_1C00A0E00,
        a5,
        v41,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v53,
        (__int64)&v49,
        (__int64)&v52,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v51,
        (__int64 *)&v50);
    }
  }
  *(_DWORD *)(a3 + 40) |= 0x10000u;
  return 1LL;
}
