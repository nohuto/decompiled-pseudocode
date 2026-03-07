__int64 __fastcall CSuperWetSource::SendMessageToHostForCreation(CSuperWetSource *this, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+28h] [rbp-49h] BYREF
  __m256i v15; // [rsp+48h] [rbp-29h]
  __int64 v16; // [rsp+68h] [rbp-9h]
  _OWORD v17[2]; // [rsp+78h] [rbp+7h] BYREF
  __m256i v18; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(this);
  if ( v4 < 0 )
  {
    v5 = 82LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  memset_0(&v14, 0, 0x48uLL);
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  LODWORD(v14) = 8;
  *((_QWORD *)&v14 + 1) = a2;
  v8 = *(_OWORD *)(v7[2] + 88LL);
  v15.m256i_i64[0] = v7[4];
  v9 = v7[3];
  v17[1] = v8;
  LODWORD(v7) = *(_DWORD *)(v9 + 8);
  v10 = *((_QWORD *)this + 13);
  v15.m256i_i32[2] = (int)v7;
  v11 = *(_OWORD *)(v10 + 88);
  v15.m256i_i32[7] = *((_DWORD *)this + 32);
  LODWORD(v10) = *((_DWORD *)this + 33);
  *(_OWORD *)((char *)&v15.m256i_u64[1] + 4) = v11;
  LODWORD(v16) = v10;
  v12 = *((_QWORD *)this + 14);
  v17[0] = v14;
  HIDWORD(v16) = *(_DWORD *)(v12 + 8);
  v18 = v15;
  v19 = v16;
  v4 = SendRemotingMetaData(v17);
  if ( v4 < 0 )
  {
    v5 = 96LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0px_EventWriteTransfer(v13, &EVTDESC_REGISTER_VAIL_STROKE_ON_HOST, this, a2);
  return 0LL;
}
