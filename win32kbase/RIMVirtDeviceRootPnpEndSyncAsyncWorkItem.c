char __fastcall RIMVirtDeviceRootPnpEndSyncAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // dl
  _UNKNOWN **v4; // rax
  __int64 i; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9

  v1 = *(_QWORD *)(a1 + 24);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_S(
                   WPP_GLOBAL_Control->AttachedDevice,
                   v3,
                   WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                   (_DWORD)gRimLog,
                   4,
                   1,
                   51,
                   (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
                   *(_QWORD *)(a1 + 48));
  if ( !*(_BYTE *)(v1 + 81) && !*(_BYTE *)(v1 + 80) )
  {
    for ( i = *(_QWORD *)(v1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      LOBYTE(v4) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(i + 208), 0);
      if ( (_BYTE)v4 )
      {
        LODWORD(v4) = RIMShouldVirtualDeviceBeClosed(i);
        if ( (_DWORD)v4 )
        {
          LODWORD(v4) = *(_DWORD *)(i + 184);
          if ( ((unsigned __int16)v4 & 0x2000) == 0 )
          {
            *(_DWORD *)(i + 184) = (unsigned int)v4 | 0x100002;
            RIMDoOnPnpNotification(v1, i, v6, v7);
            *(_DWORD *)(i + 184) |= 0x100008u;
            LOBYTE(v4) = RIMDoOnPnpNotification(v1, i, v8, v9);
          }
        }
      }
    }
  }
  return (char)v4;
}
