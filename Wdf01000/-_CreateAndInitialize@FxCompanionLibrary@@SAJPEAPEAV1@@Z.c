__int64 __fastcall FxCompanionLibrary::_CreateAndInitialize(FxCompanionLibrary **CompanionLib)
{
  _KEVENT *Pool2; // rax
  FxCompanionLibrary *v3; // rbx
  __int64 result; // rax

  Pool2 = (_KEVENT *)ExAllocatePool2(64LL, 56LL, 1917089862LL);
  v3 = (FxCompanionLibrary *)Pool2;
  if ( Pool2 )
  {
    Pool2[1].Header.LockNV = 0;
    Pool2[1].Header.WaitListHead.Flink = 0LL;
    KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
    v3->m_RdNonPnPDevice = 0LL;
    v3->m_RdNonPnPFile = 0LL;
    result = 0LL;
    *CompanionLib = v3;
  }
  else
  {
    *CompanionLib = 0LL;
    return 3221225495LL;
  }
  return result;
}
