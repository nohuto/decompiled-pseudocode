char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  _QWORD *v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // r10d
  int v11; // edx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  BOOL v17; // ecx
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h]

  v5 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    v14 = 4LL;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v20,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v14 = 3LL;
LABEL_30:
    Etw_CommandWaitlisted(v5, a1, a2, v14);
    v12 = *(_QWORD **)(a1 + 104);
    v15 = a1 + 96;
    if ( *v12 == v15 )
    {
      *(_QWORD *)a2 = v15;
      *(_QWORD *)(a2 + 8) = v12;
      *v12 = a2;
      *(_QWORD *)(v15 + 8) = a2;
      return (char)v12;
    }
LABEL_45:
    __fastfail(3u);
  }
  if ( (_DWORD)v5 == 4 )
  {
    LOBYTE(v12) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 3LL, 0LL);
    return (char)v12;
  }
  v7 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v7 != v7 && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 336LL), 0x1Fu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        52,
        v20,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v14 = 2LL;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      53,
      v20,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v8 = 0;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 44);
  if ( v9 + 1 != *(_DWORD *)(a1 + 48) )
    v8 = v9 + 1;
  if ( v8 == v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v8, v9, a4, v20, a2, v9, v10, v8);
    *(_DWORD *)(a2 + 16) = 0;
    v14 = 1LL;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v8,
      v9,
      a4,
      v20,
      a2,
      v9,
      *(_BYTE *)(a1 + 72) + 16 * v9,
      v10,
      *(_DWORD *)(a1 + 64),
      v8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16_EtwWriteTransfer(v5, v8, v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  if ( (int)XilCommand_AddCommandCRBToRing(a1, a2) < 0 )
  {
    LOBYTE(v12) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 1LL, 0LL);
    return (char)v12;
  }
  v11 = 2 * *(_DWORD *)(a1 + 40);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v19, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  v12 = *(_QWORD **)(a1 + 88);
  v13 = (_QWORD *)*v7;
  if ( (_QWORD *)*v12 != v7 )
    goto LABEL_45;
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v12;
  *v12 = a2;
  *(_QWORD *)(a1 + 88) = a2;
  if ( ++*(_DWORD *)(a1 + 40) == *(_DWORD *)(a1 + 48) )
  {
    v16 = *(_QWORD *)(a1 + 72);
    v11 = 2 * *(_DWORD *)(a1 + 48);
    LOBYTE(v12) = *(_BYTE *)(v16 + 16LL * *(unsigned int *)(a1 + 48) + 12) ^ 1;
    *(_BYTE *)(v16 + 16LL * *(unsigned int *)(a1 + 48) + 12) = (_BYTE)v12;
    _InterlockedOr(v19, 0);
    v17 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        LOBYTE(v12) = WPP_RECORDER_SF_ddd(
                        *(_QWORD *)(a1 + 16),
                        v11,
                        7,
                        56,
                        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                        *(_DWORD *)(a1 + 40),
                        *(_DWORD *)(a1 + 48),
                        v17);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v13 == v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v11, 7, 57, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    LOBYTE(v12) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                    WdfDriverGlobals,
                    *(_QWORD *)(a1 + 24),
                    -10000000LL);
  }
  return (char)v12;
}
