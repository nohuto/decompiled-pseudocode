__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 Pool2; // rsi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  int NativeMethodHandleFromAcpiObject; // eax
  int v10; // edx
  __int64 v11; // r15
  int v12; // edx
  int v13; // edx
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v16 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v6 = -1073741823;
  v7 = AMLIGetParent(v3);
  v8 = v7;
  if ( v7 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v7, &v16);
    v6 = NativeMethodHandleFromAcpiObject;
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      v11 = v16;
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v11;
      v6 = AcpiConvertObjDataToMethodArguments(*(_DWORD *)(a1 + 44), *(_QWORD *)(a1 + 48), &P, &v17);
      if ( v6 >= 0 )
      {
        if ( !*(_DWORD *)(a1 + 40) || (Pool2 = ExAllocatePool2(64LL, 64LL, 1315988289LL)) != 0 )
        {
          a2[4] = P;
          a2[3] = v17;
          *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
          if ( Pool2 )
          {
            a2[7] = Pool2;
            *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
            a2[6] = 64LL;
          }
          v6 = 0;
          goto LABEL_18;
        }
        v6 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v13, 21, 20);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v12, 19, 19);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        19,
        18,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        v8,
        NativeMethodHandleFromAcpiObject);
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4E706341u);
LABEL_18:
    AMLIDereferenceHandleEx(v8);
  }
  return (unsigned int)v6;
}
