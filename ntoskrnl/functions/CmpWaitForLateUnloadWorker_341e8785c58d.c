__int64 __fastcall CmpWaitForLateUnloadWorker(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  ((void (*)(void))CmLockHive)();
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 4800);
    v2 = v4;
    result = CmUnlockHive(a1);
    if ( !v2 )
      break;
    ExBlockOnAddressPushLock(a1 + 4808, a1 + 4800, (unsigned int)&v4, 4, 0LL);
    CmLockHive(a1);
  }
  return result;
}
