void __fastcall Endpoint_ControlEndpointResetCompletion(char *a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  char v6; // cl
  int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // r9d
  int v10; // r9d
  int v11; // r8d
  int v12; // edx

  v3 = *((_QWORD *)a1 + 6);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        84,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
LABEL_8:
    _m_prefetchw((const void *)(v3 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v3 + 296), 12);
    return;
  }
  v6 = a1[60];
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v7,
        13,
        85,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalErrorEx(*(_QWORD *)v3, 2u, 4102, 0LL, 0LL, *(_QWORD *)(v3 + 16), v3, 0LL);
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(*(_QWORD *)v3 + 144LL);
  TR_InitializeTransferRing(*(_QWORD *)(v3 + 88));
  memset(a1, 0, 0x60uLL);
  v9 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
  *((_QWORD *)a1 + 5) = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
  *((_QWORD *)a1 + 6) = v3;
  *((_DWORD *)a1 + 9) = v9 | 0x4000;
  *((_QWORD *)a1 + 3) = Endpoint_GetDequeuePointer(v3, 0);
  *((_DWORD *)a1 + 9) = v10 ^ (v10 ^ (*(_DWORD *)(v3 + 144) << 16)) & 0x1F0000;
  v11 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  a1[39] = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *((_WORD *)a1 + 19) & 0x1F;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_ddi(*(_QWORD *)(v3 + 80), v12, v11, 86);
  }
  Command_SendCommand(v8, (__int64)a1);
}
