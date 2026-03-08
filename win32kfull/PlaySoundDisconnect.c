/*
 * XREFs of PlaySoundDisconnect @ 0x1C039CF50
 * Callers:
 *     CleanupPlaySound @ 0x1C00F5BA0 (CleanupPlaySound.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00F6B4C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00F6C0C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
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
