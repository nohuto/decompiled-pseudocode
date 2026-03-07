char __fastcall ESM_ShouldQueueWorkItem(__int64 a1, char a2)
{
  __int64 *v2; // r14
  char v5; // bl

  v2 = *(__int64 **)(a1 + 960);
  v5 = 0;
  if ( KeGetCurrentIrql() && (a2 || *(_BYTE *)(a1 + 1018) && !Controller_IsRunningWithIrqlRaisedAndTracked(*v2)) )
    return 1;
  return v5;
}
