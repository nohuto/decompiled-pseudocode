/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x140536B20
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindVolume @ 0x1403C175C (CcNotifyWriteBehindVolume.c)
 *     CcNotifyWriteBehindInternal @ 0x140536B4C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    CcNotifyWriteBehindVolume(a2, a3);
  else
    CcNotifyWriteBehindInternal(a1, a3);
  return 1;
}
