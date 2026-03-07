__int64 __fastcall NotifyShell::CuratedWindowHidden(__int64 a1)
{
  __int64 result; // rax
  char v3; // dl

  result = *(unsigned int *)(a1 + 320);
  if ( (result & 2) != 0 )
  {
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        23LL,
        4u,
        0x16u,
        0x17u,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        a1);
    *(_DWORD *)(a1 + 320) &= ~2u;
    return anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)a1, 10, 0, 0, 0);
  }
  return result;
}
