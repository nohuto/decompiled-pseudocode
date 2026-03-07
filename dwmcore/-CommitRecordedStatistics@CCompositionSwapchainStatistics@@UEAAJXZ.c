__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(CCompositionSwapchainStatistics *this)
{
  _QWORD *v1; // r15
  unsigned int v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 i; // r14
  void *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h]
  int v20; // [rsp+48h] [rbp-21h] BYREF
  GUID v21; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h]
  void *v23; // [rsp+70h] [rbp+7h] BYREF
  __int64 v24; // [rsp+78h] [rbp+Fh]
  __int64 v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]

  v1 = (_QWORD *)((char *)this + 64);
  v3 = 0;
  if ( !wil::operator!=<IFlipConsumer,wil::err_returncode_policy>((_QWORD *)this + 8)
    || *((_QWORD *)this + 3) == *((_QWORD *)this + 4) )
  {
LABEL_17:
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    return v3;
  }
  v19 = 0LL;
  v20 = 2;
  v18 = 0LL;
  LODWORD(v22) = 4;
  *((_QWORD *)&v22 + 1) = &v20;
  v21 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>((const void **)&v18, 0LL, &v21);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 288LL))(*((_QWORD *)this + 2));
  v6 = *((_QWORD *)&v18 + 1);
  v7 = -286331153;
  v8 = v19;
  v23 = (void *)v4;
  v24 = *((_QWORD *)this + 9);
  v25 = *((_QWORD *)this + 6);
  v9 = -286331153 * ((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 2);
  v21 = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
  LODWORD(v22) = 32;
  v26 = v9;
  *((_QWORD *)&v22 + 1) = &v23;
  if ( *((_QWORD *)&v18 + 1) == v19 )
  {
    std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
      (const void **)&v18,
      *((_BYTE **)&v18 + 1),
      &v21);
    v8 = v19;
    v10 = *((_QWORD *)&v18 + 1);
  }
  else
  {
    **((_OWORD **)&v18 + 1) = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
    *(_OWORD *)(v6 + 16) = v22;
    v10 = v6 + 32;
    *((_QWORD *)&v18 + 1) = v10;
  }
  v11 = *((_QWORD *)this + 4);
  for ( i = *((_QWORD *)this + 3); i != v11; i += 60LL )
  {
    LODWORD(v22) = 60;
    *((_QWORD *)&v22 + 1) = i;
    v21 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
    if ( v10 == v8 )
    {
      std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        (const void **)&v18,
        (_BYTE *)v10,
        &v21);
      v8 = v19;
      v10 = *((_QWORD *)&v18 + 1);
    }
    else
    {
      *(GUID *)v10 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
      *(_OWORD *)(v10 + 16) = v22;
      v10 += 32LL;
      *((_QWORD *)&v18 + 1) = v10;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0pxxx_EventWriteTransfer(v7, v5, *v1, v24, v25, (char)v23);
  v13 = (void *)v18;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v1 + 56LL))(
          *v1,
          (unsigned int)((v10 - (__int64)v18) >> 5),
          v18);
  v3 = v14;
  if ( v14 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 288LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = v16;
    if ( v13 )
      std::_Deallocate<16,0>(v13, (v8 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFE0uLL);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD4u, 0LL);
  if ( v13 )
    std::_Deallocate<16,0>(v13, (v8 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFE0uLL);
  return v3;
}
