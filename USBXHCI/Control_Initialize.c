__int64 __fastcall Control_Initialize(__int64 a1)
{
  __int64 *v1; // rbx
  bool v3; // al
  unsigned __int64 v4; // rax
  int v5; // eax
  int v6; // esi
  unsigned __int64 v7; // rax
  int v9; // r9d
  char v10; // r8
  __int64 v11; // rdx
  char v12; // [rsp+40h] [rbp-31h]
  __int128 v13; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+58h] [rbp-19h]
  __int64 v15; // [rsp+60h] [rbp-11h]
  __int128 v16; // [rsp+68h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp+7h]
  _QWORD v18[3]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp+27h] BYREF
  __int128 v20; // [rsp+A8h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+47h]

  v1 = (__int64 *)(a1 + 56);
  DWORD1(v13) = 0;
  HIDWORD(v18[0]) = 0;
  HIDWORD(v19[0]) = 0;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  v3 = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x20000LL) == 0 && (*(_WORD *)(*v1 + 100) & 0x7FFu) >= 8;
  *(_BYTE *)(a1 + 320) = v3;
  v21 = 0LL;
  v20 = 0LL;
  LODWORD(v20) = 0;
  DWORD2(v20) = 0;
  v19[0] = 0LL;
  v19[1] = Control_WdfEvtTimerForTransferTimeout;
  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v14 = 0LL;
  LODWORD(v19[0]) = 40;
  v16 = v4;
  v13 = 0LL;
  BYTE4(v20) = 1;
  LODWORD(v13) = 56;
  v15 = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
         WdfDriverGlobals,
         v19,
         &v13,
         a1 + 336);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 10;
      v12 = v5;
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL);
LABEL_12:
      v11 = *v1;
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v11,
        14,
        v9,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        v10,
        *(_DWORD *)(*v1 + 144),
        v12);
    }
  }
  else
  {
    v18[2] = 1LL;
    v18[0] = 24LL;
    v18[1] = Control_WdfDpcForCanceledOnQueueTransferCompletion;
    v17 = 0LL;
    v7 = *(_QWORD *)(a1 + 72);
    v14 = 0LL;
    v15 = 0x100000001LL;
    v16 = v7;
    v13 = 0LL;
    LODWORD(v13) = 56;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 888))(
           WdfDriverGlobals,
           v18,
           &v13,
           a1 + 328);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
      v12 = v6;
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL);
      goto LABEL_12;
    }
  }
  return (unsigned int)v6;
}
