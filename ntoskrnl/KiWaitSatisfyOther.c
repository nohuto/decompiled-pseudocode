/*
 * XREFs of KiWaitSatisfyOther @ 0x140293B88
 * Callers:
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     KeRegisterObjectDpc @ 0x140565CE8 (KeRegisterObjectDpc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiWaitSatisfyOther(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
