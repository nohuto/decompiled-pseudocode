__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edx
  __int64 Pool2; // rax
  __int64 v13; // rsi
  size_t v14; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v8 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)v8 )
    {
      v9 = v8 + 32;
      v10 = AMLIGetNameSpaceObject(*(void **)(v8 + 40));
      if ( v10 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            21,
            12,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            *(_QWORD *)(v9 + 8));
        }
        KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, *(_QWORD *)(v9 + 8), 0LL);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          21,
          11,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v10);
      }
      KeBugCheckEx(0xA5u, 0x18uLL, BugCheckParameter2, *(_QWORD *)(v9 + 8), 0LL);
    }
    Pool2 = ExAllocatePool2(64LL, *(unsigned int *)(a2 + 24) + 40LL, 1332765505LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)a2;
      *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a2 + 16);
      v14 = *(unsigned int *)(Pool2 + 24);
      *(_QWORD *)(Pool2 + 32) = Pool2 + 40;
      memmove((void *)(Pool2 + 40), *(const void **)(a2 + 32), v14);
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v13;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
