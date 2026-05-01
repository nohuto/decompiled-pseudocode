/*
 * XREFs of ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x180072FB0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015D90 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016CE0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSet::CheckUpdatePendStats(ExecutionModel::ResourceSet *this, int a2, int a3)
{
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 333);
    if ( (v5 & 0x10) == 0 )
    {
      *((_DWORD *)this + 333) = v5 | 0x10;
      RtlQueryUnbiasedInterruptTime(&v7);
      *((_DWORD *)this + 441) = v7 / 0x2710;
    }
  }
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 333);
    if ( (v6 & 0x20) == 0 )
    {
      *((_DWORD *)this + 333) = v6 | 0x20;
      RtlQueryUnbiasedInterruptTime(&v7);
      *((_DWORD *)this + 442) = v7 / 0x2710;
    }
  }
}
