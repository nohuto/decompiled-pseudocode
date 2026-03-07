void __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  int v6; // edx
  char v7; // cl
  int v8; // eax
  int v9; // edx
  int v10; // edx

  v2 = *(__int64 **)(a1 + 48);
  v5 = *v2;
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v5 + 80),
        v6,
        13,
        54,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144));
    }
LABEL_11:
    v8 = -1073741823;
    goto LABEL_12;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        v9,
        13,
        56,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144),
        v7);
    }
    Controller_ReportFatalErrorEx(
      *(_QWORD *)v5,
      2u,
      4130 - (*(_BYTE *)(v5 + 37) != 0),
      0LL,
      0LL,
      *(_QWORD *)(v5 + 16),
      v5,
      0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      v6,
      13,
      55,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144));
  }
  v8 = 0;
LABEL_12:
  *(_DWORD *)(v5 + 288) = 0;
  if ( v8 < 0 )
  {
    _m_prefetchw((const void *)(v5 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u) & 2) != 0 )
      return;
    v10 = 12;
  }
  else
  {
    v10 = 16;
  }
  ESM_AddEvent((KSPIN_LOCK *)(v5 + 296), v10);
}
