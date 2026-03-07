__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        _DWORD *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *const a5)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  DMMVIDPNTOPOLOGY *v9; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]

  v15 = -1;
  v16 = 0LL;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 6059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6059);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 6059);
  if ( a4 && a5 )
  {
    v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      if ( Path )
      {
        *a4 = *((_DWORD *)Path + 26);
        *(_WORD *)a5 = *((_WORD *)Path + 54);
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry3(3LL, v8, v7, this);
        v11 = -1071774937;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v11 = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v11 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  }
  return v11;
}
