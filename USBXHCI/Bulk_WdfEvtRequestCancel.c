/*
 * XREFs of Bulk_WdfEvtRequestCancel @ 0x1C000DD10
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDDq @ 0x1C000DE84 (WPP_RECORDER_SF_DDDq.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bp
  char v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rcx

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063090);
  v4 = *(_QWORD *)(v3 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_QWORD *)(v4 + 56);
    v6 = *(_DWORD *)(v5 + 144);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_DDDq(*(_QWORD *)(v5 + 80), v6, *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL), 13);
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 1 )
  {
    v7 = *(_DWORD *)(v4 + 324);
    if ( (v7 & 0x20) != 0 )
    {
      v9 = v4 + 368;
      v10 = *(_QWORD *)(v4 + 368);
      if ( v10 != v4 + 368 )
      {
        **(_QWORD **)(v4 + 408) = v10;
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = *(_QWORD *)(v4 + 408);
        **(_QWORD **)(v4 + 376) = v4 + 400;
        *(_QWORD *)(v4 + 408) = *(_QWORD *)(v4 + 376);
        *(_QWORD *)(v4 + 376) = v4 + 368;
        *(_QWORD *)v9 = v9;
      }
      v1 = 1;
    }
    else
    {
      v2 = 1;
      *(_DWORD *)(v4 + 324) = v7 | 0x10;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v2 )
  {
    v8 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v8 + 296), 130);
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 2 )
  {
    v11 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
      || (v12 = *(_QWORD **)(v3 + 8), *v12 != v3)
      || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = *(__int64 **)(v4 + 408), *v13 != v4 + 400) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v4 + 400;
    v1 = 1;
    *(_QWORD *)(v3 + 8) = v13;
    *v13 = v3;
    *(_QWORD *)(v4 + 408) = v3;
  }
  *(_DWORD *)(v3 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion(v4);
}
