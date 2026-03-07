void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 a3)
{
  __m128i **v3; // rbx
  char v6; // al
  int v7; // edx
  int EndpointState; // edi
  int v9; // r9d
  char *v10; // rbp
  __m128i *v11; // rcx
  int v12; // edi
  int v13; // edi
  unsigned __int32 v14; // eax

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        (unsigned int)v3[10],
        a2,
        13,
        77,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36));
    }
    _m_prefetchw(v3 + 4);
    v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_5;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
  v10 = (char *)(a1 + 60);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddLLi((unsigned int)v3[10], (unsigned __int8)*v10, v3[2][8].m128i_u8[7], v9);
  v11 = *v3;
  v7 = 32;
  if ( (_mm_srli_si128((*v3)[21], 8).m128i_u8[0] & 0x20) != 0 && *v10 == 19 && EndpointState == 4 )
  {
LABEL_33:
    v7 = 16;
    goto LABEL_34;
  }
  if ( *v10 == 1 )
  {
    if ( EndpointState != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_ddL(
          (unsigned int)v3[10],
          v7,
          13,
          79,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          v3[2][8].m128i_i8[7],
          *((_DWORD *)v3 + 36),
          EndpointState);
      }
      Controller_ReportFatalErrorEx((unsigned int)*v3, 2, 4131, 0, 0LL, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      goto LABEL_5;
    }
    v14 = *((_DWORD *)v3 + 39);
    if ( v14 != 1 && v14 > v11[31].m128i_i32[3] )
    {
      v11[31].m128i_i32[3] = v14;
      v11[29].m128i_i8[8] = 1;
    }
    goto LABEL_33;
  }
  if ( *v10 == 19 )
  {
    v12 = EndpointState - 1;
    if ( !v12 )
    {
      ++v11[31].m128i_i32[2];
      ++v11[34].m128i_i32[1];
      v11[29].m128i_i8[8] = 1;
      goto LABEL_34;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        ++v11[31].m128i_i32[2];
        v7 = 36;
        ++v11[34].m128i_i32[1];
        v11[29].m128i_i8[8] = 1;
        goto LABEL_34;
      }
      Controller_ReportFatalErrorEx((_DWORD)v11, 2, 4100, 0, 0LL, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
    else
    {
      if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
      {
        v7 = 28;
        goto LABEL_34;
      }
      Controller_ReportFatalErrorEx((_DWORD)v11, 2, 4099, 0, 0LL, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_ddL(
        (unsigned int)v3[10],
        v7,
        13,
        80,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36),
        *v10);
    }
    Controller_HwVerifierBreakIfEnabled(
      (unsigned int)*v3,
      (unsigned int)v3[1],
      (unsigned int)v3[3],
      0x800000,
      (__int64)"Stop Endpoint Command failed",
      a1 + 24,
      a3);
    Controller_ReportFatalErrorEx((unsigned int)*v3, 2, 4099, 0, 0LL, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  }
LABEL_5:
  if ( (v6 & 2) != 0 )
    return;
  v7 = 12;
LABEL_34:
  ESM_AddEvent((KSPIN_LOCK *)v3 + 37, v7);
}
