__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BOOL8 v9; // r9
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF

  v2 = a2;
  v4 = 0;
  if ( a2 != *((_DWORD *)this + 56) )
  {
    v5 = *((_QWORD *)this + 25);
    v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
           &v17);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x41Cu, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)this;
      v9 = *((_BYTE *)this + 193) != 0;
      v16 = 1 << *((_DWORD *)this + 54);
      v18 = 0;
      v10 = NtSetCompositionSurfaceIndependentFlipInfo(
              *(_QWORD *)(v8 + 32),
              (char *)this + 24,
              1LL,
              v9,
              v2,
              v16,
              (char *)this + 220,
              &v18);
      if ( v10 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0xxqqqqq_EventWriteTransfer(
            *(_DWORD *)(*(_QWORD *)this + 40LL),
            v11,
            *(_DWORD *)(*(_QWORD *)this + 40LL),
            *((_QWORD *)this + 3),
            *((_DWORD *)this + 55),
            1,
            *((_BYTE *)this + 193) != 0,
            v2,
            v18);
        v14 = v17;
        *((_DWORD *)this + 56) = v2;
        LOBYTE(v13) = 1;
        (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v14 + 80LL))(
          v14,
          g_qpcFrequency.QuadPart * v2 / 0x989680uLL,
          v13);
      }
      else
      {
        v4 = v10 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10 | 0x10000000, 0x426u, 0LL);
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  }
  return v4;
}
