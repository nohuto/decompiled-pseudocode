/*
 * XREFs of KiWaitSatisfyOther @ 0x1402EDB1C
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     KiWaitSatisfyAny @ 0x1402ED5CC (KiWaitSatisfyAny.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
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
