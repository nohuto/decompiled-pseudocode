__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  char *Pool2; // rax
  int v5; // edx
  const char *v6; // rsi
  char *v7; // r15
  int v8; // ebp
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  const char *v14; // rsi
  const char *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  v17 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v17);
  if ( (int)result >= 0 )
  {
    v3 = v17;
    if ( v17 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 21LL, 1399874369LL);
      v6 = (const char *)&unk_1C00622D0;
      v7 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0x15uLL, "ACPI\\DockDevice");
        v3[76] = v7;
        v8 = ACPIAmliBuildObjectPathname(a1, &P, 0);
        if ( v8 >= 0 )
        {
          v3[77] = P;
          v3[23] = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
          *((_DWORD *)v3 + 48) = 4;
          *((_DWORD *)v3 + 50) = 0;
          _InterlockedOr64(v3 + 1, 0x209E00000020008uLL);
          v14 = (const char *)&unk_1C00622D0;
          v15 = (const char *)&unk_1C00622D0;
          v16 = v17[1];
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v14 = (const char *)v3[76];
            if ( (v16 & 0x400000000000LL) != 0 )
              v15 = (const char *)v17[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
              v8,
              (char)v17,
              v14,
              v15);
          return (unsigned int)v8;
        }
        v9 = v3[1];
        v10 = (const char *)&unk_1C00622D0;
        v11 = (const char *)&unk_1C00622D0;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = (const char *)v3[76];
          if ( (v9 & 0x400000000000LL) != 0 )
            v11 = (const char *)v3[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0x53u,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            v8,
            (char)v3,
            v10,
            v11);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            21,
            82,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            21);
        }
        v8 = -1073741670;
      }
      v12 = v3[1];
      v13 = (const char *)&unk_1C00622D0;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v6 = (const char *)v3[76];
        if ( (v12 & 0x400000000000LL) != 0 )
          v13 = (const char *)v3[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v8,
          (char)v3,
          v6,
          v13);
      if ( P )
      {
        _InterlockedAnd64(v3 + 1, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        v17[77] = 0LL;
      }
      if ( v7 )
      {
        _InterlockedAnd64(v3 + 1, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v7, 0);
        v17[76] = 0LL;
      }
      _InterlockedOr64(v3 + 1, 0x2000000000000uLL);
      return (unsigned int)v8;
    }
  }
  return result;
}
