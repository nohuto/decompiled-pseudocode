__int64 __fastcall OSNotifyCreateDevice(volatile signed __int32 *BugCheckParameter3, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rsi
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  int v9; // r9d
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, (ULONG_PTR)v3, 0LL);
  v8 = ACPIBuildDeviceExtension(v3, v6, &v11);
  if ( !v11 )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  if ( v8 < 0 )
  {
LABEL_8:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 12;
LABEL_13:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        22,
        v9,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        (char)v3,
        v8);
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  _InterlockedOr64((volatile signed __int64 *)(v11 + 8), a2);
  LOBYTE(v3) = v11;
  v8 = ACPIBuildDeviceRequest(v11);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 13;
    goto LABEL_13;
  }
LABEL_14:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v8;
}
