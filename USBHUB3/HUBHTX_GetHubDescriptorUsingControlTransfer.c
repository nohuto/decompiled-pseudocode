__int64 __fastcall HUBHTX_GetHubDescriptorUsingControlTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 256) == 1 || *(_DWORD *)(a1 + 256) == 2 )
  {
    LOBYTE(a4) = 41;
    v6 = 71LL;
LABEL_7:
    result = HUBHTX_GetDescriptor(a1, a1 + 1180, v6, a4, v7, 1);
    if ( (int)result >= 0 )
      return result;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 256) == 3 )
  {
    LOBYTE(a4) = 42;
    v6 = 12LL;
    goto LABEL_7;
  }
  LODWORD(result) = -1073741823;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x10u,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v8);
  }
  return HUBSM_AddEvent(a1 + 1264, 2004LL);
}
