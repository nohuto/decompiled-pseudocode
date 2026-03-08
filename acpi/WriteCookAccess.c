/*
 * XREFs of WriteCookAccess @ 0x1C0005DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DequeueAndReadyContext @ 0x1C00548A4 (DequeueAndReadyContext.c)
 *     QueueContext @ 0x1C0054D1C (QueueContext.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // edx
  __int64 v7; // r14
  int v8; // edx
  int v9; // edx
  KIRQL v10; // bl
  __int64 v11; // rcx
  char v13; // r12
  KIRQL v14; // r13
  __int32 v15; // edi
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // r8d
  char v20; // di
  __int64 v21; // r9
  unsigned int v22; // eax

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *(_DWORD *)(a2 + 16) += 2;
      goto LABEL_27;
    }
    v13 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v13 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    v15 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
    if ( v15 )
      QueueContext(a1, 0xFFFFLL, v7 + 32);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v14);
    if ( v15 )
      return 32772;
    v16 = *(_QWORD *)(a2 + 40);
    ++*(_DWORD *)(a2 + 16);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v16 + 16))(
            0LL,
            *(_QWORD *)(a2 + 32) + 120LL,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v16 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v18 = v17;
    if ( (v13 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v17 == 259 )
      return 32772;
    if ( v17 )
    {
      LogError(3222536216LL);
      AcpiDiagTraceAmlError(a1, 3222536216LL);
      v19 = v18;
LABEL_24:
      PrintDebugMessage(212, *(unsigned __int8 *)(v7 + 12), v19, 0, 0LL);
      return (unsigned int)-1072431080;
    }
LABEL_25:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_27;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_25;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v3;
    goto LABEL_8;
  }
LABEL_27:
  v20 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v20 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v21 = *(_QWORD *)(a2 + 40);
  ++*(_DWORD *)(a2 + 16);
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v21 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v21 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v3 = v22;
  if ( (v20 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v22 == 259 )
    return 32772;
  if ( v22 )
  {
    LogError(3222536216LL);
    AcpiDiagTraceAmlError(a1, 3222536216LL);
    v19 = v3;
    goto LABEL_24;
  }
LABEL_8:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    DequeueAndReadyContext(v7 + 32);
    _InterlockedExchange((volatile __int32 *)(v7 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v10);
  }
  v11 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v11 + 8);
  HeapFree(v11);
  return v3;
}
