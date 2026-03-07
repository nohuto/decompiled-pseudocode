__int64 __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r14
  int v9; // eax
  char v10; // cl
  void *v11; // rax
  char IsVmProcessOrVmValidation; // al
  int v13; // edi
  int v14; // eax
  unsigned int v16; // r12d
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned int v21; // eax
  _DWORD *v22; // rdi
  unsigned __int64 i; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const wchar_t *v27; // r9
  int v28; // eax
  void *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-89h]
  __int64 v31; // [rsp+28h] [rbp-81h]
  _DXGKARG_CREATEPROCESS v33; // [rsp+58h] [rbp-51h] BYREF
  __int128 v34; // [rsp+98h] [rbp-11h]
  __int128 v35; // [rsp+A8h] [rbp-1h]
  __int128 v36; // [rsp+B8h] [rbp+Fh]

  v3 = (__int64 *)a3;
  LODWORD(v6) = 0;
  if ( !*((_BYTE *)this + 109) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)a3 + 2) + 209LL) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 95) + 8LL) + 1176LL))(*((_QWORD *)a3 + 96));
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry2(2LL, v3[2], v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open vidmm process adapter info for adapter 0x%I64x. Status: 0x%I64x",
          v3[2],
          v6,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v6;
      }
      *((_BYTE *)this + 108) = 1;
    }
    v8 = v3[2];
    if ( (*(_DWORD *)(v8 + 2284) & 0x80u) == 0 && !DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v3[2]) )
      goto LABEL_7;
    v16 = *(_DWORD *)(v8 + 288);
    LODWORD(v6) = DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(this, v16);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry1(6LL, 2369LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate Pasid array",
        2369LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_50;
    }
    v17 = *(_DWORD *)(v8 + 436);
    if ( (v17 & 8) != 0 || (v17 & 4) != 0 || (v17 & 0x10) != 0 || (*((_DWORD *)a2 + 106) & 0x80) != 0 )
    {
      v18 = 0;
      v19 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 80LL);
      if ( v16 )
      {
        if ( v16 < 4 )
          goto LABEL_29;
        v20 = *((_QWORD *)this + 3);
        if ( v20 <= (unsigned __int64)this + 24 && v20 + 4LL * (v16 - 1) >= (unsigned __int64)this + 24 )
          goto LABEL_29;
        v21 = v16 & 0xFFFFFFFC;
        do
          v18 += 4;
        while ( v18 < v21 );
        v22 = (_DWORD *)*((_QWORD *)this + 3);
        for ( i = (16 * ((unsigned __int64)v21 >> 2)) >> 2; i; --i )
          *v22++ = v19;
        if ( v18 < v16 )
        {
LABEL_29:
          v24 = v18;
          v25 = v16 - v18;
          v26 = 4 * v24;
          do
          {
            *(_DWORD *)(v26 + *((_QWORD *)this + 3)) = v19;
            v26 += 4LL;
            --v25;
          }
          while ( v25 );
        }
      }
      goto LABEL_31;
    }
    if ( DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8) )
    {
      if ( SmmUseIommuV3Interface() )
      {
        LODWORD(v6) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C013BC00)(3LL, 0LL, 0LL);
        if ( (int)v6 >= 0 )
          goto LABEL_42;
      }
      else
      {
        LODWORD(v6) = -1073741811;
      }
      WdLogSingleEntry1(2LL, (int)v6);
      v27 = L"Failed to create Pasid domain: 0x%I64x";
      v31 = 0LL;
      v30 = (int)v6;
LABEL_36:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v30, v31, 0LL, 0LL, 0LL);
      goto LABEL_50;
    }
LABEL_42:
    v28 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, v16, (struct DXGADAPTER *)v8);
    v6 = v28;
    if ( v28 < 0 )
    {
      WdLogSingleEntry2(2LL, v8, v28);
      v27 = L"Failed to initialize PASIDs for the adapter 0x%I64x. Status: 0x%I64x";
      v31 = v6;
      v30 = v8;
      goto LABEL_36;
    }
LABEL_31:
    v3 = (__int64 *)a3;
LABEL_7:
    v9 = *(_DWORD *)(v8 + 2284);
    if ( (v9 & 0x80u) != 0 || (v9 & 0x40) != 0 || DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8) )
    {
      v10 = *((_BYTE *)a2 + 424);
      v11 = (void *)*((_QWORD *)a2 + 8);
      memset(&v33.hKmdProcess, 0, 48);
      v33.hDxgkProcess = v11;
      v33.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFC | (*((_DWORD *)a2 + 106) >> 1) & 1 | (2 * (v10 & 1));
      IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v8);
      v13 = *((_DWORD *)a2 + 106) >> 8;
      v33.Flags.Value = v33.Flags.Value & 0xFFFFFFF3 | (4
                                                      * (IsVmProcessOrVmValidation & 1 | (2
                                                                                        * ((*((_DWORD *)a2 + 106) & 0x80) != 0))));
      if ( (v13 & 1) != 0 )
      {
        v29 = (void *)*((_QWORD *)DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 76), *(_DWORD *)(v8 + 240)) + 6);
        v33.pProcessName = (WCHAR *)*((_QWORD *)a2 + 80);
        v33.ProcessNameLength = *((_DWORD *)a2 + 162);
        v33.hKmdVmWorkerProcess = v29;
      }
      v33.NumPasid = *(_DWORD *)(v8 + 288);
      v33.pPasid = (ULONG *)*((_QWORD *)this + 3);
      v14 = *((_DWORD *)a2 + 106) >> 9;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      if ( (v14 & 1) != 0 )
      {
        if ( !*(_BYTE *)(v8 + 2875) )
        {
          WdLogSingleEntry1(1LL, 2433LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pAdapter->AllowInSessionIsolatedContainer()",
            2433LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v33.Flags.Value |= 0x10u;
      }
      LODWORD(v6) = ADAPTER_RENDER::DdiCreateProcess((ADAPTER_RENDER *)v3, &v33);
      if ( (int)v6 < 0 )
      {
        WdLogSingleEntry1(3LL, 2450LL);
        goto LABEL_50;
      }
      *((_QWORD *)this + 6) = v33.hKmdProcess;
    }
    *((_BYTE *)this + 109) = 1;
    if ( (int)v6 >= 0 )
      return (unsigned int)v6;
LABEL_50:
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
  }
  return (unsigned int)v6;
}
