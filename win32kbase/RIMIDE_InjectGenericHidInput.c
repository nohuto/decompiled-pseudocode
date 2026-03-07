__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, int a2, char *a3, unsigned int a4)
{
  size_t v4; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct RIMDEV *v14; // [rsp+50h] [rbp-48h]

  v4 = a4;
  v14 = (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0));
  InputTraceLogging::RIM::InjectInput((__int64)v14);
  v7 = *(_QWORD *)(a1 + 408);
  v8 = *(_QWORD *)(a1 + 456);
  if ( !*(_DWORD *)(v8 + 16) )
    *(_DWORD *)(v8 + 16) = 1;
  RIMLockExclusive(v7 + 104);
  if ( !*(_BYTE *)(v7 + 81) )
  {
    if ( a2 && (_DWORD)v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v10, v9, v11, v12) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v4] > MmUserProbeAddress || &a3[v4] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(*(void **)(*(_QWORD *)(a1 + 528) + 24LL), a3, v4);
    RIMLockExclusive(v7 + 760);
    *(_DWORD *)(a1 + 328) = 0;
    *(_QWORD *)(a1 + 336) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 528) + 44LL);
    rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v7, v14, 1);
    *(_QWORD *)(v7 + 768) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 760, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v7 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
