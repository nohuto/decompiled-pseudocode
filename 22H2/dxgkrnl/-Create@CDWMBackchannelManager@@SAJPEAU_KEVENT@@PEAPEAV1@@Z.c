/*
 * XREFs of ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x1C0087F5C
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x1C0084170 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z @ 0x1C0087E54 (--0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall CDWMBackchannelManager::Create(struct _KEVENT *a1, struct CDWMBackchannelManager **a2)
{
  CDWMBackchannelManager *Pool2; // rcx
  struct CDWMBackchannelManager *v5; // rax

  Pool2 = (CDWMBackchannelManager *)ExAllocatePool2(257LL, 48LL, 1835156294LL);
  v5 = 0LL;
  if ( Pool2 )
    v5 = CDWMBackchannelManager::CDWMBackchannelManager(Pool2, a1);
  *a2 = v5;
  return v5 == 0LL ? 0xC0000017 : 0;
}
