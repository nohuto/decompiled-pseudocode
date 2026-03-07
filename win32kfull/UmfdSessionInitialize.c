__int64 __fastcall UmfdSessionInitialize(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  PVOID v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v3 = SGDGetSessionState(v2);
  v4 = EngAllocMem(0, 0x50u, 0x35474747u);
  *(_QWORD *)(v3 + 40) = v4;
  v6 = 0;
  if ( !v4 )
    return 3221225473LL;
  v7 = SGDGetSessionState(v5);
  memset_0(*(void **)(v7 + 40), 0, 0x50uLL);
  GreInitializePushLock(v1 + 23464);
  GreInitializePushLock(v1 + 23440);
  v8 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create();
  *(_QWORD *)(v1 + 23480) = v8;
  if ( !v8
    || !(unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL)
    || !UmfdHostLifeTimeManager::SessionInitialize()
    || !UmfdAllocation::Initialize() )
  {
    return 3221225473LL;
  }
  if ( (int)UmfdCallSessionInitialize() < 0 )
    return (unsigned int)-1073741823;
  return v6;
}
