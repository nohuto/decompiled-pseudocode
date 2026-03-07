__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v12; // rbx
  char *v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]
  DXGK_ENUM_PIVOT v25; // [rsp+A0h] [rbp+30h] BYREF

  v22 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 6027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6027);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 6027);
  if ( this && *((_DWORD *)this + 46) == 1833173002 )
  {
    v11 = (char *)this + 24;
    v12 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
    if ( v12 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      goto LABEL_18;
    v13 = (char *)v12 - 8;
    while ( v13 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) == (_DWORD)v7
        && *(_DWORD *)(*((_QWORD *)v13 + 12) + 24LL) == (_DWORD)v5 )
      {
        break;
      }
      v20 = (char *)*((_QWORD *)v13 + 1);
      v13 = v20 - 8;
      if ( v20 == v11 )
        v13 = 0LL;
    }
    if ( !v13 )
    {
LABEL_18:
      WdLogSingleEntry3(2LL, v7, v5, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Specified path (0x%I64x, 0x%I64x) does not exist in topology 0x%I64x",
        v7,
        v5,
        (__int64)this,
        0LL,
        0LL);
      v16 = -1071774937;
    }
    else
    {
      if ( *((_DWORD *)v13 + 28) == 254 )
      {
        v21 = WdLogNewEntry5_WdTrace(v11, v8, v9, v10);
        *(_QWORD *)(v21 + 24) = *(unsigned int *)(*((_QWORD *)v13 + 11) + 24LL);
        *(_QWORD *)(v21 + 32) = *(unsigned int *)(*((_QWORD *)v13 + 12) + 24LL);
      }
      else
      {
        *((_DWORD *)v13 + 28) = 254;
      }
      if ( !*((_QWORD *)this + 21) )
        WdLogSingleEntry0(1LL);
      v14 = *((_QWORD *)this + 21);
      LOBYTE(v10) = a4;
      v25.VidPnSourceId = v7;
      v25.VidPnTargetId = v5;
      v15 = VIDPN_MGR::FormalizeVidPnChange(
              *(_QWORD *)(v14 + 48),
              (D3DKMDT_HVIDPN)(v14 & -(__int64)(v14 != -88)),
              8,
              v10,
              &v25);
      v16 = v15;
      if ( v15 < 0 )
        WdLogSingleEntry4(2LL, v7, v5, v14, v15);
      else
        v16 = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v16 = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  }
  return v16;
}
