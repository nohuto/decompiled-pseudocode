__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 Container; // rbx
  struct DMMVIDPNSOURCE *v13; // r15
  struct DMMVIDPNTARGET *v14; // r14
  __int64 v15; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v16; // ebx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  DMMVIDPNPRESENTPATH *v23; // rax
  struct DMMVIDPNPRESENTPATH *v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rax
  struct DMMVIDPNPRESENTPATH *v45[2]; // [rsp+30h] [rbp-38h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v46; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v45[0] = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v13 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v10);
  if ( !v13 )
  {
    WdLogSingleEntry2(2LL, v10, a2);
    LODWORD(v22) = -1071774972;
    goto LABEL_16;
  }
  v14 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v8);
  if ( !v14 )
  {
    WdLogSingleEntry2(2LL, v8, a2);
    goto LABEL_26;
  }
  v46 = D3DKMDT_VPPI_UNINITIALIZED;
  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v10, 0LL, (unsigned int *)&v46) >= 0 )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v15) )
    {
      v36 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      *(_QWORD *)(v36 + 24) = v8;
      *(_QWORD *)(v36 + 32) = 1LL;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v14 + 12) + 556LL) & 0x100) != 0 )
    {
      v37 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      *(_QWORD *)(v37 + 24) = v8;
      *(_QWORD *)(v37 + 32) = 2LL;
      goto LABEL_29;
    }
    v38 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v46);
    if ( v38 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v38 + 96) + 556LL) & 0x100) == 0 )
        goto LABEL_6;
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
      v43[3] = (unsigned int)v46;
      v43[4] = v8;
      v43[5] = 3LL;
LABEL_29:
      LODWORD(v22) = -1071774975;
      goto LABEL_16;
    }
    WdLogSingleEntry0(1LL);
LABEL_26:
    LODWORD(v22) = -1071774971;
    goto LABEL_16;
  }
LABEL_6:
  v46 = D3DKMDT_VPPI_UNINITIALIZED;
  v16 = a5;
  if ( a5 == 255 )
  {
    LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(a2, &v46);
    v22 = LowestAvailImportanceOrdinal;
    if ( LowestAvailImportanceOrdinal < 0 )
    {
      v44 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      *(_QWORD *)(v44 + 24) = a2;
      *(_QWORD *)(v44 + 32) = v22;
      goto LABEL_16;
    }
    v16 = v46;
  }
  v23 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, 256LL);
  if ( v23 )
    v23 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v23, v13, v14, v16, a6);
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v45,
    (__int64 (__fastcall ***)(_QWORD, __int64))v23);
  v24 = v45[0];
  if ( v45[0] )
  {
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v45[0] + 7))((char *)v45[0] + 56) )
      WdLogSingleEntry0(1LL);
    v25 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v24, a8, a7);
    v22 = v25;
    if ( v25 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v31[3] = v10;
      v31[4] = v8;
      v31[5] = a2;
      v31[6] = v22;
    }
    else
    {
      v45[0] = 0LL;
      LODWORD(v22) = 0;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v22) = -1073741801;
  }
LABEL_16:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))v45);
  return (unsigned int)v22;
}
