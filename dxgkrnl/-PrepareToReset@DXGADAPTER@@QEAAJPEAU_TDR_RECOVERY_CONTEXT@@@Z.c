/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B3E78
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B4D9C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A4E0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EC0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C003E6DC (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C55E0 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C030AF10 (TdrBugcheckOnTimeout.c)
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
    WdLogSingleEntry1(1LL, 8513LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8513LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 366) )
  {
    WdLogSingleEntry1(1LL, 8518LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore != NULL", 8518LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 760LL) + 8LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 366) + 768LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 248)) )
  {
    WdLogSingleEntry1(1LL, 8542LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldDdiAccess != 0", 8542LL, 0LL, 0LL, 0LL, 0LL);
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
      if ( i >= dword_1C013BA80 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)((char *)this + 248), 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v9);
    return 3221225653LL;
  }
}
