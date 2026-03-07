struct _KTHREAD *__fastcall ExInitializeFastOwnerEntry(__int64 a1)
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // al

  if ( FeatureFastResource2 )
    return (struct _KTHREAD *)ExInitializeFastOwnerEntry2();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
