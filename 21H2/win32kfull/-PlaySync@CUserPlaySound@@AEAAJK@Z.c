/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FA304
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     PostPlaySoundMessage @ 0x1C0111130 (PostPlaySoundMessage.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 * Callees:
 *     PlaySoundPostMessage @ 0x1C03775FC (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  char *v1; // rdi
  unsigned int v3; // esi

  v1 = (char *)(this + 1);
  v3 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  if ( *this )
    v3 = PlaySoundPostMessage(*this);
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
