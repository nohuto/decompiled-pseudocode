/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B8D38
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B9C5C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F310 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008364 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008394 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C003F6C8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02CA500 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C030FD40 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  bool v4; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v6; // r14
  unsigned int i; // esi
  char v9; // [rsp+80h] [rbp+8h] BYREF
  char v10; // [rsp+81h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 8500LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8500LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 366) )
  {
    WdLogSingleEntry1(1LL, 8505LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore != NULL", 8505LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 760LL) + 8LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 366) + 768LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 248)) )
  {
    WdLogSingleEntry1(1LL, 8529LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldDdiAccess != 0", 8529LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v9);
  v4 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 34)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 34));
  v6 = IsResourceAcquiredSharedLite != 0;
  if ( v4 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 366)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 71);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2871) = 1;
    if ( !v4 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 34));
      if ( v6 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 34), 1u);
    }
    KeSetEvent((PRKEVENT)((char *)this + 248), 0, 0);
    if ( v10 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v9);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 34));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 34), 0) )
      {
        *((_DWORD *)a2 + 699) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C0140A80 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 248), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v9);
    return 3221225653LL;
  }
}
