__int64 __fastcall Control_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // r11
  __int64 *v11; // rdx
  _OWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h]

  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v13);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063090);
  v7 = *((_QWORD *)&v13[0] + 1);
  v8 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_QWORD *)(v4 + 48);
    v10 = *(_BYTE *)(v9 + 135);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      v9,
      v6,
      39,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      v10,
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      a2);
  }
  Control_TransferData_Initialize(v4, a2, v7, (_QWORD *)v8);
  *(_DWORD *)(v8 + 112) = 3;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v11 = *(__int64 **)(v4 + 368);
  if ( *v11 != v4 + 360 )
    __fastfail(3u);
  *(_QWORD *)v8 = v4 + 360;
  *(_QWORD *)(v8 + 8) = v11;
  *v11 = v8;
  *(_QWORD *)(v4 + 368) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(v4 + 328));
}
