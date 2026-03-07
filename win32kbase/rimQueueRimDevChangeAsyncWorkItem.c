void __fastcall rimQueueRimDevChangeAsyncWorkItem(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // di
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // [rsp+28h] [rbp-50h]

  v3 = a3;
  v6 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, a3, 5);
  if ( v6 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v6);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (LOBYTE(v7) = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        17,
        2,
        v9,
        17,
        (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
        a1[9],
        a1[4],
        a1[5],
        v3,
        *(_QWORD *)(a2 + 216),
        23);
    }
  }
}
