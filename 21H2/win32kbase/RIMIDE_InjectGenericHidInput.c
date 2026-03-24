/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1C016B900
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x1C0130B20 (NtUserInjectGenericHidInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0166A18 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // r12
  struct RIMDEV *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx

  v4 = a4;
  v7 = (struct RIMDEV *)(a1 + 88);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v8 = *(_QWORD *)(a1 + 424);
  v9 = *(_QWORD *)(a1 + 472);
  if ( !*(_DWORD *)(v9 + 16) )
    *(_DWORD *)(v9 + 16) = 1;
  RIMLockExclusive(v8 + 104);
  if ( !*(_BYTE *)(v8 + 81) )
  {
    if ( (_DWORD)v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v4] > MmUserProbeAddress || &a3[v4] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(*(void **)(*(_QWORD *)(a1 + 552) + 24LL), a3, v4);
    RIMLockExclusive(v8 + 568);
    *(_DWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 352) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 552) + 44LL);
    rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v8, v7);
    *(_QWORD *)(v8 + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 568, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v8 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
