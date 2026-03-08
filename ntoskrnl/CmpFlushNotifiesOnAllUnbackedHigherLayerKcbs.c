/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1CF98
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14067DB14 (CmpLightWeightCommitRecreateKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 */

_UNKNOWN **__fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0x100000008LL;
  BYTE5(v5) = a4;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpFlushNotifiesPostCallback,
           a3,
           (__int64)&v5,
           a4,
           1);
}
