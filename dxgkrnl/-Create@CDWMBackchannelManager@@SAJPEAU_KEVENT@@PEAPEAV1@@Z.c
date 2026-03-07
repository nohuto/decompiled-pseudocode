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
