__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned int v10; // ebp
  char v11; // al
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // rdx
  int v15; // r9d
  unsigned __int8 (__fastcall *v16)(__int64); // rax
  unsigned int v17; // ebx
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // edi
  unsigned int v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0;
  v7 = 0;
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v8 = v33;
  if ( a3 && (!*((_BYTE *)this + 11308) || !*((_BYTE *)a2 + 177)) )
    a3 = 0;
  v9 = *((_QWORD *)a2 + 2);
  if ( a3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 96LL))(*((_QWORD *)a2 + 2));
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 104LL))(v9, &v32);
    v12 = 0LL;
    v13 = v11;
    if ( CCommonRegistryData::m_customRefreshRateMode && v10 )
    {
      v14 = *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL);
      if ( !(_BYTE)v14
        || -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5) != 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
          McTemplateU0tu_EventWriteTransfer(
            0x6DB6DB6DB6DB6DB7LL,
            v14,
            *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL),
            0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5));
        goto LABEL_31;
      }
      if ( *((_BYTE *)this + 11301) )
      {
        if ( !COverlayContext::IsFullscreen((__int64 **)this, a2) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
            McTemplateU0qqqq_EventWriteTransfer(
              (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (__int64)&CustomDurationRejectPlaneFullscreenTest,
              *((unsigned int *)a2 + 17),
              *((_DWORD *)a2 + 18),
              *((_DWORD *)a2 + 19),
              *((_DWORD *)a2 + 20));
          goto LABEL_31;
        }
      }
      else if ( *((_BYTE *)this + 11024) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CustomDurationRejectDesktopPlaneEnabledTest,
            0LL,
            1u,
            &v34);
        goto LABEL_31;
      }
      if ( v10 == *((_DWORD *)a2 + 49) && v32 == *((_DWORD *)a2 + 50) && v13 == *((_BYTE *)a2 + 204) )
      {
        v7 = *((_DWORD *)a2 + 48);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        {
          v15 = -1;
          if ( v13 )
            v15 = v32;
          McTemplateU0qqq_EventWriteTransfer(v32, (__int64)&CustomDurationUseCachedDuration, v10, v15, v7);
        }
      }
      else
      {
        LOBYTE(v12) = v13;
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v33 + 168LL))(v33, v10, v12, v32);
        v7 = v23;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        {
          v25 = -1;
          if ( v13 )
            v25 = v32;
          McTemplateU0qqq_EventWriteTransfer(v24, (__int64)&CustomDurationComputeSupportedDuration, v10, v25, v23);
        }
        *((_DWORD *)a2 + 50) = v32;
        *((_DWORD *)a2 + 49) = v10;
        *((_BYTE *)a2 + 204) = v13;
        *((_DWORD *)a2 + 48) = v7;
      }
      goto LABEL_22;
    }
LABEL_31:
    *((_DWORD *)a2 + 49) = 0;
    *((_DWORD *)a2 + 50) = 0;
    *((_BYTE *)a2 + 204) = 0;
    *((_DWORD *)a2 + 48) = 0;
LABEL_22:
    v8 = v33;
  }
  v16 = *(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 320LL);
  if ( a3 )
  {
    if ( !v16(v9) )
    {
      v17 = *((_DWORD *)a2 + 52);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 352LL);
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      v20 = v18(v9, *((_QWORD *)a2 + 3), v19, v17);
      v6 = v20;
      if ( v20 >= 0 )
      {
        if ( !*((_BYTE *)a2 + 183) )
        {
          LOBYTE(v22) = 1;
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 408LL))(v9, 3LL, v22);
        }
        *((_BYTE *)a2 + 183) = 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC1Au, 0LL);
      }
    }
  }
  else if ( v16(v9) )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 376LL))(v9, *((_QWORD *)a2 + 3));
    v6 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC2Fu, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 408LL))(v9, 3LL);
    *((_BYTE *)a2 + 183) = 0;
  }
  if ( *((_BYTE *)a2 + 183) )
  {
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 368LL))(v9, *((_QWORD *)a2 + 3), v7);
    v30 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC41u, 0LL);
    if ( !v6 || v6 >= 0 && v30 < 0 )
      return (unsigned int)v30;
  }
  return (unsigned int)v6;
}
