/*
 * XREFs of ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C012DF70
 * Callers:
 *     NtUserDoSoundConnect @ 0x1C0135420 (NtUserDoSoundConnect.c)
 *     NtUserDoSoundDisconnect @ 0x1C01376C0 (NtUserDoSoundDisconnect.c)
 * Callees:
 *     PlaySoundDisconnect @ 0x1C037B7C8 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Disconnect(CUserPlaySound *this)
{
  void **v1; // rdi
  RPC_BINDING_HANDLE *v2; // rbx
  void *v3; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  v1 = CUserPlaySound::s_pUserPlaySound;
  Binding = 0LL;
  v2 = CUserPlaySound::s_pUserPlaySound + 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  v3 = *v1;
  if ( *v1 )
  {
    *v1 = 0LL;
    Binding = v3;
  }
  if ( v2 )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( Binding )
    return PlaySoundDisconnect(&Binding);
  else
    return 3221225506LL;
}
