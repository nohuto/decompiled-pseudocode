__int64 __fastcall SecureChannel_SendRequestSynchronously(__int64 a1, GUID *a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v10; // rcx
  unsigned int Data1; // eax
  __int64 v12; // rax
  char v13; // r12
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r14d
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *BugCheckParameter4; // [rsp+20h] [rbp-71h]
  char v25; // [rsp+50h] [rbp-41h]
  int v26; // [rsp+54h] [rbp-3Dh]
  unsigned int v27; // [rsp+58h] [rbp-39h]
  _QWORD v28[2]; // [rsp+80h] [rbp-11h] BYREF
  int v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+94h] [rbp+3h]
  GUID v31; // [rsp+98h] [rbp+7h] BYREF

  v6 = 0LL;
  HIDWORD(v28[0]) = 0;
  v25 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v10 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  Data1 = a2[2].Data1;
  a2[1].Data1 = v10;
  v27 = v10;
  v26 = Data1;
  v31 = GUID_NULL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      EtwActivityIdControl(3u, a2);
      v10 = v27;
    }
    v31 = *a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(v10, v6, a2, a2[2].Data1, a3, a5, v10);
    v13 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    v13 = 0;
  }
  v28[0] = 1LL;
  v30 = 0;
  v28[1] = a2;
  v29 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(v15 + 8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v15 + 16), v14, 19, 13, (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids);
      }
      KeBugCheckEx(0x144u, 4uLL, 0LL, 2uLL, 3uLL);
    }
    Controller_LowerAndTrackIrql(*(_QWORD **)(v15 + 8));
    v25 = 1;
  }
  BugCheckParameter4 = v28;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 3592))(
          WdfDriverGlobals,
          *(_QWORD *)a1,
          0LL,
          6078464LL);
  if ( v25 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v19 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
        v16,
        19,
        14,
        (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
        v19);
      goto LABEL_25;
    }
LABEL_27:
    v20 = v26;
    goto LABEL_28;
  }
  if ( !a5 )
    goto LABEL_27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, (unsigned int)v28, a5, 0);
  v19 = -1073741306;
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_27;
  v20 = v26;
  WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, (_DWORD)BugCheckParameter4, v26, v19);
LABEL_28:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v13 )
  {
    v21 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx_EtwWriteTransfer(v22, v21 % *(_QWORD *)(a1 + 16), &v31, v20, v27, v21 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v19;
}
