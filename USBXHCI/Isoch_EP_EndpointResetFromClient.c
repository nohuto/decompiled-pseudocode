_UNKNOWN **__fastcall Isoch_EP_EndpointResetFromClient(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v3) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_DD(
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                            v3,
                            14,
                            14,
                            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
                            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *(_BYTE *)(a1 + 334) = 1;
  return result;
}
