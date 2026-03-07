__int64 CreateKernelIocpWcp()
{
  char v0; // bl
  int v1; // eax
  int v2; // edx
  int v3; // r8d
  _DWORD v5[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-30h]
  __int64 v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]
  __int128 v10; // [rsp+70h] [rbp-18h]
  __int64 v11; // [rsp+90h] [rbp+8h] BYREF

  v11 = 0LL;
  v5[1] = 0;
  v9 = 0;
  v6 = 0LL;
  v0 = 1;
  v7 = 0LL;
  v5[0] = 48;
  v8 = 512;
  v10 = 0LL;
  v1 = ZwCreateWaitCompletionPacket(&v11, 1LL, v5);
  if ( v1 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v0 = 0;
    }
    if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = v0;
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        14,
        (__int64)&WPP_1759bcbb9db2365e46dd4c1dded80818_Traceguids,
        v1);
    }
  }
  return v11;
}
