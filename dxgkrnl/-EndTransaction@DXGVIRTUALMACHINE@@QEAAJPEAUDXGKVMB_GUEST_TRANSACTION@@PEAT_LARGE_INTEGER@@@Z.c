/*
 * XREFs of ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C03922F8
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C03222E4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::EndTransaction(
        DXGVIRTUALMACHINE *this,
        struct DXGKVMB_GUEST_TRANSACTION *a2,
        union _LARGE_INTEGER *a3)
{
  NTSTATUS v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  struct DXGKVMB_GUEST_TRANSACTION *v11; // rdx
  struct DXGKVMB_GUEST_TRANSACTION **v12; // rax

  if ( g_DisableTransactionTimeout )
    a3 = 0LL;
  v5 = KeWaitForSingleObject((char *)a2 + 24, Executive, 0, 0, a3);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 344));
  if ( v5 == 258 )
  {
    if ( !KeReadStateEvent((PRKEVENT)a2 + 1) )
    {
      WdLogSingleEntry1(2LL, 126LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Timeout occurred while waiting for guest transaction",
        126LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_6:
      LODWORD(v10) = -1073741823;
      goto LABEL_7;
    }
  }
  else if ( v5 )
  {
    goto LABEL_6;
  }
  v10 = *((int *)a2 + 12);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = *((_QWORD *)a2 + 2);
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)a2 + 2), v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Transaction %I64u returned an error from the guest, Status=0x%.8x",
      *((_QWORD *)a2 + 2),
      v10,
      0LL,
      0LL,
      0LL);
  }
LABEL_7:
  v11 = *(struct DXGKVMB_GUEST_TRANSACTION **)a2;
  if ( *(struct DXGKVMB_GUEST_TRANSACTION **)(*(_QWORD *)a2 + 8LL) != a2
    || (v12 = (struct DXGKVMB_GUEST_TRANSACTION **)*((_QWORD *)a2 + 1), *v12 != a2) )
  {
    __fastfail(3u);
  }
  *v12 = v11;
  *((_QWORD *)v11 + 1) = v12;
  *((_QWORD *)this + 44) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 344, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
