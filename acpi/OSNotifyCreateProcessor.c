__int64 __fastcall OSNotifyCreateProcessor(volatile signed __int32 *a1, unsigned __int64 a2)
{
  int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = AMLIGetParent(a1);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      17,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      (char)a1);
  }
  v7 = ACPIBuildProcessorExtension(a1, v6, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        22,
        18,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        (char)a1,
        v7);
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v10 + 8), a2);
    v9 = 259;
  }
  AMLIDereferenceHandleEx(v5);
  return v9;
}
