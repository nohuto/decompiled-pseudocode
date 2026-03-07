__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v9; // rcx
  int v10; // r8d
  bool v11; // zf
  int v12; // r8d
  __int64 v13; // rax
  int v14; // r9d
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // edx
  int v22; // [rsp+20h] [rbp-48h]
  bool v23; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 344);
  v2 = 0;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 48);
  if ( *(_WORD *)(v5 + 2) == 50 && *(_DWORD *)(v5 + 56) )
  {
    *(_DWORD *)(v1 + 116) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 336),
      -10000LL * *(unsigned int *)(v5 + 56));
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v6 + 24) <= 1u || (v9 = *(unsigned int *)(v5 + 64), (unsigned int)v9 >= *(_DWORD *)(v6 + 48)) )
    v7 = 0;
  else
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 56) + 2 * v9);
  *(_WORD *)(a1 + 112) = v7;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v2 = TR_EnsureInputBufferForTrbs(a1, (unsigned int)(*(_DWORD *)(a1 + 196) + 1));
    if ( v2 < 0 )
      return (unsigned int)-1073741670;
  }
  if ( *(_DWORD *)(v1 + 64) != 3 )
    goto LABEL_8;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v10 = *(_DWORD *)(a1 + 296);
    v11 = v10 == -1;
    v12 = v10 + 1;
    *(_DWORD *)(a1 + 296) = v12;
    if ( v11 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v12 = 1;
    }
    v13 = *(_QWORD *)(v1 + 96);
    v14 = *(_DWORD *)(v1 + 104);
    *(_DWORD *)(v1 + 200) = v12;
    v2 = SecureDmaEnabler_PrepareMemoryForDma(
           *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
           *(_QWORD *)(v1 + 72),
           v12,
           v14,
           v12,
           v1 + 168,
           v13);
    if ( v2 >= 0 )
    {
      if ( **(_DWORD **)(v1 + 96) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            v16,
            v17,
            v22,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
            43,
            (__int64)"ScatterGatherList->NumberOfElements must be 1");
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
LABEL_8:
      Control_Transfer_MapIntoRing(a1);
      return (unsigned int)v2;
    }
    *(_DWORD *)(v1 + 200) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        v17,
        v22,
        (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
        50,
        (__int64)"SecureDmaEnabler_PrepareMemoryForDma has failed");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  else
  {
    v18 = *(_QWORD **)(a1 + 40);
    v19 = *(_QWORD *)(v18[12] + 24LL);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v18);
    if ( KeGetCurrentIrql() != 2 )
      v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v23 = (*(_BYTE *)(v5 + 32) & 1) == 0;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64, bool))(*(_QWORD *)(v19 + 8) + 88LL))(
           v19,
           v20,
           *(_QWORD *)(v1 + 72),
           *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 72) + 44LL),
           *(_DWORD *)(v1 + 104),
           Control_EvtDmaCallback,
           a1,
           v23);
    if ( v3 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v21,
        14,
        36,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v2);
    }
  }
  return (unsigned int)v2;
}
