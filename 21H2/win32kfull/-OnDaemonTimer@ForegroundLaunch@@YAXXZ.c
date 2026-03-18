/*
 * XREFs of ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0076BC8
 * Callers:
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 */

void __fastcall ForegroundLaunch::OnDaemonTimer(ForegroundLaunch *this)
{
  LONGLONG v1; // rbx
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  int v4; // edx
  int v5; // r8d
  PEPROCESS v6; // rcx
  int v7; // edx
  __int64 v8; // r8
  PEPROCESS Process; // [rsp+80h] [rbp+8h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v1 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  v2 = &unk_1C03360D0;
  v3 = 10LL;
  do
  {
    if ( *(_QWORD *)v2 && v2[3] == 1 )
    {
      LockProcessByClientId(*(_QWORD *)v2, &Process);
      v6 = Process;
      if ( Process )
      {
        if ( v1 > PsGetProcessCreateTimeQuadPart(Process) )
        {
          LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v7,
              v8,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              2,
              21,
              (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
              *v2);
          PsSetProcessPriorityByClass(Process, 0LL, v8);
          v2[3] = 0;
        }
        v6 = Process;
      }
      else
      {
        LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v4,
            v5,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            2,
            22,
            (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
            *v2);
          v6 = Process;
        }
        *(_OWORD *)v2 = 0LL;
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    v2 += 4;
    --v3;
  }
  while ( v3 );
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
}
