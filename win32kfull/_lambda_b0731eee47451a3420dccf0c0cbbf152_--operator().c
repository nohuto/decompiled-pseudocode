// write access to const memory has been detected, the output may be wrong!
void __fastcall lambda_b0731eee47451a3420dccf0c0cbbf152_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // di
  PEPROCESS *v6; // rax
  LONGLONG v7; // rbx
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // r9d

  v5 = 1;
  v6 = (PEPROCESS *)gppiStarting;
  v7 = MEMORY[0xFFFFF78000000014] - 300000000LL;
  while ( v6 )
  {
    if ( v7 > PsGetProcessCreateTimeQuadPart(*v6) )
    {
      *(_DWORD *)(gppiStarting + 12LL) &= 0xFFFFFEBF;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gFullLog,
          4,
          2,
          12,
          (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
          *(_DWORD *)(gppiStarting + 56LL));
      }
    }
    v6 = *(PEPROCESS **)(gppiStarting + 360LL);
    gppiStarting = v6;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&a5, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = v5;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      v12,
      4,
      2,
      13,
      (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids);
  }
  memset_0(qword_1C03611B0, 0, 0x168uLL);
  ExReleasePushLockExclusiveEx(a5, 0LL);
  KeLeaveCriticalRegion();
}
