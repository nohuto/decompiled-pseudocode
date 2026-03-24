/*
 * XREFs of RIMAddToActiveDevices @ 0x1C015B7FC
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C017C51C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017C758 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C01CFF08 (ApiSetPostPointerDeviceInRangeMessage.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rdi
  LARGE_INTEGER *QuadPart; // r14
  unsigned int v5; // ebx
  LARGE_INTEGER *v7; // rbp
  int v8; // edx
  _QWORD *v9; // rbp
  __int64 v10; // rax
  LARGE_INTEGER **v11; // rax
  LARGE_INTEGER **v12; // rcx
  DWORD v13; // eax
  DWORD LowPart; // eax
  DWORD v15; // eax
  void *v16; // rcx
  void *v17; // rcx
  int v18; // edx
  union _LARGE_INTEGER DueTime; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1 + 56;
  QuadPart = (LARGE_INTEGER *)a1[56].QuadPart;
  v5 = 0;
  ApiSetPostPointerDeviceInRangeMessage(a2);
  do
  {
    if ( QuadPart == v2 )
    {
      v9 = Win32AllocPoolZInit(0x20uLL, 2020635474LL);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v10 + 188) |= 2u;
        v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v8, 1, 39, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v10);
        }
        *v9 = a2;
        v11 = (LARGE_INTEGER **)(v9 + 1);
        v12 = (LARGE_INTEGER **)v2[1].QuadPart;
        if ( *v12 != v2 )
          __fastfail(3u);
        *v11 = v2;
        v9[2] = v12;
        *v12 = (LARGE_INTEGER *)v11;
        v2[1].QuadPart = (LONGLONG)v11;
        LowPart = a1[58].LowPart;
        if ( LowPart == -1 )
        {
          DueTime.LowPart = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3083);
          LowPart = a1[58].LowPart;
        }
        v15 = LowPart + 1;
        a1[58].LowPart = v15;
        if ( v15 == 1 )
        {
          v16 = (void *)a1[42].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v16, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v17 = (void *)a1[43].QuadPart;
          if ( v17 != (void *)-1LL )
          {
            v18 = 10;
            if ( a1[44].LowPart )
              v18 = a1[44].LowPart;
            DueTime.QuadPart = -10000LL * v18;
            ZwSetTimer(v17, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[47] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v5;
    }
    v7 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v7->QuadPart != a2 );
  v13 = v7[3].LowPart;
  if ( (v13 & 2) != 0 )
  {
    DueTime.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3057);
    v13 = v7[3].LowPart;
  }
  v5 = 1;
  if ( (v13 & 1) != 0 )
    v7[3].LowPart = v13 & 0xFFFFFFFE;
  return v5;
}
