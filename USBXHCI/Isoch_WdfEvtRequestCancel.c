/*
 * XREFs of Isoch_WdfEvtRequestCancel @ 0x1C0045C90
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C004207C (WPP_RECORDER_SF_DDi.c)
 */

void __fastcall Isoch_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // si
  char v2; // bp
  char v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 *v14; // rcx

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063090);
  v5 = *(_QWORD *)(v4 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)(v5 + 56);
    v7 = *(_DWORD *)(v6 + 144);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v6 + 80),
      v7,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
      51,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
      *(_DWORD *)(v6 + 144),
      v1);
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 64) == 1 )
  {
    v8 = *(_DWORD *)(v5 + 328);
    if ( (v8 & 2) != 0 )
    {
      v9 = v5 + 384;
      v10 = *(_QWORD *)(v5 + 384);
      if ( v10 != v5 + 384 )
      {
        **(_QWORD **)(v5 + 424) = v10;
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = *(_QWORD *)(v5 + 424);
        **(_QWORD **)(v5 + 392) = v5 + 416;
        *(_QWORD *)(v5 + 424) = *(_QWORD *)(v5 + 392);
        *(_QWORD *)(v5 + 392) = v5 + 384;
        *(_QWORD *)v9 = v9;
      }
      v2 = 1;
    }
    else
    {
      v3 = 1;
      *(_DWORD *)(v5 + 328) = v8 | 4;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v3 )
  {
    v11 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v11 + 296), 130);
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 64) == 2 )
  {
    v12 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4
      || (v13 = *(_QWORD **)(v4 + 8), *v13 != v4)
      || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = *(__int64 **)(v5 + 424), *v14 != v5 + 416) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v5 + 416;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v14;
    *v14 = v4;
    *(_QWORD *)(v5 + 424) = v4;
  }
  *(_DWORD *)(v4 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v2 )
    TR_QueueDpcForTransferCompletion(v5);
}
