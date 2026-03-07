__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
{
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v22)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-50h] BYREF
  int v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  char v27; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-8h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6046);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6046);
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v7 = -1073741811;
LABEL_25:
    v13 = v7;
    goto LABEL_26;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v8 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v7 = -1071774954;
    goto LABEL_25;
  }
  v9 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v9 || *(_DWORD *)v9 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v9);
    v7 = -1071774971;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    WdLogSingleEntry0(1LL);
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          v8 + 8,
          v10) )
  {
    WdLogSingleEntry2(2LL, v9, v8);
    v7 = -1071774928;
    goto LABEL_25;
  }
  v23 = 0;
  v29 = 0LL;
  v22 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v28 = v10;
  v24 = v10;
  v13 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v8,
          (__int64)&v22,
          &v29);
  if ( v13 == -1071774971 )
  {
    v16 = WdLogNewEntry5_WdTrace(v12, v11, v14, v15);
    v17 = v29 == 0;
    *(_QWORD *)(v16 + 24) = v8;
    if ( !v17 )
      WdLogSingleEntry0(1LL);
    v7 = 1075708748;
    goto LABEL_25;
  }
  if ( v13 >= 0 )
  {
    v18 = v29;
    if ( !v29 )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)&a3->Id = v18;
    v13 = 0;
  }
  else
  {
    WdLogSingleEntry2(2LL, v9, v8);
  }
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v25);
  }
  return (unsigned int)v13;
}
