__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // rax
  DMMVIDPNTOPOLOGY *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v19; // rax
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  char v22; // [rsp+40h] [rbp-10h]
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  v20 = -1;
  v21 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6019);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v9 = v8;
    if ( v8 )
    {
      v23 = -1;
      v10 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, v7, a3, &v23);
      v6 = v10;
      if ( v10 < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v19[3] = a3;
        v19[4] = v7;
        v19[5] = v9;
        v19[6] = v6;
      }
      else
      {
        v15 = v23;
        if ( v10 == 1075708748 && v23 != -1 )
          WdLogSingleEntry0(1LL);
        *a4 = v15;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, a3, v6, v7);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
  }
  return (unsigned int)v6;
}
