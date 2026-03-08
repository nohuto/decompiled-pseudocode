/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14099E1CC
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x140999490 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     PpmIdlePrevetoWatchdog @ 0x140582DB0 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14058F848 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14058FA44 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x1405A06C0 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x14097D660 (PopCheckTestsigningEnabled.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140981B94 (PopFxDestroyDripsBlockingDeviceList.c)
 */

void __fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r13d
  char v7; // r15
  __int128 *v8; // rdi
  char v9; // r12
  unsigned __int16 *v10; // r14
  __int64 v11; // r15
  char v12; // r13
  int v13; // eax
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // r14
  ULONG_PTR *v16; // r15
  ULONG_PTR v17; // r15
  __int64 v18; // rcx
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+40h] BYREF
  int v21; // [rsp+C0h] [rbp+50h]
  __int64 v22; // [rsp+C8h] [rbp+58h] BYREF

  v21 = a3;
  v5 = (unsigned int)(10000 * *(_DWORD *)(a1 + 8));
  v6 = 0;
  v22 = 0LL;
  v7 = a3;
  v19 = 0LL;
  v20 = 0;
  if ( (int)PopFxBuildDripsBlockingDeviceList(v5, &v19) >= 0 )
  {
    v8 = (__int128 *)v19;
    v9 = (_QWORD)v19 != (_QWORD)&v19;
    if ( (__int128 *)v19 != &v19 )
    {
      do
      {
        v10 = (unsigned __int16 *)(*((_QWORD *)v8 - 103) + 56LL);
        if ( *((_DWORD *)v8 + 8) )
        {
          v11 = 0LL;
          v12 = v21;
          do
          {
            PopDiagTraceCsDripsWatchdog(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 8),
              *(_BYTE *)(a1 + 24) != 0,
              *(_DWORD *)(a1 + 20),
              1u,
              a2,
              v10,
              (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 8 * v11) + 56LL),
              0,
              v12);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *((_DWORD *)v8 + 8) );
          v7 = v21;
        }
        else
        {
          PopDiagTraceCsDripsWatchdog(
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 12),
            *(_DWORD *)(a1 + 8),
            *(_BYTE *)(a1 + 24) != 0,
            *(_DWORD *)(a1 + 20),
            1u,
            a2,
            v10,
            0LL,
            0,
            v7);
        }
        v8 = *(__int128 **)v8;
      }
      while ( v8 != &v19 );
      v8 = (__int128 *)v19;
      v6 = v20;
    }
    if ( !v9 )
    {
      PpmIdlePrevetoWatchdog((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), &v20, &v22);
      v6 = v20;
      PopDiagTraceCsDripsWatchdog(
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 8),
        *(_BYTE *)(a1 + 24) != 0,
        *(_DWORD *)(a1 + 20),
        0,
        a2,
        0LL,
        0LL,
        v20,
        v7);
      v8 = (__int128 *)v19;
    }
    v13 = *(unsigned __int8 *)(a1 + 24);
    if ( !(_BYTE)v13 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 8),
          v13,
          *(_DWORD *)(a1 + 20),
          v9,
          a2);
        v8 = (__int128 *)v19;
      }
      if ( v9 )
      {
        v14 = (ULONG_PTR)v8 - 872;
        v15 = v14 + 872;
        v16 = (ULONG_PTR *)(v14 + 48);
        if ( *(_DWORD *)(v14 + 904) )
          v16 = *(ULONG_PTR **)(v14 + 896);
        v17 = *v16;
      }
      else
      {
        v17 = 0LL;
        v14 = 0LL;
        v15 = 0LL;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && v9 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v9 )
      {
        if ( (a2 & 0x40) != 0 )
          NT_ASSERT(
            "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromi"
            "sed. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idl"
            "e platform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of conn"
            "ected standby without
    activators active.

    Run !platformidle to identify the device with an
    unsat"
            "isifed DRIPS constraint.
");
        if ( (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
      }
      if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
      {
        if ( v9 )
        {
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351LL, 2LL, v14, *(unsigned int *)(v15 + 16), v17, 0LL, 0LL, 0);
        }
        else if ( v6 )
        {
          if ( PopFxProcessorPlugin )
            v18 = *(_QWORD *)(PopFxProcessorPlugin + 104);
          else
            v18 = 0LL;
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351LL, 3LL, v6, v22, v18, 0LL, 0LL, 0);
        }
      }
    }
    PopFxDestroyDripsBlockingDeviceList(&v19);
  }
}
