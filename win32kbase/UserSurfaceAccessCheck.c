/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C00A3930
 * Callers:
 *     UserScreenAccessCheck @ 0x1C00A3900 (UserScreenAccessCheck.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edi

  v2 = 0;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( !a1
    || (v6 = *(_QWORD *)(v3 + 456)) != 0 && (v7 = *(_QWORD **)(v6 + 8), v5 = (_QWORD *)*v7, *(_QWORD *)*v7 == a1)
    || (*(_DWORD *)(v3 + 488) & 8) != 0
    || (*(_DWORD *)(v3 + 1272) & 4) != 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v11 = *(_DWORD *)(v10 + 12);
    if ( (v11 & 0x10) != 0 && (v11 & 0x40000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v10 || (_BYTE)v9 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          10,
          458,
          (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
      v12 = 0;
      if ( qword_1C02D6530 && (int)qword_1C02D6530() >= 0 && qword_1C02D6538 )
        v12 = qword_1C02D6538();
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v10 || (_BYTE)v9 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          10,
          459,
          (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
      if ( !v12 )
        return 1;
    }
  }
  return v2;
}
