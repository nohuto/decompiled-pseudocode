/*
 * XREFs of PlaySoundDisconnect @ 0x1C0377450
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00EFD74 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00EFE28 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     CleanupPlaySound @ 0x1C0122180 (CleanupPlaySound.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
