/*
 * XREFs of Control_WdfEvtTimerForTransferTimeout @ 0x1C00432B0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C004207C (WPP_RECORDER_SF_DDi.c)
 */

void __fastcall Control_WdfEvtTimerForTransferTimeout(__int64 a1)
{
  char v1; // si
  char v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  int v7; // edx
  KIRQL v8; // al
  __int64 v9; // rdx

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v3,
         off_1C0063388);
  v5 = *(_QWORD *)(v4 + 344);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)(v4 + 56);
    v7 = *(_DWORD *)(v6 + 144);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v6 + 80),
      v7,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      40,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(v6 + 144),
      *(_QWORD *)(v5 + 24));
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v8;
  if ( *(_DWORD *)(v5 + 116) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 352) & 8) != 0 )
      v1 = 1;
    else
      v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v8);
  if ( v2 )
  {
    v9 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v9 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v9 + 296), 130);
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v5 + 116) == 2 && (!v2 || (*(_DWORD *)(v4 + 352) & 0xA) != 0) )
    v1 = 1;
  *(_DWORD *)(v5 + 116) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion(v4);
}
