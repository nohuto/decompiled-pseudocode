__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  signed __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int i; // esi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  signed __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  signed __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v1 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( !*((_QWORD *)this + 8) )
  {
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v17 = *(_OWORD *)*((_QWORD *)this + 2);
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, signed __int64 *))(*g_DeviceManager + 40LL))(
             g_DeviceManager,
             &v17,
             &v16);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x149u, 0LL);
        goto LABEL_6;
      }
      v5 = v16;
      v16 = 0LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, signed __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v15);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x150u, 0LL);
        goto LABEL_6;
      }
      v9 = (*(__int64 (__fastcall **)(signed __int64, __int64 *))(*(_QWORD *)v15 + 136LL))(v15, &v14);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x152u, 0LL);
        goto LABEL_6;
      }
      for ( i = 0; i < *((_DWORD *)this + 10); ++i )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(
          v14,
          _mm_unpacklo_ps(
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0],
          0LL);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
          v14,
          _mm_unpacklo_ps(
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
          v14,
          _mm_unpacklo_ps(
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
          v14,
          _mm_unpacklo_ps(
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
            (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 1LL);
      }
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
      v1 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x166u, 0LL);
        goto LABEL_6;
      }
      v5 = v15;
      v15 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v5, 0LL) && v5 )
      (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_6:
  if ( v16 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v1;
}
