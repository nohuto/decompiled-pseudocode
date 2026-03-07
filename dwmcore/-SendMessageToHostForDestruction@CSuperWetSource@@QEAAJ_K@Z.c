__int64 __fastcall CSuperWetSource::SendMessageToHostForDestruction(CSuperWetSource *this, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _OWORD v8[4]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v9; // [rsp+68h] [rbp-9h]
  _OWORD v10[4]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  memset_0(v8, 0, 0x48uLL);
  v10[1] = v8[1];
  LODWORD(v8[0]) = 9;
  *((_QWORD *)&v8[0] + 1) = a2;
  v10[0] = v8[0];
  v10[2] = v8[2];
  v11 = v9;
  v10[3] = v8[3];
  v4 = SendRemotingMetaData(v10);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0px_EventWriteTransfer(v5, &EVTDESC_UNREGISTER_VAIL_STROKE_ON_HOST, this, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
}
