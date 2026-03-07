__int64 __fastcall ACPIBuildWakeEventDeviceContext(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  char v4; // dl
  const char *v6; // rax
  const char *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v10; // r14
  int v11; // eax
  int v12; // edx
  unsigned int v13; // r10d
  void *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  v4 = 0;
  if ( *(_DWORD *)v2 >= 2u )
  {
    v10 = BugCheckParameter2 + 968;
    v11 = AMLIGetNameSpaceObject(*(void **)(v2 + 40));
    v12 = 0;
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = &unk_1C00622D0;
      if ( BugCheckParameter2 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 + 8);
        v12 = BugCheckParameter2;
        if ( (v15 & 0x200000000000LL) != 0 && (v15 & 0x400000000000LL) != 0 )
          v14 = *(void **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v12, (_DWORD)v14, 18);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    if ( *(_WORD *)(**(_QWORD **)v10 + 66LL) != 6 )
    {
      if ( BugCheckParameter2 )
        v12 = BugCheckParameter2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v12, 10, 19);
      }
      KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    v16 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( *(_WORD *)(v16 + 50) != 1 )
      KeBugCheckEx(0xA5u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(unsigned __int16 *)(v16 + 50));
    *(_DWORD *)(BugCheckParameter2 + 976) = *(_DWORD *)(v16 + 64);
    _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 1008), 0x4000000000uLL);
    return v13;
  }
  else
  {
    v6 = (const char *)&unk_1C00622D0;
    v7 = (const char *)&unk_1C00622D0;
    if ( BugCheckParameter2 )
    {
      v8 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x11u,
        (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        13,
        v4,
        v6,
        v7);
    return 3221225485LL;
  }
}
