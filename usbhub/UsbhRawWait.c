void __fastcall UsbhRawWait(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r8
  LARGE_INTEGER v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  LARGE_INTEGER v7; // rcx
  bool v8; // cc
  __int64 v9; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v1 = a1;
    PerformanceFrequency.QuadPart = 0LL;
    if ( dword_1C006B6D4 == 1
      && (memset(&Event, 0, sizeof(Event)),
          KeInitializeEvent(&Event, NotificationEvent, 0),
          (v2 = ((__int64 (__fastcall *)(void *, struct _KEVENT *, __int64))g_ExAllocateTimer)(
                  &UsbhHighResTimerCompletion,
                  &Event,
                  4LL)) != 0) )
    {
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_ExSetTimer)(v2, -10000LL * (unsigned int)v1, 0LL, 0LL);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LOBYTE(v3) = 1;
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))g_ExDeleteTimer)(v2, 1LL, v3, 0LL);
    }
    else
    {
      v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v5 = ((unsigned __int64)(PerformanceFrequency.QuadPart * v1) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      v6 = v4.QuadPart + ((v5 + ((unsigned __int64)(PerformanceFrequency.QuadPart * v1 - v5) >> 1)) >> 9);
      v13 = v6;
      Interval.QuadPart = -10000 * (int)v1;
      while ( 1 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v8 = v7.HighPart <= SHIDWORD(v6);
        if ( v7.HighPart == HIDWORD(v6) )
        {
          if ( v7.LowPart >= (unsigned int)v6 )
            return;
          v8 = v7.HighPart <= SHIDWORD(v6);
        }
        if ( !v8 )
          break;
        v9 = (__int64)(v6 - v7.QuadPart) / (__int64)(PerformanceFrequency.QuadPart / 0x3E8uLL);
        PerformanceFrequency.QuadPart /= 0x3E8uLL;
        if ( (unsigned int)v9 | ((unsigned __int64)((__int64)(v6 - v7.QuadPart) / PerformanceFrequency.QuadPart) >> 32) )
          Interval.QuadPart = -10000 * v9;
        else
          Interval.QuadPart = -10000LL;
      }
    }
  }
}
