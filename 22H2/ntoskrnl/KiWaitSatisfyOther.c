/*
 * XREFs of KiWaitSatisfyOther @ 0x14034ADB4
 * Callers:
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 *     KeRegisterObjectDpc @ 0x140568188 (KeRegisterObjectDpc.c)
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
