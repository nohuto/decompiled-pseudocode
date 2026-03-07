void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  __int64 v4; // rax
  struct DXGADAPTER *v5; // rdx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  DXGDODPRESENT *v10; // rcx

  if ( KeGetCurrentIrql() < 2u )
  {
    WdLogSingleEntry1(1LL, 28LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"KeGetCurrentIrql() >= DISPATCH_LEVEL",
          28LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 3936LL), 0, 0) & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
    {
      v5 = *(struct DXGADAPTER **)(v4 + 3912);
      if ( v5 )
      {
        v6 = *((_QWORD *)v5 + 366);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v6 + 736)
                                                                                                 + 8LL)
                                                                                     + 8LL))(
            a1,
            a2);
        }
        else
        {
          v10 = *(DXGDODPRESENT **)(*((_QWORD *)v5 + 365) + 448LL);
          if ( v10 )
            DXGDODPRESENT::NotifyInterrupt(v10, v5, a2);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
    }
  }
}
