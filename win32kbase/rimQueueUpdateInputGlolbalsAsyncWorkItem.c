void __fastcall rimQueueUpdateInputGlolbalsAsyncWorkItem(_DWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  char v5; // dl
  int v6; // [rsp+28h] [rbp-50h]

  v3 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 8);
  if ( v3 )
  {
    v4 = a1[277] + 1;
    a1[277] = v4;
    if ( v4 > a1[278] )
      a1[278] = v4;
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v3);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v5 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        62LL,
        2u,
        v6,
        0x3Eu,
        (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  }
}
