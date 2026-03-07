__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, int *a3)
{
  char v3; // bp
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  int Ulong; // eax
  void *v10; // rdx
  int v11; // ebx
  unsigned int v12; // esi
  __int64 result; // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax

  v3 = a2;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = a1[6] + 120LL * (unsigned int)(a2 - 1);
  v8 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  Ulong = XilRegister_ReadUlong(v6, v8);
  *a3 = Ulong;
  v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1[1] + 72LL),
      (_DWORD)v10,
      11,
      227,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v3,
      Ulong);
    v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
  }
  v11 = *a3;
  v12 = 0;
  while ( 1 )
  {
    result = (unsigned int)*a3;
    if ( (_DWORD)result == -1
      || !*(_BYTE *)(v7 + 18)
      || (result & 0x20203) != 0x203
      || (result &= 0x1E0u, (_DWORD)result == 128)
      || (_DWORD)result != 480 && (_DWORD)result != 256 )
    {
      if ( v12 > 0x4B0 )
      {
        result = a1[1];
        ++*(_DWORD *)(result + 488);
        ++*(_DWORD *)(result + 532);
        *(_BYTE *)(result + 472) = 1;
      }
      return result;
    }
    if ( v12 == 6400 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v10,
        11,
        229,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v3,
        v12);
    }
    ++v12;
    KeStallExecutionProcessor(0xAu);
    v14 = XilRegister_ReadUlong(v6, v8);
    *a3 = v14;
    v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
    if ( v14 != v11 )
    {
      v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[1] + 72LL),
          (_DWORD)v10,
          11,
          230,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v3,
          v14);
        v10 = &WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids;
      }
    }
  }
  MicrosoftTelemetryAssertTriggeredMsgKM(
    "HW_COMPLIANCE: Port %2d Resume failed to complete before timeout",
    (unsigned int)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  v16 = a1[1];
  ++*(_DWORD *)(v16 + 484);
  ++*(_DWORD *)(v16 + 528);
  *(_BYTE *)(v16 + 472) = 1;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             v15,
             11,
             228,
             (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
             v3);
  }
  return result;
}
