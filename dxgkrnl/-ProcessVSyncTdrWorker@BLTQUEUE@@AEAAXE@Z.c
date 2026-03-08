/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C03CEDAC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03CCFEC (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03D0218 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, char a2)
{
  struct _KTHREAD *v4; // r9
  unsigned int v5; // r8d
  int i; // r10d
  __int64 v7; // rcx

  BLTQUEUE::DisableHwVSyncWorker(this);
  v4 = *this;
  v5 = 0;
  for ( i = *((_DWORD *)this + 64); v5 < *(_DWORD *)v4; ++v5 )
  {
    if ( v5 != i )
    {
      v7 = *((_QWORD *)v4 + 1) + 2920LL * v5;
      if ( *(_QWORD *)(v7 + 608) )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 580));
    }
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    *this,
    8 - (unsigned int)(a2 != 0),
    *((unsigned int *)this + 64),
    10000000LL * (unsigned int)dword_1C013BA7C);
}
